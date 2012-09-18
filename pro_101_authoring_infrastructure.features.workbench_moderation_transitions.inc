<?php
/**
 * @file
 * pro_101_authoring_infrastructure.features.workbench_moderation_transitions.inc
 */

/**
 * Implements hook_workbench_moderation_export_transitions().
 */
function pro_101_authoring_infrastructure_workbench_moderation_export_transitions() {
  $items = array(
    'draft:needs_review' => array(
      'from_name' => 'draft',
      'to_name' => 'needs_review',
    ),
    'draft:trash' => array(
      'from_name' => 'draft',
      'to_name' => 'trash',
    ),
    'needs_review:draft' => array(
      'from_name' => 'needs_review',
      'to_name' => 'draft',
    ),
    'needs_review:published' => array(
      'from_name' => 'needs_review',
      'to_name' => 'published',
    ),
    'published:unpublished' => array(
      'from_name' => 'published',
      'to_name' => 'unpublished',
    ),
    'trash:draft' => array(
      'from_name' => 'trash',
      'to_name' => 'draft',
    ),
    'trash:needs_review' => array(
      'from_name' => 'trash',
      'to_name' => 'needs_review',
    ),
    'trash:published' => array(
      'from_name' => 'trash',
      'to_name' => 'published',
    ),
    'unpublished:draft' => array(
      'from_name' => 'unpublished',
      'to_name' => 'draft',
    ),
    'unpublished:needs_review' => array(
      'from_name' => 'unpublished',
      'to_name' => 'needs_review',
    ),
    'unpublished:trash' => array(
      'from_name' => 'unpublished',
      'to_name' => 'trash',
    ),
  );
  return $items;
}
