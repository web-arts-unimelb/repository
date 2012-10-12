<?php
/**
 * @file
 * repository_export_views.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function repository_export_views_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'award_syndicate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Award Syndicate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Site';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'site' => 'site',
    'industry' => 0,
    'voocab' => 0,
  );
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Process */
  $handler->display->display_options['fields']['field_award_process']['id'] = 'field_award_process';
  $handler->display->display_options['fields']['field_award_process']['table'] = 'field_data_field_award_process';
  $handler->display->display_options['fields']['field_award_process']['field'] = 'field_award_process';
  $handler->display->display_options['fields']['field_award_process']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_award_process']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_award_process']['separator'] = '|';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Background';
  /* Field: Content: Students */
  $handler->display->display_options['fields']['field_award_students']['id'] = 'field_award_students';
  $handler->display->display_options['fields']['field_award_students']['table'] = 'field_data_field_award_students';
  $handler->display->display_options['fields']['field_award_students']['field'] = 'field_award_students';
  $handler->display->display_options['fields']['field_award_students']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_award_students']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_award_students']['separator'] = '|';
  /* Field: Content: Study level */
  $handler->display->display_options['fields']['field_award_study_level']['id'] = 'field_award_study_level';
  $handler->display->display_options['fields']['field_award_study_level']['table'] = 'field_data_field_award_study_level';
  $handler->display->display_options['fields']['field_award_study_level']['field'] = 'field_award_study_level';
  $handler->display->display_options['fields']['field_award_study_level']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_award_study_level']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_award_study_level']['separator'] = '|';
  /* Field: Content: Year level */
  $handler->display->display_options['fields']['field_award_year_level']['id'] = 'field_award_year_level';
  $handler->display->display_options['fields']['field_award_year_level']['table'] = 'field_data_field_award_year_level';
  $handler->display->display_options['fields']['field_award_year_level']['field'] = 'field_award_year_level';
  $handler->display->display_options['fields']['field_award_year_level']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_award_year_level']['delta_offset'] = '0';
  /* Field: Content: Travel support */
  $handler->display->display_options['fields']['field_award_travel_support']['id'] = 'field_award_travel_support';
  $handler->display->display_options['fields']['field_award_travel_support']['table'] = 'field_data_field_award_travel_support';
  $handler->display->display_options['fields']['field_award_travel_support']['field'] = 'field_award_travel_support';
  $handler->display->display_options['fields']['field_award_travel_support']['type'] = 'list_key';
  /* Field: Content: Citizenship */
  $handler->display->display_options['fields']['field_award_citizenship']['id'] = 'field_award_citizenship';
  $handler->display->display_options['fields']['field_award_citizenship']['table'] = 'field_data_field_award_citizenship';
  $handler->display->display_options['fields']['field_award_citizenship']['field'] = 'field_award_citizenship';
  $handler->display->display_options['fields']['field_award_citizenship']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_award_citizenship']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_award_citizenship']['separator'] = '|';
  /* Field: Content: Financial need */
  $handler->display->display_options['fields']['field_award_financial_need']['id'] = 'field_award_financial_need';
  $handler->display->display_options['fields']['field_award_financial_need']['table'] = 'field_data_field_award_financial_need';
  $handler->display->display_options['fields']['field_award_financial_need']['field'] = 'field_award_financial_need';
  $handler->display->display_options['fields']['field_award_financial_need']['type'] = 'list_key';
  /* Field: Content: Other */
  $handler->display->display_options['fields']['field_award_other']['id'] = 'field_award_other';
  $handler->display->display_options['fields']['field_award_other']['table'] = 'field_data_field_award_other';
  $handler->display->display_options['fields']['field_award_other']['field'] = 'field_award_other';
  /* Field: Content: Conditions */
  $handler->display->display_options['fields']['field_award_conditions']['id'] = 'field_award_conditions';
  $handler->display->display_options['fields']['field_award_conditions']['table'] = 'field_data_field_award_conditions';
  $handler->display->display_options['fields']['field_award_conditions']['field'] = 'field_award_conditions';
  /* Field: Content: Application process */
  $handler->display->display_options['fields']['field_award_application_process']['id'] = 'field_award_application_process';
  $handler->display->display_options['fields']['field_award_application_process']['table'] = 'field_data_field_award_application_process';
  $handler->display->display_options['fields']['field_award_application_process']['field'] = 'field_award_application_process';
  /* Field: Content: Submissions */
  $handler->display->display_options['fields']['field_award_submissions']['id'] = 'field_award_submissions';
  $handler->display->display_options['fields']['field_award_submissions']['table'] = 'field_data_field_award_submissions';
  $handler->display->display_options['fields']['field_award_submissions']['field'] = 'field_award_submissions';
  $handler->display->display_options['fields']['field_award_submissions']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_award_submissions']['type'] = 'link_plain';
  /* Field: Content: Application open and closing dates */
  $handler->display->display_options['fields']['field_award_application_date']['id'] = 'field_award_application_date';
  $handler->display->display_options['fields']['field_award_application_date']['table'] = 'field_data_field_award_application_date';
  $handler->display->display_options['fields']['field_award_application_date']['field'] = 'field_award_application_date';
  $handler->display->display_options['fields']['field_award_application_date']['label'] = 'Open Date';
  $handler->display->display_options['fields']['field_award_application_date']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_award_application_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Application open and closing dates */
  $handler->display->display_options['fields']['field_award_application_date_1']['id'] = 'field_award_application_date_1';
  $handler->display->display_options['fields']['field_award_application_date_1']['table'] = 'field_data_field_award_application_date';
  $handler->display->display_options['fields']['field_award_application_date_1']['field'] = 'field_award_application_date';
  $handler->display->display_options['fields']['field_award_application_date_1']['label'] = 'Closing Date';
  $handler->display->display_options['fields']['field_award_application_date_1']['type'] = 'date_plain';
  $handler->display->display_options['fields']['field_award_application_date_1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'value2',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Term */
  $handler->display->display_options['fields']['field_award_term']['id'] = 'field_award_term';
  $handler->display->display_options['fields']['field_award_term']['table'] = 'field_data_field_award_term';
  $handler->display->display_options['fields']['field_award_term']['field'] = 'field_award_term';
  $handler->display->display_options['fields']['field_award_term']['type'] = 'number_unformatted';
  $handler->display->display_options['fields']['field_award_term']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Frequency */
  $handler->display->display_options['fields']['field_award_frequency']['id'] = 'field_award_frequency';
  $handler->display->display_options['fields']['field_award_frequency']['table'] = 'field_data_field_award_frequency';
  $handler->display->display_options['fields']['field_award_frequency']['field'] = 'field_award_frequency';
  $handler->display->display_options['fields']['field_award_frequency']['type'] = 'list_key';
  /* Field: Content: University trust record */
  $handler->display->display_options['fields']['field_award_uni_trust_record']['id'] = 'field_award_uni_trust_record';
  $handler->display->display_options['fields']['field_award_uni_trust_record']['table'] = 'field_data_field_award_uni_trust_record';
  $handler->display->display_options['fields']['field_award_uni_trust_record']['field'] = 'field_award_uni_trust_record';
  $handler->display->display_options['fields']['field_award_uni_trust_record']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_award_uni_trust_record']['type'] = 'link_plain';
  /* Field: Content: Enquire now */
  $handler->display->display_options['fields']['field_award_enquire_now']['id'] = 'field_award_enquire_now';
  $handler->display->display_options['fields']['field_award_enquire_now']['table'] = 'field_data_field_award_enquire_now';
  $handler->display->display_options['fields']['field_award_enquire_now']['field'] = 'field_award_enquire_now';
  $handler->display->display_options['fields']['field_award_enquire_now']['type'] = 'email_plain';
  /* Field: Content: Research area */
  $handler->display->display_options['fields']['field_award_research_area']['id'] = 'field_award_research_area';
  $handler->display->display_options['fields']['field_award_research_area']['table'] = 'field_data_field_award_research_area';
  $handler->display->display_options['fields']['field_award_research_area']['field'] = 'field_award_research_area';
  $handler->display->display_options['fields']['field_award_research_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_award_research_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_award_research_area']['separator'] = '|';
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['label'] = 'Promoted';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'award' => 'award',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['path'] = 'repository/export/%/award';
  $export['award_syndicate'] = $view;

  $view = new view();
  $view->name = 'equipment_syndicate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Equipment Syndicate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Site';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'site' => 'site',
    'industry' => 0,
    'voocab' => 0,
  );
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_equipment_type']['id'] = 'field_equipment_type';
  $handler->display->display_options['fields']['field_equipment_type']['table'] = 'field_data_field_equipment_type';
  $handler->display->display_options['fields']['field_equipment_type']['field'] = 'field_equipment_type';
  $handler->display->display_options['fields']['field_equipment_type']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_equipment_type']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Description';
  /* Field: Content: Booking link */
  $handler->display->display_options['fields']['field_equipment_booking_link']['id'] = 'field_equipment_booking_link';
  $handler->display->display_options['fields']['field_equipment_booking_link']['table'] = 'field_data_field_equipment_booking_link';
  $handler->display->display_options['fields']['field_equipment_booking_link']['field'] = 'field_equipment_booking_link';
  $handler->display->display_options['fields']['field_equipment_booking_link']['label'] = 'Booking';
  $handler->display->display_options['fields']['field_equipment_booking_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_equipment_booking_link']['type'] = 'link_plain';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_equipment_image']['id'] = 'field_equipment_image';
  $handler->display->display_options['fields']['field_equipment_image']['table'] = 'field_data_field_equipment_image';
  $handler->display->display_options['fields']['field_equipment_image']['field'] = 'field_equipment_image';
  $handler->display->display_options['fields']['field_equipment_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_equipment_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_equipment_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Manual */
  $handler->display->display_options['fields']['field_equipment_manual']['id'] = 'field_equipment_manual';
  $handler->display->display_options['fields']['field_equipment_manual']['table'] = 'field_data_field_equipment_manual';
  $handler->display->display_options['fields']['field_equipment_manual']['field'] = 'field_equipment_manual';
  $handler->display->display_options['fields']['field_equipment_manual']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_equipment_manual']['type'] = 'link_plain';
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_equipment_resource']['id'] = 'field_equipment_resource';
  $handler->display->display_options['fields']['field_equipment_resource']['table'] = 'field_data_field_equipment_resource';
  $handler->display->display_options['fields']['field_equipment_resource']['field'] = 'field_equipment_resource';
  $handler->display->display_options['fields']['field_equipment_resource']['label'] = 'Resource Title';
  $handler->display->display_options['fields']['field_equipment_resource']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_equipment_resource']['type'] = 'link_title_plain';
  $handler->display->display_options['fields']['field_equipment_resource']['delta_offset'] = '0';
  /* Field: Content: Resource */
  $handler->display->display_options['fields']['field_equipment_resource_1']['id'] = 'field_equipment_resource_1';
  $handler->display->display_options['fields']['field_equipment_resource_1']['table'] = 'field_data_field_equipment_resource';
  $handler->display->display_options['fields']['field_equipment_resource_1']['field'] = 'field_equipment_resource';
  $handler->display->display_options['fields']['field_equipment_resource_1']['label'] = 'Resource Link';
  $handler->display->display_options['fields']['field_equipment_resource_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_equipment_resource_1']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_equipment_resource_1']['delta_offset'] = '0';
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['label'] = 'Promoted';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'equipment' => 'equipment',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['path'] = 'repository/export/%/equipment';
  $export['equipment_syndicate'] = $view;

  $view = new view();
  $view->name = 'faq_syndicate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'FAQ Syndicate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Site';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'site' => 'site',
    'industry' => 0,
    'voocab' => 0,
  );
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Question';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Answer';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_section']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_section']['separator'] = '|';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'faq' => 'faq',
  );

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['path'] = 'repository/export/%/faq';
  $export['faq_syndicate'] = $view;

  $view = new view();
  $view->name = 'industry_syndicate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Syndicate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Taxonomy term: Taxonomy term UUID */
  $handler->display->display_options['fields']['uuid_1']['id'] = 'uuid_1';
  $handler->display->display_options['fields']['uuid_1']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['uuid_1']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['uuid_1']['label'] = 'Parent UUID';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = 'Description';
  /* Field: Taxonomy term: Weight */
  $handler->display->display_options['fields']['weight']['id'] = 'weight';
  $handler->display->display_options['fields']['weight']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['weight']['field'] = 'weight';
  $handler->display->display_options['fields']['weight']['separator'] = '';
  /* Contextual filter: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['arguments']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['arguments']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['arguments']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['arguments']['machine_name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['machine_name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['machine_name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['machine_name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['machine_name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['machine_name']['limit'] = '0';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['path'] = 'repository/export/vocabulary/%';
  $export['industry_syndicate'] = $view;

  $view = new view();
  $view->name = 'profile_syndicate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Feature Profile Syndicate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Site';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'site' => 'site',
    'industry' => 0,
    'voocab' => 0,
  );
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Profile type */
  $handler->display->display_options['fields']['field_profile_type']['id'] = 'field_profile_type';
  $handler->display->display_options['fields']['field_profile_type']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['fields']['field_profile_type']['field'] = 'field_profile_type';
  $handler->display->display_options['fields']['field_profile_type']['type'] = 'list_key';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['field_profile_title']['id'] = 'field_profile_title';
  $handler->display->display_options['fields']['field_profile_title']['table'] = 'field_data_field_profile_title';
  $handler->display->display_options['fields']['field_profile_title']['field'] = 'field_profile_title';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Job title */
  $handler->display->display_options['fields']['field_profile_jobtitle']['id'] = 'field_profile_jobtitle';
  $handler->display->display_options['fields']['field_profile_jobtitle']['table'] = 'field_data_field_profile_jobtitle';
  $handler->display->display_options['fields']['field_profile_jobtitle']['field'] = 'field_profile_jobtitle';
  /* Field: Content: Profile image */
  $handler->display->display_options['fields']['field_profile_image']['id'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['table'] = 'field_data_field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['field'] = 'field_profile_image';
  $handler->display->display_options['fields']['field_profile_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_image']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_profile_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: Video */
  $handler->display->display_options['fields']['field_profile_video']['id'] = 'field_profile_video';
  $handler->display->display_options['fields']['field_profile_video']['table'] = 'field_data_field_profile_video';
  $handler->display->display_options['fields']['field_profile_video']['field'] = 'field_profile_video';
  $handler->display->display_options['fields']['field_profile_video']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_video']['type'] = 'file_url_plain';
  /* Field: Content: Undergraduate */
  $handler->display->display_options['fields']['field_profile_undergrad']['id'] = 'field_profile_undergrad';
  $handler->display->display_options['fields']['field_profile_undergrad']['table'] = 'field_data_field_profile_undergrad';
  $handler->display->display_options['fields']['field_profile_undergrad']['field'] = 'field_profile_undergrad';
  $handler->display->display_options['fields']['field_profile_undergrad']['type'] = 'list_key';
  /* Field: Content: Major */
  $handler->display->display_options['fields']['field_profile_major']['id'] = 'field_profile_major';
  $handler->display->display_options['fields']['field_profile_major']['table'] = 'field_data_field_profile_major';
  $handler->display->display_options['fields']['field_profile_major']['field'] = 'field_profile_major';
  /* Field: Content: Graduate, coursework */
  $handler->display->display_options['fields']['field_profile_grad_course']['id'] = 'field_profile_grad_course';
  $handler->display->display_options['fields']['field_profile_grad_course']['table'] = 'field_data_field_profile_grad_course';
  $handler->display->display_options['fields']['field_profile_grad_course']['field'] = 'field_profile_grad_course';
  $handler->display->display_options['fields']['field_profile_grad_course']['type'] = 'list_key';
  /* Field: Content: Program */
  $handler->display->display_options['fields']['field_profile_program']['id'] = 'field_profile_program';
  $handler->display->display_options['fields']['field_profile_program']['table'] = 'field_data_field_profile_program';
  $handler->display->display_options['fields']['field_profile_program']['field'] = 'field_profile_program';
  $handler->display->display_options['fields']['field_profile_program']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Content: Graduate, research */
  $handler->display->display_options['fields']['field_profile_grad_res']['id'] = 'field_profile_grad_res';
  $handler->display->display_options['fields']['field_profile_grad_res']['table'] = 'field_data_field_profile_grad_res';
  $handler->display->display_options['fields']['field_profile_grad_res']['field'] = 'field_profile_grad_res';
  $handler->display->display_options['fields']['field_profile_grad_res']['type'] = 'list_key';
  /* Field: Content: Research area */
  $handler->display->display_options['fields']['field_profile_research_area']['id'] = 'field_profile_research_area';
  $handler->display->display_options['fields']['field_profile_research_area']['table'] = 'field_data_field_profile_research_area';
  $handler->display->display_options['fields']['field_profile_research_area']['field'] = 'field_profile_research_area';
  $handler->display->display_options['fields']['field_profile_research_area']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_profile_research_area']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile_research_area']['separator'] = '|';
  /* Field: Content: Previous studies */
  $handler->display->display_options['fields']['field_profile_previous_studies']['id'] = 'field_profile_previous_studies';
  $handler->display->display_options['fields']['field_profile_previous_studies']['table'] = 'field_data_field_profile_previous_studies';
  $handler->display->display_options['fields']['field_profile_previous_studies']['field'] = 'field_profile_previous_studies';
  $handler->display->display_options['fields']['field_profile_previous_studies']['delta_offset'] = '0';
  /* Field: Content: Further studies */
  $handler->display->display_options['fields']['field_profile_further_studies']['id'] = 'field_profile_further_studies';
  $handler->display->display_options['fields']['field_profile_further_studies']['table'] = 'field_data_field_profile_further_studies';
  $handler->display->display_options['fields']['field_profile_further_studies']['field'] = 'field_profile_further_studies';
  $handler->display->display_options['fields']['field_profile_further_studies']['delta_offset'] = '0';
  /* Field: Content: Graduating year */
  $handler->display->display_options['fields']['field_profile_graduating_year']['id'] = 'field_profile_graduating_year';
  $handler->display->display_options['fields']['field_profile_graduating_year']['table'] = 'field_data_field_profile_graduating_year';
  $handler->display->display_options['fields']['field_profile_graduating_year']['field'] = 'field_profile_graduating_year';
  $handler->display->display_options['fields']['field_profile_graduating_year']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'About';
  /* Field: Content: Image */
  $handler->display->display_options['fields']['field_profile_images']['id'] = 'field_profile_images';
  $handler->display->display_options['fields']['field_profile_images']['table'] = 'field_data_field_profile_images';
  $handler->display->display_options['fields']['field_profile_images']['field'] = 'field_profile_images';
  $handler->display->display_options['fields']['field_profile_images']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_profile_images']['type'] = 'image_url';
  $handler->display->display_options['fields']['field_profile_images']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_profile_images']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_profile_images']['separator'] = '|';
  /* Field: Content: Promoted to front page */
  $handler->display->display_options['fields']['promote']['id'] = 'promote';
  $handler->display->display_options['fields']['promote']['table'] = 'node';
  $handler->display->display_options['fields']['promote']['field'] = 'promote';
  $handler->display->display_options['fields']['promote']['label'] = 'Promoted';
  $handler->display->display_options['fields']['promote']['not'] = 0;
  /* Field: Content: Sticky */
  $handler->display->display_options['fields']['sticky']['id'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['table'] = 'node';
  $handler->display->display_options['fields']['sticky']['field'] = 'sticky';
  $handler->display->display_options['fields']['sticky']['not'] = 0;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Taxonomy term: Name */
  $handler->display->display_options['arguments']['name']['id'] = 'name';
  $handler->display->display_options['arguments']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['name']['field'] = 'name';
  $handler->display->display_options['arguments']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['arguments']['name']['default_action'] = 'empty';
  $handler->display->display_options['arguments']['name']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['name']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['name']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['name']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['name']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'feature_profile' => 'feature_profile',
  );

  /* Display: XML Export */
  $handler = $view->new_display('views_data_export', 'XML Export', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '0';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['path'] = 'repository/export/%/feature-profile';
  $export['profile_syndicate'] = $view;

  return $export;
}
