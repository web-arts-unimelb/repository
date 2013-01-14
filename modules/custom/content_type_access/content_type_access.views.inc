<?php
/**
 * @file
 */

/**
 * Implements hook_views_data().
 */
function content_type_access_views_data() {
  $data['content_type_access']['table']['group'] = t('Content Type Access');

  $data['content_type_access']['table']['aid'] = array(
    'field' => 'aid', // This is the identifier field for the view.
    'title' => t('Content Type Access'), 
    'help' => t('Contains per-user node type access records.'),
    'weight' => -10,
  );

  // `aid` int(10) unsigned NOT NULL AUTO_INCREMENT COMMENT 'The primary identifier for an access record.',
  $data['content_type_access']['aid'] = array(
    'title' => t('Content Type Access ID'),
    'help' => t('Some example content that references a node.'),
    'field' => array(
    'handler' => 'views_handler_field_numeric',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_numeric',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  // `uid` int(10) unsigned NOT NULL COMMENT 'The users.uid for this access record.',
  $data['content_type_access']['uid'] = array(
    'title' => t('Content Type Access ID'),
    'help' => t('Some example content that references a node.'),
    'field' => array(
    'handler' => 'views_handler_field_user',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_user',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort_user',
    ),
    'relationship' => array(
      'base' => 'users',     // The name of the table to join with. 
      'base field' => 'uid', // The name of the field on the joined table.
      'handler' => 'views_handler_relationship', 
      'label' => t('The users whose access entry this is'),
      'title' => t('Title shown when adding the relationship'),
      'help' => t('More information on this relationship'),
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_user',
    ),
  );

  // `type` varchar(255) NOT NULL DEFAULT '' COMMENT 'The node.type for this access record.',
  $data['content_type_access']['type'] = array(
    'title' => t('Node Type'),
    'help' => t('Some example content that references a node.'),
    'field' => array(
    'handler' => 'views_handler_field_string',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // `op` varchar(255) NOT NULL DEFAULT '' COMMENT 'The operation that is being controlled by this access record.',
  $data['content_type_access']['op'] = array(
    'title' => t('Operation'),
    'help' => t(''),
    'field' => array(
    'handler' => 'views_handler_field',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_string',
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
    'argument' => array(
      'handler' => 'views_handler_argument_string',
    ),
  );

  // `access` int(10) unsigned NOT NULL COMMENT 'The grant for this access record; 1 = granted, 0 = rejected.',
  $data['content_type_access']['access'] = array(
    'title' => t('Access'),
    'help' => t('Some example content that references a node.'),
    'field' => array(
    'handler' => 'views_handler_field_boolean',
      'click sortable' => TRUE,
    ),
    'filter' => array(
      'handler' => 'views_handler_filter_boolean_operator',
      'label' => t('Access'),
      'type' => 'yes-no',
      'use equal' => TRUE,
    ),
    'sort' => array(
      'handler' => 'views_handler_sort',
    ),
  );

  return $data;
}
