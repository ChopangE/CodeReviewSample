void anotherFunction(int a, int b) {}
/**
* (����)
* �Լ��� ��ɰ� ������ �����ϰ� ����.
* ��� �� ���ǻ��� �� �ۼ�
* 
*/
void someFunction(void) {
	//������ �ּ�
	//�ʿ� �� �ٸ� �Լ��� ȣ���ϴ� ���� ���
	anotherFunction(/*�ʿ�� �μ� ����*/ 1, 2);
}

/**
* (����)
* (���)
*
* �⺻ ��ɿ� ���� ����(��)
* play(), seek() ȣ�� ���� �ݵ�� prepare() �Լ��� ������ �ε��ؾ� ��.
* �׷��� ���� ��� VideoNotReadyException �߻� 
*/
class VideoPlayer
{};