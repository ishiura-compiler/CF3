#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t x53 = 1698612169266320000LLU;
int32_t x54 = INT32_MIN;
int64_t x55 = INT64_MIN;
uint64_t x245 = 6362662376964LLU;
static uint8_t x247 = UINT8_MAX;
volatile uint64_t t4 = 61090962824385LLU;
int8_t x257 = INT8_MAX;
uint16_t x261 = 511U;
uint64_t x285 = 97750716648LLU;
volatile int32_t x454 = -109838934;
int32_t t12 = -40;
volatile int64_t t13 = INT64_MAX;
volatile uint64_t t15 = 268825057034449343LLU;
volatile int64_t x743 = -7827119711209LL;
static volatile int16_t x812 = 9;
volatile int32_t t19 = -1;
static int16_t x917 = INT16_MAX;
uint8_t x1137 = 2U;
static int8_t x1139 = INT8_MAX;
int16_t x1202 = INT16_MIN;
static volatile uint32_t t26 = 2695496U;
static volatile uint32_t x1269 = 5038536U;


void f0(void) {
	volatile uint8_t x56 = 0U;
	volatile uint64_t t0 = 129174992196309LLU;

	t0 = ((x53>>(x54==x55))<<x56);

	if (t0 != 1698612169266320000LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x61 = 122LLU;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MAX;
	uint8_t x64 = 60U;
	volatile uint64_t t1 = 1924513LLU;

	t1 = ((x61>>(x62==x63))<<x64);

	if (t1 != 11529215046068469760LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x93 = 9779;
	int64_t x94 = INT64_MIN;
	uint8_t x95 = 24U;
	static int32_t x96 = 1;
	int32_t t2 = 0;

	t2 = ((x93>>(x94==x95))<<x96);

	if (t2 != 19558) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x145 = 1;
	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	uint8_t x148 = 7U;
	static int32_t t3 = 115712;

	t3 = ((x145>>(x146==x147))<<x148);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x246 = INT16_MIN;
	volatile uint8_t x248 = 15U;

	t4 = ((x245>>(x246==x247))<<x248);

	if (t4 != 208491720768356352LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MAX;
	uint64_t x255 = UINT64_MAX;
	uint32_t x256 = 0U;
	int32_t t5 = -12;

	t5 = ((x253>>(x254==x255))<<x256);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x258 = -1LL;
	uint64_t x259 = 1268124LLU;
	uint16_t x260 = 11U;
	int32_t t6 = 76283;

	t6 = ((x257>>(x258==x259))<<x260);

	if (t6 != 260096) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x262 = -1;
	int32_t x263 = INT32_MIN;
	static uint16_t x264 = 3U;
	int32_t t7 = -28390;

	t7 = ((x261>>(x262==x263))<<x264);

	if (t7 != 4088) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x269 = 15540;
	static int8_t x270 = -1;
	static uint32_t x271 = UINT32_MAX;
	volatile uint8_t x272 = 16U;
	volatile int32_t t8 = 22767;

	t8 = ((x269>>(x270==x271))<<x272);

	if (t8 != 509214720) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MAX;
	int8_t x288 = 1;
	uint64_t t9 = 4437302888955463337LLU;

	t9 = ((x285>>(x286==x287))<<x288);

	if (t9 != 195501433296LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x405 = 308U;
	int64_t x406 = INT64_MAX;
	int16_t x407 = -1;
	int8_t x408 = 0;
	int32_t t10 = 1;

	t10 = ((x405>>(x406==x407))<<x408);

	if (t10 != 308) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x453 = 9LLU;
	int64_t x455 = INT64_MIN;
	int32_t x456 = 3;
	volatile uint64_t t11 = 179049144390510LLU;

	t11 = ((x453>>(x454==x455))<<x456);

	if (t11 != 72LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x525 = 1;
	int8_t x526 = -23;
	uint64_t x527 = 1233327257457821252LLU;
	uint8_t x528 = 2U;

	t12 = ((x525>>(x526==x527))<<x528);

	if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x537 = INT64_MAX;
	int16_t x538 = 6;
	volatile uint64_t x539 = 4LLU;
	int8_t x540 = 0;

	t13 = ((x537>>(x538==x539))<<x540);

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x541 = 95816142U;
	int8_t x542 = -52;
	int8_t x543 = -1;
	uint16_t x544 = 1U;
	volatile uint32_t t14 = 1199981U;

	t14 = ((x541>>(x542==x543))<<x544);

	if (t14 != 191632284U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x581 = 1262798LLU;
	int8_t x582 = INT8_MAX;
	volatile int8_t x583 = 1;
	uint64_t x584 = 35LLU;

	t15 = ((x581>>(x582==x583))<<x584);

	if (t15 != 43389408891633664LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x661 = 327526495LL;
	int64_t x662 = -147LL;
	volatile int8_t x663 = INT8_MIN;
	static uint16_t x664 = 21U;
	volatile int64_t t16 = 4353244365885823405LL;

	t16 = ((x661>>(x662==x663))<<x664);

	if (t16 != 686872844042240LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint64_t x741 = UINT64_MAX;
	static uint64_t x742 = 11165252912890881LLU;
	int16_t x744 = 0;
	volatile uint64_t t17 = UINT64_MAX;

	t17 = ((x741>>(x742==x743))<<x744);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x809 = 331461U;
	uint8_t x810 = 7U;
	volatile uint8_t x811 = UINT8_MAX;
	volatile uint32_t t18 = 279U;

	t18 = ((x809>>(x810==x811))<<x812);

	if (t18 != 169708032U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x821 = 5;
	uint16_t x822 = 5528U;
	uint64_t x823 = 3226LLU;
	uint8_t x824 = 24U;

	t19 = ((x821>>(x822==x823))<<x824);

	if (t19 != 83886080) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x833 = 661U;
	int8_t x834 = INT8_MIN;
	static uint16_t x835 = UINT16_MAX;
	uint8_t x836 = 8U;
	static uint32_t t20 = 200266U;

	t20 = ((x833>>(x834==x835))<<x836);

	if (t20 != 169216U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x897 = INT16_MAX;
	int64_t x898 = INT64_MIN;
	int32_t x899 = INT32_MIN;
	static uint8_t x900 = 1U;
	static int32_t t21 = -1039789171;

	t21 = ((x897>>(x898==x899))<<x900);

	if (t21 != 65534) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint64_t x909 = 72436494458276LLU;
	static int32_t x910 = INT32_MIN;
	int16_t x911 = -1;
	int32_t x912 = 50;
	volatile uint64_t t22 = 144LLU;

	t22 = ((x909>>(x910==x911))<<x912);

	if (t22 != 8543328493121830912LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x918 = 1U;
	int16_t x919 = INT16_MIN;
	uint8_t x920 = 14U;
	int32_t t23 = 454;

	t23 = ((x917>>(x918==x919))<<x920);

	if (t23 != 536854528) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x1138 = UINT32_MAX;
	static int32_t x1140 = 19;
	int32_t t24 = -6208;

	t24 = ((x1137>>(x1138==x1139))<<x1140);

	if (t24 != 1048576) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x1169 = 26707LLU;
	uint16_t x1170 = 164U;
	uint64_t x1171 = 4314022300398636794LLU;
	static volatile uint64_t x1172 = 0LLU;
	uint64_t t25 = 383LLU;

	t25 = ((x1169>>(x1170==x1171))<<x1172);

	if (t25 != 26707LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x1201 = UINT32_MAX;
	volatile int8_t x1203 = -1;
	volatile uint8_t x1204 = 17U;

	t26 = ((x1201>>(x1202==x1203))<<x1204);

	if (t26 != 4294836224U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x1221 = INT16_MAX;
	static int16_t x1222 = INT16_MIN;
	volatile uint8_t x1223 = UINT8_MAX;
	int8_t x1224 = 3;
	volatile int32_t t27 = 56;

	t27 = ((x1221>>(x1222==x1223))<<x1224);

	if (t27 != 262136) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1261 = 64015U;
	int8_t x1262 = INT8_MIN;
	int64_t x1263 = INT64_MIN;
	uint64_t x1264 = 1LLU;
	uint32_t t28 = 301937U;

	t28 = ((x1261>>(x1262==x1263))<<x1264);

	if (t28 != 128030U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x1270 = -14319126596257LL;
	int8_t x1271 = INT8_MIN;
	static uint16_t x1272 = 0U;
	uint32_t t29 = 28U;

	t29 = ((x1269>>(x1270==x1271))<<x1272);

	if (t29 != 5038536U) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();


    return 0;
}

