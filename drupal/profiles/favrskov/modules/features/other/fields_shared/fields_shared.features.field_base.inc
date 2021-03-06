<?php
/**
 * @file
 * fields_shared.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function fields_shared_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'.
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_bannerlink'.
  $field_bases['field_bannerlink'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_bannerlink',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 0,
        'banner_element' => 0,
        'bannerlink' => 'bannerlink',
        'borger_dk_article' => 0,
        'factbox' => 0,
        'faq' => 0,
        'frontpage' => 0,
        'news' => 0,
        'os2web_event_calendar' => 0,
        'os2web_hr_manager_job' => 0,
        'phone_book' => 0,
        'self_service' => 0,
        'shared' => 0,
        'slider_element' => 0,
        'subjectpage' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_contact_information'.
  $field_bases['field_contact_information'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_contact_information',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 0,
        'banner_element' => 0,
        'bannerlink' => 0,
        'borger_dk_article' => 0,
        'factbox' => 0,
        'faq' => 0,
        'frontpage' => 0,
        'job' => 0,
        'news' => 0,
        'phone_book' => 'phone_book',
        'self_service' => 0,
        'shared' => 0,
        'slider_element' => 0,
        'subjectpage' => 0,
        'volunteer_jobs' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_displayed_title'.
  $field_bases['field_displayed_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_displayed_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 50,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_editorial_responsibility'.
  $field_bases['field_editorial_responsibility'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_editorial_responsibility',
    'indexes' => array(
      'uid' => array(
        0 => 'uid',
      ),
    ),
    'locked' => 0,
    'module' => 'user_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_roles' => array(
        2 => 2,
        3 => 0,
        4 => 0,
        5 => 0,
        6 => 0,
      ),
      'referenceable_status' => array(
        0 => 0,
        1 => 1,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'user_reference',
  );

  // Exported field_base: 'field_external_link'.
  $field_bases['field_external_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_external_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_faq_ref'.
  $field_bases['field_faq_ref'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_faq_ref',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 0,
        'banner_element' => 0,
        'bannerlink' => 0,
        'borger_dk_article' => 0,
        'factbox' => 0,
        'faq' => 'faq',
        'frontpage' => 0,
        'job' => 0,
        'news' => 0,
        'phone_book' => 0,
        'self_service' => 0,
        'shared' => 0,
        'slider_element' => 0,
        'subjectpage' => 0,
        'volunteer_jobs' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_file_image_alt_text'.
  $field_bases['field_file_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_description'.
  $field_bases['field_file_image_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_file_image_photographer'.
  $field_bases['field_file_image_photographer'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_photographer',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_file_image_title_text'.
  $field_bases['field_file_image_title_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_file_image_title_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_folder'.
  $field_bases['field_folder'] = array(
    'active' => 1,
    'bundle' => 'image',
    'cardinality' => 1,
    'deleted' => 0,
    'entity_type' => 'file',
    'entity_types' => array(),
    'field_name' => 'field_folder',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'label' => 'Media Folder',
    'locked' => 0,
    'module' => 'taxonomy',
    'required' => TRUE,
    'settings' => array(
      'allow_term_autocreation' => TRUE,
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'media_folders',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_image'.
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_image_alt_text'.
  $field_bases['field_image_alt_text'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_alt_text',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_image_description'.
  $field_bases['field_image_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_image_thumbnail'.
  $field_bases['field_image_thumbnail'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image_thumbnail',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_internal_link'.
  $field_bases['field_internal_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_internal_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_internal_title'.
  $field_bases['field_internal_title'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_internal_title',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'text',
  );

  // Exported field_base: 'field_link'.
  $field_bases['field_link'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_link',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'link',
    'settings' => array(
      'attributes' => array(
        'class' => '',
        'rel' => '',
        'target' => 'default',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'title' => 'optional',
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
    ),
    'translatable' => 0,
    'type' => 'link_field',
  );

  // Exported field_base: 'field_piwik_day'.
  $field_bases['field_piwik_day'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_piwik_day',
    'indexes' => array(
      'hits' => array(
        0 => 'nb_hits',
        1 => 'entry_nb_actions',
      ),
      'rate' => array(
        0 => 'bounce_rate',
        1 => 'exit_rate',
      ),
      'visits' => array(
        0 => 'nb_visits',
        1 => 'entry_nb_visits',
        2 => 'exit_nb_visits',
      ),
    ),
    'locked' => 0,
    'module' => 'piwik_stats',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'limit' => 100,
      'period' => 'day',
      'show_in_statistics_page' => 1,
      'sub_url' => '',
    ),
    'translatable' => 0,
    'type' => 'piwik_stats',
  );

  // Exported field_base: 'field_piwik_month'.
  $field_bases['field_piwik_month'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_piwik_month',
    'indexes' => array(
      'hits' => array(
        0 => 'nb_hits',
        1 => 'entry_nb_actions',
      ),
      'rate' => array(
        0 => 'bounce_rate',
        1 => 'exit_rate',
      ),
      'visits' => array(
        0 => 'nb_visits',
        1 => 'entry_nb_visits',
        2 => 'exit_nb_visits',
      ),
    ),
    'locked' => 0,
    'module' => 'piwik_stats',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'limit' => 100,
      'period' => 'month',
      'show_in_statistics_page' => 1,
      'sub_url' => '',
    ),
    'translatable' => 0,
    'type' => 'piwik_stats',
  );

  // Exported field_base: 'field_piwik_week'.
  $field_bases['field_piwik_week'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_piwik_week',
    'indexes' => array(
      'hits' => array(
        0 => 'nb_hits',
        1 => 'entry_nb_actions',
      ),
      'rate' => array(
        0 => 'bounce_rate',
        1 => 'exit_rate',
      ),
      'visits' => array(
        0 => 'nb_visits',
        1 => 'entry_nb_visits',
        2 => 'exit_nb_visits',
      ),
    ),
    'locked' => 0,
    'module' => 'piwik_stats',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'limit' => 100,
      'period' => 'week',
      'show_in_statistics_page' => 1,
      'sub_url' => '',
    ),
    'translatable' => 0,
    'type' => 'piwik_stats',
  );

  // Exported field_base: 'field_piwik_year'.
  $field_bases['field_piwik_year'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_piwik_year',
    'indexes' => array(
      'hits' => array(
        0 => 'nb_hits',
        1 => 'entry_nb_actions',
      ),
      'rate' => array(
        0 => 'bounce_rate',
        1 => 'exit_rate',
      ),
      'visits' => array(
        0 => 'nb_visits',
        1 => 'entry_nb_visits',
        2 => 'exit_nb_visits',
      ),
    ),
    'locked' => 0,
    'module' => 'piwik_stats',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'limit' => 100,
      'period' => 'year',
      'show_in_statistics_page' => 1,
      'sub_url' => '',
    ),
    'translatable' => 0,
    'type' => 'piwik_stats',
  );

  // Exported field_base: 'field_related_boxes'.
  $field_bases['field_related_boxes'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_boxes',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 0,
        'banner_element' => 0,
        'bannerlink' => 0,
        'borger_dk_article' => 0,
        'factbox' => 'factbox',
        'faq' => 0,
        'frontpage' => 0,
        'job' => 0,
        'news' => 0,
        'phone_book' => 0,
        'self_service' => 0,
        'shared' => 0,
        'slider_element' => 0,
        'subjectpage' => 0,
        'volunteer_jobs' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_related_content'.
  $field_bases['field_related_content'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_related_content',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 'article',
        'banner_element' => 0,
        'bannerlink' => 0,
        'borger_dk_article' => 0,
        'factbox' => 0,
        'faq' => 0,
        'frontpage' => 'frontpage',
        'job' => 0,
        'news' => 'news',
        'phone_book' => 0,
        'self_service' => 0,
        'shared' => 0,
        'slider_element' => 0,
        'subjectpage' => 'subjectpage',
        'volunteer_jobs' => 0,
        'webform' => 'webform',
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_self_service'.
  $field_bases['field_self_service'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_self_service',
    'indexes' => array(
      'nid' => array(
        0 => 'nid',
      ),
    ),
    'locked' => 0,
    'module' => 'node_reference',
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'referenceable_types' => array(
        'article' => 0,
        'banner_element' => 0,
        'bannerlink' => 0,
        'borger_dk_article' => 0,
        'factbox' => 0,
        'faq' => 0,
        'frontpage' => 0,
        'job' => 0,
        'news' => 0,
        'phone_book' => 0,
        'self_service' => 'self_service',
        'shared' => 0,
        'slider_element' => 0,
        'subjectpage' => 0,
        'volunteer_jobs' => 0,
        'webform' => 0,
      ),
      'view' => array(
        'args' => array(),
        'display_name' => '',
        'view_name' => '',
      ),
    ),
    'translatable' => 0,
    'type' => 'node_reference',
  );

  // Exported field_base: 'field_table'.
  $field_bases['field_table'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_table',
    'indexes' => array(),
    'locked' => 0,
    'module' => 'tablefield',
    'settings' => array(
      'cell_processing' => 0,
      'entity_translation_sync' => FALSE,
      'export' => 0,
      'lock_values' => 0,
      'restrict_rebuild' => 0,
    ),
    'translatable' => 0,
    'type' => 'tablefield',
  );

  // Exported field_base: 'field_taxonomy_kle'.
  $field_bases['field_taxonomy_kle'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_taxonomy_kle',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allow_term_autocreation' => 1,
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'kle',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_taxonomy_local'.
  $field_bases['field_taxonomy_local'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_taxonomy_local',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allow_term_autocreation' => 1,
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'local',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_taxonomy_location'.
  $field_bases['field_taxonomy_location'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_taxonomy_location',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allow_term_autocreation' => 0,
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'location',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_taxonomy_subject_area'.
  $field_bases['field_taxonomy_subject_area'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_taxonomy_subject_area',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allow_term_autocreation' => 0,
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'subject_area',
          'parent' => 0,
        ),
      ),
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_teaser'.
  $field_bases['field_teaser'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_teaser',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_top_image'.
  $field_bases['field_top_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_top_image',
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'entity_translation_sync' => array(
        0 => 'fid',
      ),
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_video'.
  $field_bases['field_video'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  // Exported field_base: 'field_video_description'.
  $field_bases['field_video_description'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_video_description',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
