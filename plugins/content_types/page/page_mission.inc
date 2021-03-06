<?php
// $Id: page_mission.inc,v 1.2 2009/10/17 22:58:26 sdboyer Exp $

/**
 * @file
 * Plugin to handle the 'page_mission' content type which allows the
 * mission statement of the site to be embedded into a panel.
 */

/**
 * Implements hook_ctools_content_types()
 */
function ctools_page_mission_ctools_content_types() {
  return array(
    'title' => t('Mission'),
    'single' => TRUE,
    'icon' => 'icon_page.png',
    'description' => t('Add the site mission statement as content.'),
    'category' => t('Page elements'),
  );
}

/**
 * Output function for the 'page_mission' content type.
 *
 * Outputs the mission statement for the site.
 */
function ctools_page_mission_content_type_render($subtype, $conf, $panel_args) {
  $token = '<!-- ctools-page-mission -->';
  ctools_set_page_token($token, 'variable', 'mission');

  $block = new stdClass();
  $block->content = $token;

  return $block;
}
