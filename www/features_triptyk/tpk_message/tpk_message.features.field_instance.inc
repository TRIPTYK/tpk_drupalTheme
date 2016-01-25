<?php
/**
 * @file
 * tpk_message.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function tpk_message_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-message-field_message'.
  $field_instances['node-message-field_message'] = array(
    'bundle' => 'message',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_message',
    'label' => 'Message',
    'required' => 1,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Message');

  return $field_instances;
}
