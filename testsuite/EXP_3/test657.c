#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint64_t x13 = 131517707786758LLU;
int64_t x16 = INT64_MAX;
int8_t x44 = -41;
int32_t t3 = -5;
int8_t x112 = INT8_MAX;
int32_t x118 = 486248;
volatile uint64_t x142 = UINT64_MAX;
int16_t x144 = 464;
uint32_t x181 = 1890285U;
volatile uint32_t x184 = 314838131U;
volatile int8_t x187 = INT8_MAX;
static uint16_t x210 = 225U;
int32_t x212 = 55;
uint8_t x221 = 1U;
int64_t x224 = 49421370532472LL;
static volatile uint32_t t13 = UINT32_MAX;
volatile int8_t x244 = INT8_MAX;
static volatile int32_t x247 = -1;
int32_t x255 = INT32_MAX;
uint64_t t18 = UINT64_MAX;
static int16_t x267 = INT16_MIN;
volatile uint32_t t21 = UINT32_MAX;
static volatile uint64_t x325 = UINT64_MAX;
uint32_t x347 = 82U;
int64_t x348 = INT64_MIN;
static volatile int32_t t24 = -10029;
volatile uint64_t x389 = 16222238418200LLU;
static volatile int32_t x391 = -1;
int32_t x392 = INT32_MIN;
static uint32_t x401 = UINT32_MAX;
int32_t x403 = INT32_MIN;
static int32_t x404 = INT32_MIN;
volatile uint32_t t27 = 56958U;
int64_t x459 = INT64_MIN;
uint16_t x502 = UINT16_MAX;
uint16_t x531 = UINT16_MAX;
volatile uint32_t t31 = 6880U;
uint64_t x538 = 283922541LLU;
volatile int32_t x539 = -1;
int32_t x553 = INT32_MAX;
uint64_t x567 = 19776149LLU;
uint32_t x568 = 653688U;
uint64_t x593 = UINT64_MAX;
int16_t x602 = -1;
volatile int8_t x612 = INT8_MIN;
volatile uint8_t x670 = 91U;
int32_t t41 = 7208079;
uint8_t x687 = UINT8_MAX;
static uint64_t x688 = 284316068LLU;
int8_t x703 = INT8_MAX;
int64_t t43 = -2162950011094221LL;
uint64_t x738 = UINT64_MAX;
int64_t x796 = -2LL;
static volatile int8_t x811 = INT8_MIN;
static volatile uint32_t x817 = UINT32_MAX;
int64_t x819 = -1LL;
static uint64_t x825 = 18466LLU;
uint64_t t53 = UINT64_MAX;
static volatile uint64_t t54 = UINT64_MAX;
uint16_t x868 = 14U;
uint64_t x877 = UINT64_MAX;
uint32_t x929 = 26920U;
int16_t x939 = 9;
uint32_t t60 = UINT32_MAX;
volatile int16_t x956 = 1935;
int16_t x958 = INT16_MAX;
uint8_t x960 = 20U;
static int16_t x982 = 34;
volatile int16_t x983 = -1;
volatile uint64_t x994 = UINT64_MAX;
uint32_t x1001 = UINT32_MAX;
static volatile int16_t x1002 = 73;
volatile int8_t x1055 = INT8_MIN;
int8_t x1093 = INT8_MIN;
int16_t x1096 = INT16_MIN;
static int16_t x1139 = INT16_MIN;
volatile uint64_t x1183 = UINT64_MAX;
static uint64_t x1189 = UINT64_MAX;
int16_t x1191 = -1;
int8_t x1199 = INT8_MIN;
uint64_t t74 = 4132807076LLU;
uint64_t x1252 = UINT64_MAX;
uint32_t x1277 = 946159246U;
uint32_t x1286 = 3011U;
int8_t x1287 = -1;
int32_t x1288 = -40084881;
uint64_t x1307 = 1402LLU;
int32_t t83 = -6192;
uint64_t t84 = 2339681292LLU;
int8_t x1386 = INT8_MAX;
uint32_t t90 = UINT32_MAX;
int32_t x1460 = INT32_MIN;
uint8_t x1481 = 1U;
int32_t x1483 = 1;
static uint32_t x1494 = 35783377U;
uint32_t t96 = 204975U;
int16_t x1498 = INT16_MAX;
int16_t x1499 = 1;
int64_t x1532 = INT64_MAX;


void f0(void) {
	int8_t x14 = INT8_MAX;
	int16_t x15 = -954;
	volatile uint64_t t0 = 85232677712LLU;

	t0 = ((x13|x14)>>(x15/x16));

	if (t0 != 131517707786879LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x41 = -1;
	static uint32_t x42 = 56044018U;
	int8_t x43 = -1;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = ((x41|x42)>>(x43/x44));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x53 = INT8_MAX;
	volatile uint8_t x54 = 0U;
	uint8_t x55 = 42U;
	volatile int64_t x56 = -284905028955LL;
	volatile int32_t t2 = 9534000;

	t2 = ((x53|x54)>>(x55/x56));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x77 = INT16_MAX;
	int32_t x78 = 389;
	int8_t x79 = 0;
	int16_t x80 = INT16_MIN;

	t3 = ((x77|x78)>>(x79/x80));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x105 = INT16_MAX;
	uint8_t x106 = UINT8_MAX;
	uint64_t x107 = UINT64_MAX;
	static volatile int16_t x108 = INT16_MIN;
	int32_t t4 = 5416549;

	t4 = ((x105|x106)>>(x107/x108));

	if (t4 != 16383) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x109 = -118;
	uint32_t x110 = 974328075U;
	static uint8_t x111 = 5U;
	volatile uint32_t t5 = 5U;

	t5 = ((x109|x110)>>(x111/x112));

	if (t5 != 4294967179U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x117 = INT32_MAX;
	volatile uint32_t x119 = 70U;
	int16_t x120 = INT16_MIN;
	volatile int32_t t6 = INT32_MAX;

	t6 = ((x117|x118)>>(x119/x120));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x141 = INT32_MIN;
	int64_t x143 = -1LL;
	volatile uint64_t t7 = UINT64_MAX;

	t7 = ((x141|x142)>>(x143/x144));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x182 = UINT64_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = ((x181|x182)>>(x183/x184));

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x185 = INT16_MAX;
	static uint8_t x186 = 2U;
	int16_t x188 = INT16_MAX;
	int32_t t9 = 46044736;

	t9 = ((x185|x186)>>(x187/x188));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x189 = 7U;
	uint16_t x190 = 29934U;
	static volatile int16_t x191 = INT16_MIN;
	static int32_t x192 = INT32_MAX;
	int32_t t10 = 0;

	t10 = ((x189|x190)>>(x191/x192));

	if (t10 != 29935) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x205 = 10U;
	int16_t x206 = 1;
	int8_t x207 = 1;
	uint16_t x208 = 12U;
	static volatile int32_t t11 = -392292495;

	t11 = ((x205|x206)>>(x207/x208));

	if (t11 != 11) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x209 = 0LLU;
	static uint8_t x211 = 1U;
	uint64_t t12 = 4891178119992082LLU;

	t12 = ((x209|x210)>>(x211/x212));

	if (t12 != 225LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x222 = UINT32_MAX;
	static int16_t x223 = INT16_MAX;

	t13 = ((x221|x222)>>(x223/x224));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x229 = 962285151269351136LLU;
	static uint8_t x230 = 3U;
	int32_t x231 = 79;
	int32_t x232 = INT32_MIN;
	uint64_t t14 = 3LLU;

	t14 = ((x229|x230)>>(x231/x232));

	if (t14 != 962285151269351139LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x241 = UINT8_MAX;
	int32_t x242 = INT32_MAX;
	uint64_t x243 = 137LLU;
	int32_t t15 = 77546;

	t15 = ((x241|x242)>>(x243/x244));

	if (t15 != 1073741823) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x245 = INT32_MAX;
	uint16_t x246 = 5446U;
	int8_t x248 = INT8_MIN;
	int32_t t16 = INT32_MAX;

	t16 = ((x245|x246)>>(x247/x248));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x253 = 911044;
	uint16_t x254 = UINT16_MAX;
	int32_t x256 = INT32_MIN;
	volatile int32_t t17 = -100272341;

	t17 = ((x253|x254)>>(x255/x256));

	if (t17 != 917503) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x257 = UINT16_MAX;
	uint64_t x258 = UINT64_MAX;
	uint16_t x259 = 1U;
	int32_t x260 = 992407;

	t18 = ((x257|x258)>>(x259/x260));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x265 = UINT64_MAX;
	static uint8_t x266 = 13U;
	volatile int32_t x268 = INT32_MIN;
	uint64_t t19 = UINT64_MAX;

	t19 = ((x265|x266)>>(x267/x268));

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x277 = 45U;
	volatile int32_t x278 = 134682691;
	static int8_t x279 = 1;
	static volatile int8_t x280 = INT8_MAX;
	uint32_t t20 = 3375225U;

	t20 = ((x277|x278)>>(x279/x280));

	if (t20 != 134682735U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x281 = UINT32_MAX;
	static int8_t x282 = INT8_MIN;
	uint64_t x283 = 38739776402LLU;
	static int64_t x284 = -1LL;

	t21 = ((x281|x282)>>(x283/x284));

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x305 = 37552364U;
	static int64_t x306 = INT64_MAX;
	volatile int64_t x307 = -1LL;
	volatile int8_t x308 = -1;
	volatile int64_t t22 = 89830782LL;

	t22 = ((x305|x306)>>(x307/x308));

	if (t22 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x326 = INT32_MIN;
	int64_t x327 = -1LL;
	volatile uint64_t x328 = UINT64_MAX;
	uint64_t t23 = 432589772865LLU;

	t23 = ((x325|x326)>>(x327/x328));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x345 = INT8_MAX;
	uint16_t x346 = 11U;

	t24 = ((x345|x346)>>(x347/x348));

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x390 = INT8_MIN;
	static uint64_t t25 = 232LLU;

	t25 = ((x389|x390)>>(x391/x392));

	if (t25 != 18446744073709551512LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x397 = 7LL;
	uint16_t x398 = UINT16_MAX;
	volatile int32_t x399 = -1;
	static int32_t x400 = 203868;
	volatile int64_t t26 = 2264630272LL;

	t26 = ((x397|x398)>>(x399/x400));

	if (t26 != 65535LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x402 = UINT8_MAX;

	t27 = ((x401|x402)>>(x403/x404));

	if (t27 != 2147483647U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x441 = 6312LLU;
	int32_t x442 = INT32_MAX;
	int64_t x443 = -1LL;
	uint32_t x444 = 1656U;
	static uint64_t t28 = 1083863LLU;

	t28 = ((x441|x442)>>(x443/x444));

	if (t28 != 2147483647LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x457 = UINT32_MAX;
	static int64_t x458 = INT64_MAX;
	uint64_t x460 = 1128413448599031396LLU;
	int64_t t29 = 1154877LL;

	t29 = ((x457|x458)>>(x459/x460));

	if (t29 != 36028797018963967LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x501 = 21215122LLU;
	static int32_t x503 = INT32_MAX;
	uint32_t x504 = UINT32_MAX;
	volatile uint64_t t30 = 3071992620191LLU;

	t30 = ((x501|x502)>>(x503/x504));

	if (t30 != 21233663LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x529 = INT16_MAX;
	uint32_t x530 = 368U;
	int64_t x532 = -4253346380329LL;

	t31 = ((x529|x530)>>(x531/x532));

	if (t31 != 32767U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x533 = UINT8_MAX;
	static int8_t x534 = 6;
	volatile int16_t x535 = INT16_MAX;
	int16_t x536 = INT16_MAX;
	int32_t t32 = 1038;

	t32 = ((x533|x534)>>(x535/x536));

	if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x537 = INT8_MIN;
	static int8_t x540 = -1;
	uint64_t t33 = 331467LLU;

	t33 = ((x537|x538)>>(x539/x540));

	if (t33 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x545 = 1;
	static uint32_t x546 = UINT32_MAX;
	static uint8_t x547 = UINT8_MAX;
	int16_t x548 = INT16_MAX;
	volatile uint32_t t34 = UINT32_MAX;

	t34 = ((x545|x546)>>(x547/x548));

	if (t34 != UINT32_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x554 = UINT16_MAX;
	int32_t x555 = -1;
	volatile int64_t x556 = -1890059LL;
	volatile int32_t t35 = INT32_MAX;

	t35 = ((x553|x554)>>(x555/x556));

	if (t35 != INT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x565 = 949;
	static volatile uint32_t x566 = UINT32_MAX;
	static volatile uint32_t t36 = 1924682909U;

	t36 = ((x565|x566)>>(x567/x568));

	if (t36 != 3U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x594 = 98069480886556333LL;
	static int8_t x595 = INT8_MIN;
	volatile int8_t x596 = INT8_MIN;
	uint64_t t37 = 4125226925LLU;

	t37 = ((x593|x594)>>(x595/x596));

	if (t37 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x601 = UINT32_MAX;
	static uint64_t x603 = 39903001783030LLU;
	int64_t x604 = INT64_MIN;
	volatile uint32_t t38 = UINT32_MAX;

	t38 = ((x601|x602)>>(x603/x604));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x609 = INT64_MAX;
	uint32_t x610 = 923225667U;
	int8_t x611 = INT8_MIN;
	volatile int64_t t39 = -822056LL;

	t39 = ((x609|x610)>>(x611/x612));

	if (t39 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x665 = -1;
	uint64_t x666 = 868516110901403LLU;
	volatile int8_t x667 = INT8_MIN;
	int64_t x668 = 26949LL;
	uint64_t t40 = UINT64_MAX;

	t40 = ((x665|x666)>>(x667/x668));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x669 = 1351U;
	uint64_t x671 = UINT64_MAX;
	volatile int16_t x672 = -2597;

	t41 = ((x669|x670)>>(x671/x672));

	if (t41 != 687) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x685 = 105U;
	int16_t x686 = INT16_MIN;
	volatile uint32_t t42 = 478199U;

	t42 = ((x685|x686)>>(x687/x688));

	if (t42 != 4294934633U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x701 = 165810039689680305LL;
	int16_t x702 = INT16_MAX;
	uint64_t x704 = 25465119718445297LLU;

	t43 = ((x701|x702)>>(x703/x704));

	if (t43 != 165810039689707519LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x717 = 417LLU;
	int32_t x718 = INT32_MAX;
	uint16_t x719 = UINT16_MAX;
	uint64_t x720 = 1066588189LLU;
	uint64_t t44 = 4065910897531592405LLU;

	t44 = ((x717|x718)>>(x719/x720));

	if (t44 != 2147483647LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x729 = 2420293620LL;
	uint64_t x730 = 11175LLU;
	volatile uint8_t x731 = 0U;
	uint64_t x732 = 190228935LLU;
	uint64_t t45 = 256713319237LLU;

	t45 = ((x729|x730)>>(x731/x732));

	if (t45 != 2420293623LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x733 = INT16_MIN;
	static uint32_t x734 = UINT32_MAX;
	static int64_t x735 = -1LL;
	int8_t x736 = INT8_MAX;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = ((x733|x734)>>(x735/x736));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x737 = INT32_MIN;
	uint8_t x739 = 3U;
	int64_t x740 = INT64_MIN;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = ((x737|x738)>>(x739/x740));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x765 = UINT16_MAX;
	volatile uint32_t x766 = 466U;
	uint64_t x767 = 112LLU;
	uint16_t x768 = UINT16_MAX;
	uint32_t t48 = 0U;

	t48 = ((x765|x766)>>(x767/x768));

	if (t48 != 65535U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x793 = 19U;
	uint8_t x794 = 27U;
	uint8_t x795 = 1U;
	int32_t t49 = 215;

	t49 = ((x793|x794)>>(x795/x796));

	if (t49 != 27) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x809 = 1348U;
	int64_t x810 = 41650197580LL;
	uint64_t x812 = UINT64_MAX;
	int64_t t50 = -702362450LL;

	t50 = ((x809|x810)>>(x811/x812));

	if (t50 != 41650197836LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x813 = UINT8_MAX;
	uint64_t x814 = 13562664891203316LLU;
	int8_t x815 = INT8_MIN;
	static int32_t x816 = -14607676;
	static volatile uint64_t t51 = 689349084965LLU;

	t51 = ((x813|x814)>>(x815/x816));

	if (t51 != 13562664891203327LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x818 = INT64_MAX;
	static uint64_t x820 = UINT64_MAX;
	volatile int64_t t52 = 116112806LL;

	t52 = ((x817|x818)>>(x819/x820));

	if (t52 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x826 = UINT64_MAX;
	int32_t x827 = INT32_MAX;
	volatile uint64_t x828 = UINT64_MAX;

	t53 = ((x825|x826)>>(x827/x828));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x849 = UINT64_MAX;
	int8_t x850 = INT8_MIN;
	uint16_t x851 = 209U;
	uint8_t x852 = UINT8_MAX;

	t54 = ((x849|x850)>>(x851/x852));

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x865 = INT32_MAX;
	uint64_t x866 = 1054005410306551LLU;
	uint16_t x867 = 185U;
	volatile uint64_t t55 = 3546LLU;

	t55 = ((x865|x866)>>(x867/x868));

	if (t55 != 128662896639LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x878 = INT64_MAX;
	volatile uint64_t x879 = 2477066899199501146LLU;
	int8_t x880 = -9;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = ((x877|x878)>>(x879/x880));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x881 = UINT8_MAX;
	volatile int16_t x882 = INT16_MAX;
	uint32_t x883 = 230U;
	static int32_t x884 = INT32_MIN;
	int32_t t57 = -780;

	t57 = ((x881|x882)>>(x883/x884));

	if (t57 != 32767) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x925 = 94U;
	int32_t x926 = INT32_MIN;
	int16_t x927 = INT16_MIN;
	int64_t x928 = INT64_MIN;
	volatile uint32_t t58 = 0U;

	t58 = ((x925|x926)>>(x927/x928));

	if (t58 != 2147483742U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x930 = 5U;
	uint32_t x931 = 138007U;
	static volatile int8_t x932 = -1;
	static volatile uint32_t t59 = 642U;

	t59 = ((x929|x930)>>(x931/x932));

	if (t59 != 26925U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x937 = 60207485U;
	static uint32_t x938 = UINT32_MAX;
	volatile int8_t x940 = INT8_MIN;

	t60 = ((x937|x938)>>(x939/x940));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x953 = INT8_MAX;
	int64_t x954 = 143028209632436064LL;
	volatile int32_t x955 = -1;
	static int64_t t61 = -23648601947996LL;

	t61 = ((x953|x954)>>(x955/x956));

	if (t61 != 143028209632436095LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x957 = INT64_MAX;
	int8_t x959 = 4;
	static int64_t t62 = INT64_MAX;

	t62 = ((x957|x958)>>(x959/x960));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x981 = 104857LLU;
	volatile int32_t x984 = -1;
	uint64_t t63 = 163123164LLU;

	t63 = ((x981|x982)>>(x983/x984));

	if (t63 != 52445LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x993 = INT8_MIN;
	int16_t x995 = -1;
	static int8_t x996 = 4;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = ((x993|x994)>>(x995/x996));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x1003 = INT8_MIN;
	volatile int8_t x1004 = INT8_MIN;
	volatile uint32_t t65 = 543584870U;

	t65 = ((x1001|x1002)>>(x1003/x1004));

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x1053 = 1;
	volatile uint16_t x1054 = UINT16_MAX;
	int64_t x1056 = INT64_MIN;
	int32_t t66 = 373317305;

	t66 = ((x1053|x1054)>>(x1055/x1056));

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x1081 = 20790U;
	int16_t x1082 = 0;
	volatile int16_t x1083 = INT16_MIN;
	int32_t x1084 = 59443;
	volatile int32_t t67 = 19262080;

	t67 = ((x1081|x1082)>>(x1083/x1084));

	if (t67 != 20790) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x1094 = UINT64_MAX;
	int8_t x1095 = INT8_MIN;
	volatile uint64_t t68 = UINT64_MAX;

	t68 = ((x1093|x1094)>>(x1095/x1096));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x1129 = INT64_MAX;
	uint8_t x1130 = 3U;
	uint8_t x1131 = 2U;
	static volatile int32_t x1132 = INT32_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = ((x1129|x1130)>>(x1131/x1132));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x1133 = 6355656509195005LLU;
	static volatile int8_t x1134 = -40;
	static int8_t x1135 = -1;
	int64_t x1136 = -1LL;
	uint64_t t70 = 1LLU;

	t70 = ((x1133|x1134)>>(x1135/x1136));

	if (t70 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x1137 = UINT64_MAX;
	volatile int32_t x1138 = INT32_MAX;
	int32_t x1140 = INT32_MIN;
	static volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x1137|x1138)>>(x1139/x1140));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x1181 = 54899U;
	int8_t x1182 = -29;
	static int8_t x1184 = -1;
	uint32_t t72 = 6U;

	t72 = ((x1181|x1182)>>(x1183/x1184));

	if (t72 != 2147483641U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x1190 = -567;
	static volatile int64_t x1192 = INT64_MIN;
	static uint64_t t73 = UINT64_MAX;

	t73 = ((x1189|x1190)>>(x1191/x1192));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x1197 = INT8_MIN;
	uint64_t x1198 = 36787581179LLU;
	int64_t x1200 = INT64_MIN;

	t74 = ((x1197|x1198)>>(x1199/x1200));

	if (t74 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x1241 = INT16_MAX;
	int64_t x1242 = 1929410249725LL;
	uint8_t x1243 = 0U;
	volatile uint64_t x1244 = 3723305177620LLU;
	int64_t t75 = -1LL;

	t75 = ((x1241|x1242)>>(x1243/x1244));

	if (t75 != 1929410281471LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x1249 = 2778378572869137041LL;
	int64_t x1250 = 636257472206374LL;
	int64_t x1251 = -13186LL;
	int64_t t76 = -1LL;

	t76 = ((x1249|x1250)>>(x1251/x1252));

	if (t76 != 2778380943969220279LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x1269 = INT64_MAX;
	static int16_t x1270 = 991;
	static int32_t x1271 = INT32_MIN;
	int32_t x1272 = INT32_MIN;
	volatile int64_t t77 = -41048LL;

	t77 = ((x1269|x1270)>>(x1271/x1272));

	if (t77 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x1278 = -2;
	int8_t x1279 = INT8_MAX;
	int16_t x1280 = 1466;
	uint32_t t78 = 255495678U;

	t78 = ((x1277|x1278)>>(x1279/x1280));

	if (t78 != 4294967294U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1285 = INT32_MIN;
	volatile uint32_t t79 = 1036U;

	t79 = ((x1285|x1286)>>(x1287/x1288));

	if (t79 != 2147486659U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x1305 = 0;
	int64_t x1306 = INT64_MAX;
	int16_t x1308 = INT16_MIN;
	int64_t t80 = INT64_MAX;

	t80 = ((x1305|x1306)>>(x1307/x1308));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x1309 = INT32_MIN;
	uint32_t x1310 = 455U;
	int8_t x1311 = 1;
	int8_t x1312 = INT8_MIN;
	uint32_t t81 = 960622357U;

	t81 = ((x1309|x1310)>>(x1311/x1312));

	if (t81 != 2147484103U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x1321 = 1U;
	uint32_t x1322 = 266U;
	volatile int64_t x1323 = 0LL;
	static volatile uint64_t x1324 = UINT64_MAX;
	static volatile uint32_t t82 = 7U;

	t82 = ((x1321|x1322)>>(x1323/x1324));

	if (t82 != 267U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x1325 = 2U;
	int16_t x1326 = 1;
	uint32_t x1327 = UINT32_MAX;
	int16_t x1328 = INT16_MIN;

	t83 = ((x1325|x1326)>>(x1327/x1328));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1369 = -21699LL;
	uint64_t x1370 = 69757481LLU;
	int32_t x1371 = 34;
	int64_t x1372 = INT64_MIN;

	t84 = ((x1369|x1370)>>(x1371/x1372));

	if (t84 != 18446744073709546301LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x1373 = UINT8_MAX;
	int16_t x1374 = INT16_MAX;
	static int64_t x1375 = -1LL;
	static int8_t x1376 = INT8_MIN;
	volatile int32_t t85 = 3;

	t85 = ((x1373|x1374)>>(x1375/x1376));

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x1381 = UINT16_MAX;
	static uint16_t x1382 = 2337U;
	int8_t x1383 = -49;
	uint16_t x1384 = 104U;
	volatile int32_t t86 = 5;

	t86 = ((x1381|x1382)>>(x1383/x1384));

	if (t86 != 65535) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x1385 = UINT32_MAX;
	int16_t x1387 = INT16_MAX;
	int64_t x1388 = 172553895425218LL;
	uint32_t t87 = UINT32_MAX;

	t87 = ((x1385|x1386)>>(x1387/x1388));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x1405 = INT32_MAX;
	volatile uint8_t x1406 = 10U;
	int16_t x1407 = INT16_MAX;
	int16_t x1408 = INT16_MAX;
	volatile int32_t t88 = 32123068;

	t88 = ((x1405|x1406)>>(x1407/x1408));

	if (t88 != 1073741823) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x1437 = UINT16_MAX;
	volatile int64_t x1438 = INT64_MAX;
	int64_t x1439 = 319LL;
	uint16_t x1440 = UINT16_MAX;
	volatile int64_t t89 = INT64_MAX;

	t89 = ((x1437|x1438)>>(x1439/x1440));

	if (t89 != INT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x1445 = 57U;
	int16_t x1446 = -1;
	static uint64_t x1447 = 418795874644730LLU;
	int32_t x1448 = INT32_MIN;

	t90 = ((x1445|x1446)>>(x1447/x1448));

	if (t90 != UINT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x1449 = 54;
	volatile int32_t x1450 = INT32_MAX;
	static uint16_t x1451 = 1U;
	int16_t x1452 = 6726;
	volatile int32_t t91 = INT32_MAX;

	t91 = ((x1449|x1450)>>(x1451/x1452));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x1457 = -52LL;
	uint64_t x1458 = 56435LLU;
	int16_t x1459 = INT16_MIN;
	uint64_t t92 = UINT64_MAX;

	t92 = ((x1457|x1458)>>(x1459/x1460));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x1477 = 0;
	uint64_t x1478 = 1066804669LLU;
	volatile int16_t x1479 = -1;
	int32_t x1480 = -1;
	volatile uint64_t t93 = 477629802872426LLU;

	t93 = ((x1477|x1478)>>(x1479/x1480));

	if (t93 != 533402334LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x1482 = INT8_MAX;
	volatile int64_t x1484 = INT64_MAX;
	volatile int32_t t94 = -206;

	t94 = ((x1481|x1482)>>(x1483/x1484));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x1489 = UINT16_MAX;
	volatile uint64_t x1490 = 2LLU;
	int32_t x1491 = 25873424;
	volatile int64_t x1492 = INT64_MIN;
	static volatile uint64_t t95 = 9404085LLU;

	t95 = ((x1489|x1490)>>(x1491/x1492));

	if (t95 != 65535LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x1493 = -1;
	uint16_t x1495 = UINT16_MAX;
	uint16_t x1496 = UINT16_MAX;

	t96 = ((x1493|x1494)>>(x1495/x1496));

	if (t96 != 2147483647U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x1497 = 337237U;
	uint32_t x1500 = 27680U;
	static volatile uint32_t t97 = 1U;

	t97 = ((x1497|x1498)>>(x1499/x1500));

	if (t97 != 360447U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1521 = 1;
	volatile uint64_t x1522 = UINT64_MAX;
	static uint32_t x1523 = UINT32_MAX;
	int32_t x1524 = INT32_MIN;
	static volatile uint64_t t98 = 4612LLU;

	t98 = ((x1521|x1522)>>(x1523/x1524));

	if (t98 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x1529 = UINT8_MAX;
	volatile uint64_t x1530 = 292214684721139LLU;
	uint16_t x1531 = UINT16_MAX;
	volatile uint64_t t99 = 6859573LLU;

	t99 = ((x1529|x1530)>>(x1531/x1532));

	if (t99 != 292214684721151LLU) { NG(); } else { ; }
	
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
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

