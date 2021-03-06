<?php
/**
 * @file
 * panel_slider_page.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function panel_slider_page_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_slide_page';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 13;
  $handler->conf = array(
    'title' => 'Slide page',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'slider_element' => 'slider_element',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 0,
    'panels_breadcrumbs_titles' => '',
    'panels_breadcrumbs_paths' => '',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'nodepage';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
      'header' => NULL,
      'node-content' => NULL,
      'node-sidebar' => NULL,
      'footer' => NULL,
    ),
    'node-content' => array(
      'style' => 'naked',
    ),
    'node-sidebar' => array(
      'style' => 'naked',
    ),
    'header' => array(
      'style' => 'naked',
    ),
    'footer' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ea33a1dd-fabd-46ea-ad59-d81f87956732';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-baa1f8bc-04de-4c24-b936-8e6136d4af8d';
    $pane->panel = 'footer';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'baa1f8bc-04de-4c24-b936-8e6136d4af8d';
    $display->content['new-baa1f8bc-04de-4c24-b936-8e6136d4af8d'] = $pane;
    $display->panels['footer'][0] = 'new-baa1f8bc-04de-4c24-b936-8e6136d4af8d';
    $pane = new stdClass();
    $pane->pid = 'new-6edb60e8-6f23-4f7a-ae08-7819d3408f8d';
    $pane->panel = 'header';
    $pane->type = 'panels_mini';
    $pane->subtype = 'header_mini_panel';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '6edb60e8-6f23-4f7a-ae08-7819d3408f8d';
    $display->content['new-6edb60e8-6f23-4f7a-ae08-7819d3408f8d'] = $pane;
    $display->panels['header'][0] = 'new-6edb60e8-6f23-4f7a-ae08-7819d3408f8d';
    $pane = new stdClass();
    $pane->pid = 'new-36976c45-742c-4a47-aa82-429a3de654fb';
    $pane->panel = 'node-content';
    $pane->type = 'page_breadcrumb';
    $pane->subtype = 'page_breadcrumb';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '36976c45-742c-4a47-aa82-429a3de654fb';
    $display->content['new-36976c45-742c-4a47-aa82-429a3de654fb'] = $pane;
    $display->panels['node-content'][0] = 'new-36976c45-742c-4a47-aa82-429a3de654fb';
    $pane = new stdClass();
    $pane->pid = 'new-c4636a2e-865e-4c23-b493-c119a5d3bf1c';
    $pane->panel = 'node-content';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => '',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c4636a2e-865e-4c23-b493-c119a5d3bf1c';
    $display->content['new-c4636a2e-865e-4c23-b493-c119a5d3bf1c'] = $pane;
    $display->panels['node-content'][1] = 'new-c4636a2e-865e-4c23-b493-c119a5d3bf1c';
    $pane = new stdClass();
    $pane->pid = 'new-7c1d3ac6-d658-41c5-b8c0-131b71e13c7b';
    $pane->panel = 'node-content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 0,
      'leave_node_title' => 0,
      'build_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-faq-content',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '7c1d3ac6-d658-41c5-b8c0-131b71e13c7b';
    $display->content['new-7c1d3ac6-d658-41c5-b8c0-131b71e13c7b'] = $pane;
    $display->panels['node-content'][2] = 'new-7c1d3ac6-d658-41c5-b8c0-131b71e13c7b';
    $pane = new stdClass();
    $pane->pid = 'new-56deebe3-ecbc-40b2-bdf6-d1bcca953736';
    $pane->panel = 'node-content';
    $pane->type = 'node_updated';
    $pane->subtype = 'node_updated';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'update_date',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => t('Last updated'),
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '56deebe3-ecbc-40b2-bdf6-d1bcca953736';
    $display->content['new-56deebe3-ecbc-40b2-bdf6-d1bcca953736'] = $pane;
    $display->panels['node-content'][3] = 'new-56deebe3-ecbc-40b2-bdf6-d1bcca953736';
    $pane = new stdClass();
    $pane->pid = 'new-12c0e527-45b7-4fc3-b7db-f42a27a3d18c';
    $pane->panel = 'node-sidebar';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Custom share',
      'title' => '',
      'body' => '<a class="print_data" href="#">' . t('Print') . '</a>',
      'format' => 'video_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'node-share',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '12c0e527-45b7-4fc3-b7db-f42a27a3d18c';
    $display->content['new-12c0e527-45b7-4fc3-b7db-f42a27a3d18c'] = $pane;
    $display->panels['node-sidebar'][0] = 'new-12c0e527-45b7-4fc3-b7db-f42a27a3d18c';
    $pane = new stdClass();
    $pane->pid = 'new-6f0b9003-4311-4150-b854-807ea9e26bd1';
    $pane->panel = 'node-sidebar';
    $pane->type = 'block';
    $pane->subtype = 'domain_menu_block-main_menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'roskilde_stag_propeople_com_ua' => 'roskilde_stag_propeople_com_ua',
              'musicon_dk' => 0,
              'elitekommune_roskilde_dk' => 0,
              'kulturstr_g_dk' => 0,
              'kunstforeningen_roskilde_dk' => 0,
              'skolereform_roskilde_dk' => 0,
              'scr_roskilde_dk' => 0,
            ),
          ),
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6f0b9003-4311-4150-b854-807ea9e26bd1';
    $display->content['new-6f0b9003-4311-4150-b854-807ea9e26bd1'] = $pane;
    $display->panels['node-sidebar'][1] = 'new-6f0b9003-4311-4150-b854-807ea9e26bd1';
    $pane = new stdClass();
    $pane->pid = 'new-2e07219b-6232-44c7-b9d8-39209022da37';
    $pane->panel = 'node-sidebar';
    $pane->type = 'menu_tree';
    $pane->subtype = 'main-menu';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'domain',
          'settings' => array(
            'domain_site' => 0,
            'domains' => array(
              'roskilde_stag_propeople_com_ua' => 'roskilde_stag_propeople_com_ua',
              'musicon_dk' => 0,
              'elitekommune_roskilde_dk' => 0,
              'kulturstr_g_dk' => 0,
              'kunstforeningen_roskilde_dk' => 0,
              'skolereform_roskilde_dk' => 0,
              'scr_roskilde_dk' => 0,
            ),
          ),
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'menu_name' => 'main-menu',
      'parent_mlid' => 'main-menu:0',
      'title_link' => 0,
      'admin_title' => '',
      'level' => '3',
      'follow' => 0,
      'depth' => '2',
      'expanded' => 0,
      'sort' => 1,
      'override_title' => 1,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2e07219b-6232-44c7-b9d8-39209022da37';
    $display->content['new-2e07219b-6232-44c7-b9d8-39209022da37'] = $pane;
    $display->panels['node-sidebar'][2] = 'new-2e07219b-6232-44c7-b9d8-39209022da37';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-6edb60e8-6f23-4f7a-ae08-7819d3408f8d';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_slide_page'] = $handler;

  return $export;
}
