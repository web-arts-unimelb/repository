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
  /* Field: Content: Node UUID */
  $handler->display->display_options['fields']['uuid']['id'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['table'] = 'node';
  $handler->display->display_options['fields']['uuid']['field'] = 'uuid';
  $handler->display->display_options['fields']['uuid']['label'] = 'UUID';
  /* Field: Content: Profile type */
  $handler->display->display_options['fields']['field_profile_type']['id'] = 'field_profile_type';
  $handler->display->display_options['fields']['field_profile_type']['table'] = 'field_data_field_profile_type';
  $handler->display->display_options['fields']['field_profile_type']['field'] = 'field_profile_type';
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
  $handler->display->display_options['fields']['field_profile_video']['type'] = 'file_uri';
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
  /* Field: Content: Graduate, research */
  $handler->display->display_options['fields']['field_profile_grad_res']['id'] = 'field_profile_grad_res';
  $handler->display->display_options['fields']['field_profile_grad_res']['table'] = 'field_data_field_profile_grad_res';
  $handler->display->display_options['fields']['field_profile_grad_res']['field'] = 'field_profile_grad_res';
  $handler->display->display_options['fields']['field_profile_grad_res']['type'] = 'list_key';
  /* Field: Content: Research area */
  $handler->display->display_options['fields']['field_profile_area']['id'] = 'field_profile_area';
  $handler->display->display_options['fields']['field_profile_area']['table'] = 'field_data_field_profile_area';
  $handler->display->display_options['fields']['field_profile_area']['field'] = 'field_profile_area';
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
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['not'] = 0;
  /* Field: Content: Post date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'node';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['date_format'] = 'custom';
  $handler->display->display_options['fields']['created']['custom_date_format'] = 'U';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
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
  $handler->display->display_options['path'] = 'repository/export/feature-profile';
  $export['profile_syndicate'] = $view;

  return $export;
}
