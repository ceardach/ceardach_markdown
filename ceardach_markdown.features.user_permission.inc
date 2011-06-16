<?php
/**
 * @file
 * ceardach_markdown.features.user_permission.inc
 */

/**
 * Implementation of hook_user_default_permissions().
 */
function ceardach_markdown_user_default_permissions() {
  $permissions = array();

  // Exported permission: use text format markdown
  $permissions['use text format markdown'] = array(
    'name' => 'use text format markdown',
    'roles' => array(
      0 => 'anonymous user',
      1 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  return $permissions;
}
