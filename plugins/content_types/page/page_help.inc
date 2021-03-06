<?php
// $Id: page_help.inc,v 1.2 2009/10/17 22:58:26 sdboyer Exp $

/**
 * @file
 * Plugin to handle the 'page_help' content type which allows the
 * help text of the current page to be embedded into a panel.
 */

/**
 * Implements hook_ctools_content_types()
 */
function ctools_page_help_ctools_content_types() {
  return array(
    'title' => t('Help'),
    'single' => TRUE,
    'icon' => 'icon_page.png',
    'description' => t('Add the help text of the current page as content.'),
    'category' => t('Page elements'),
  );
}

/**
 * Output function for the 'page_help' content type.
 *
 * Outputs the breadcrumb for the current page.
 */
function ctools_page_help_content_type_render($subtype, $conf, $panel_args) {
  $token = '<!-- ctools-page-help -->';
  ctools_set_page_token($token, 'variable', 'help');

  $block = new stdClass();
  $block->content = $token;

  return $block;
}

