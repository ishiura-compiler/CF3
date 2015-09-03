#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x26 = 38;
int32_t x53 = -1;
int8_t x54 = 26;
int16_t x55 = -1;
int64_t x57 = INT64_MIN;
static volatile uint64_t x58 = 62500979LLU;
uint64_t t6 = 67383696876219LLU;
uint8_t x79 = 0U;
volatile int64_t t7 = -33827362049LL;
volatile uint16_t x162 = 0U;
static volatile uint16_t x163 = 16U;
uint8_t x181 = 18U;
int64_t t15 = 747512466270LL;
static int16_t x245 = INT16_MIN;
static uint16_t x246 = 116U;
volatile int32_t t16 = 321631558;
int16_t x261 = INT16_MIN;
volatile uint64_t t19 = 0LLU;
int8_t x332 = INT8_MAX;
int64_t x340 = INT64_MAX;
volatile uint64_t t21 = 7599358LLU;
int32_t x374 = 1;
volatile uint16_t x375 = 29U;
int8_t x376 = INT8_MIN;
int64_t x380 = -51508334LL;
uint32_t x387 = 182380U;
volatile int16_t x391 = -1;
volatile int64_t x393 = -900LL;
int8_t x417 = 52;
uint8_t x429 = 0U;
volatile uint32_t x450 = 197021U;
uint16_t x454 = UINT16_MAX;
uint32_t x455 = UINT32_MAX;
static int64_t x461 = -503693587845066LL;
int64_t x464 = INT64_MAX;
int64_t x473 = 2724779384691752659LL;
uint16_t x474 = 701U;
static int64_t x475 = -24277LL;
static volatile uint8_t x505 = 0U;
static int64_t t35 = -612773900LL;
int64_t x529 = INT64_MIN;
int32_t x546 = 35352809;
volatile int64_t t39 = -3416788LL;
int16_t x569 = INT16_MIN;
uint64_t x571 = 1840671069LLU;
int8_t x572 = INT8_MIN;
uint32_t x618 = 5U;
static uint64_t x619 = 11701289789202LLU;
int16_t x623 = -2;
volatile uint64_t t46 = 15338452485LLU;
int64_t x689 = 1568473244LL;
static int16_t x690 = INT16_MAX;
int16_t x703 = -2556;
static int16_t x716 = INT16_MIN;
int64_t x719 = 24LL;
uint32_t x776 = UINT32_MAX;
int64_t t56 = 3080033135040007428LL;
int16_t x777 = INT16_MAX;
static uint16_t x779 = 3875U;
static volatile uint32_t t57 = 93927U;
volatile uint32_t x812 = UINT32_MAX;
static volatile uint32_t t60 = 0U;
volatile uint16_t x850 = 55U;
uint64_t x869 = 4196470979359969454LLU;
int16_t x871 = -1;
uint16_t x872 = UINT16_MAX;
int8_t x883 = -1;
static volatile int8_t x893 = INT8_MIN;
int64_t x894 = 886223816730977LL;
int32_t x954 = 457;
static int16_t x956 = INT16_MIN;
static int8_t x976 = INT8_MIN;
uint16_t x986 = 11U;
static int16_t x1001 = 393;
int16_t x1002 = 26;
uint8_t x1031 = 121U;
int16_t x1037 = INT16_MIN;
int32_t x1040 = INT32_MIN;
int32_t x1053 = INT32_MIN;
static int8_t x1062 = INT8_MAX;
volatile int32_t t79 = -1038882725;
int16_t x1071 = INT16_MIN;
uint64_t x1081 = 19738733885714020LLU;
int16_t x1083 = 3;
static int32_t x1097 = 530;
volatile int16_t x1099 = INT16_MIN;
static uint64_t x1110 = UINT64_MAX;
static volatile int16_t x1112 = 5466;
volatile uint64_t t85 = 5596946873919LLU;
int32_t t86 = -19285;
uint64_t x1130 = 56037569110196094LLU;
static int16_t x1141 = INT16_MIN;
uint8_t x1142 = UINT8_MAX;
int16_t x1144 = INT16_MIN;
int64_t x1189 = INT64_MIN;
int8_t x1198 = 0;
int16_t x1200 = INT16_MIN;
static uint64_t t91 = 3504866497693LLU;
uint16_t x1233 = 1764U;
static uint16_t x1234 = 2U;
static volatile int32_t t92 = 27;
int32_t x1245 = -13777;
volatile int8_t x1282 = 4;
uint64_t t94 = 42780508684809438LLU;
int8_t x1299 = INT8_MIN;
int64_t x1300 = -1792LL;
static uint16_t x1326 = 2U;
volatile uint64_t x1328 = UINT64_MAX;
uint32_t x1342 = 4179391U;
static volatile int64_t t98 = -4682293794927345LL;


void f0(void) {
	uint8_t x5 = 4U;
	static volatile uint32_t x6 = 55518U;
	static volatile int8_t x7 = INT8_MIN;
	volatile int8_t x8 = INT8_MIN;
	volatile uint32_t t0 = 365U;

	t0 = (x5^(x6<<(x7/x8)));

	if (t0 != 111032U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x13 = 2558U;
	int16_t x14 = 13062;
	volatile int64_t x15 = -1LL;
	volatile int32_t x16 = INT32_MIN;
	volatile uint32_t t1 = 552450U;

	t1 = (x13^(x14<<(x15/x16)));

	if (t1 != 15096U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x21 = -1;
	uint32_t x22 = UINT32_MAX;
	int32_t x23 = 8;
	int64_t x24 = INT64_MAX;
	static uint32_t t2 = 547039123U;

	t2 = (x21^(x22<<(x23/x24)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = UINT16_MAX;
	int16_t x27 = -1;
	static int32_t x28 = -1;
	int32_t t3 = 25176227;

	t3 = (x25^(x26<<(x27/x28)));

	if (t3 != 65459) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MIN;
	uint64_t x30 = 917805227527278033LLU;
	uint8_t x31 = 11U;
	volatile uint8_t x32 = UINT8_MAX;
	volatile uint64_t t4 = 104LLU;

	t4 = (x29^(x30<<(x31/x32)));

	if (t4 != 17528938846182273617LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x56 = INT8_MIN;
	volatile int32_t t5 = -432;

	t5 = (x53^(x54<<(x55/x56)));

	if (t5 != -27) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x59 = -1;
	uint8_t x60 = 17U;

	t6 = (x57^(x58<<(x59/x60)));

	if (t6 != 9223372036917276787LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x77 = 11695227;
	int64_t x78 = 5284500LL;
	volatile int8_t x80 = -1;

	t7 = (x77^(x78<<(x79/x80)));

	if (t7 != 14866159LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x81 = UINT32_MAX;
	volatile uint16_t x82 = UINT16_MAX;
	int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MAX;
	volatile uint32_t t8 = 78453U;

	t8 = (x81^(x82<<(x83/x84)));

	if (t8 != 4294901760U) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x93 = 49;
	uint16_t x94 = 7U;
	static volatile int8_t x95 = INT8_MAX;
	uint8_t x96 = 38U;
	volatile int32_t t9 = -1;

	t9 = (x93^(x94<<(x95/x96)));

	if (t9 != 9) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x113 = UINT64_MAX;
	static uint32_t x114 = 406388U;
	int8_t x115 = -1;
	int16_t x116 = INT16_MIN;
	static uint64_t t10 = 2LLU;

	t10 = (x113^(x114<<(x115/x116)));

	if (t10 != 18446744073709145227LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x161 = 29696787130370193LLU;
	uint32_t x164 = UINT32_MAX;
	uint64_t t11 = 106132LLU;

	t11 = (x161^(x162<<(x163/x164)));

	if (t11 != 29696787130370193LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x182 = 973874719306LLU;
	int8_t x183 = INT8_MIN;
	int32_t x184 = INT32_MAX;
	volatile uint64_t t12 = 104758166LLU;

	t12 = (x181^(x182<<(x183/x184)));

	if (t12 != 973874719320LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x189 = 534U;
	uint16_t x190 = 597U;
	static uint64_t x191 = 6146093498LLU;
	static int16_t x192 = -1673;
	static int32_t t13 = 534234;

	t13 = (x189^(x190<<(x191/x192)));

	if (t13 != 67) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x205 = INT32_MAX;
	uint16_t x206 = 59U;
	uint64_t x207 = 1596657926LLU;
	int32_t x208 = INT32_MAX;
	int32_t t14 = -8147;

	t14 = (x205^(x206<<(x207/x208)));

	if (t14 != 2147483588) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x233 = -1LL;
	uint8_t x234 = 103U;
	static volatile int8_t x235 = -7;
	int32_t x236 = INT32_MIN;

	t15 = (x233^(x234<<(x235/x236)));

	if (t15 != -104LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x247 = UINT16_MAX;
	static volatile int32_t x248 = INT32_MIN;

	t16 = (x245^(x246<<(x247/x248)));

	if (t16 != -32652) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = INT32_MAX;
	static uint8_t x259 = 23U;
	uint8_t x260 = UINT8_MAX;
	static volatile uint64_t t17 = 23445720LLU;

	t17 = (x257^(x258<<(x259/x260)));

	if (t17 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x262 = UINT8_MAX;
	int32_t x263 = -2424;
	volatile int16_t x264 = INT16_MIN;
	int32_t t18 = 702749;

	t18 = (x261^(x262<<(x263/x264)));

	if (t18 != -32513) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x285 = 1644201LLU;
	uint64_t x286 = 16983222416LLU;
	uint8_t x287 = 2U;
	int8_t x288 = INT8_MIN;

	t19 = (x285^(x286<<(x287/x288)));

	if (t19 != 16984735289LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x329 = 4114916455675LL;
	int64_t x330 = INT64_MAX;
	uint8_t x331 = 6U;
	static int64_t t20 = -47740646168167LL;

	t20 = (x329^(x330<<(x331/x332)));

	if (t20 != 9223367921938320132LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x337 = 8262191LLU;
	volatile uint64_t x338 = 7945014LLU;
	int32_t x339 = INT32_MIN;

	t21 = (x337^(x338<<(x339/x340)));

	if (t21 != 469273LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x373 = INT16_MAX;
	static volatile int32_t t22 = 14990;

	t22 = (x373^(x374<<(x375/x376)));

	if (t22 != 32766) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = 26;
	uint32_t x379 = 30626557U;
	static volatile int32_t t23 = 47559400;

	t23 = (x377^(x378<<(x379/x380)));

	if (t23 != -2147483622) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x385 = UINT32_MAX;
	int16_t x386 = INT16_MAX;
	static volatile int8_t x388 = INT8_MIN;
	static uint32_t t24 = 958668692U;

	t24 = (x385^(x386<<(x387/x388)));

	if (t24 != 4294934528U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x389 = INT32_MAX;
	int16_t x390 = 8;
	int8_t x392 = -1;
	int32_t t25 = -4;

	t25 = (x389^(x390<<(x391/x392)));

	if (t25 != 2147483631) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x394 = 23710916U;
	int32_t x395 = -1;
	uint8_t x396 = UINT8_MAX;
	volatile int64_t t26 = -49961LL;

	t26 = (x393^(x394<<(x395/x396)));

	if (t26 != -23711560LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x401 = -1;
	static volatile uint16_t x402 = 0U;
	static uint64_t x403 = 471708813LLU;
	int16_t x404 = INT16_MIN;
	volatile int32_t t27 = 1;

	t27 = (x401^(x402<<(x403/x404)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = INT8_MIN;
	volatile int32_t t28 = -90418;

	t28 = (x417^(x418<<(x419/x420)));

	if (t28 != 458) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x430 = 216108381;
	uint64_t x431 = 7265155499752LLU;
	int8_t x432 = INT8_MIN;
	int32_t t29 = -732;

	t29 = (x429^(x430<<(x431/x432)));

	if (t29 != 216108381) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x449 = 25;
	static volatile int32_t x451 = INT32_MAX;
	volatile uint64_t x452 = 31631770625LLU;
	volatile uint32_t t30 = 3048U;

	t30 = (x449^(x450<<(x451/x452)));

	if (t30 != 196996U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x453 = -14;
	int16_t x456 = -244;
	int32_t t31 = 2282805;

	t31 = (x453^(x454<<(x455/x456)));

	if (t31 != -131060) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x457 = UINT64_MAX;
	volatile int64_t x458 = 215588LL;
	int16_t x459 = 0;
	uint32_t x460 = 1256U;
	volatile uint64_t t32 = 54265649665LLU;

	t32 = (x457^(x458<<(x459/x460)));

	if (t32 != 18446744073709336027LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x462 = 14156;
	int32_t x463 = 1;
	volatile int64_t t33 = 924840432065504LL;

	t33 = (x461^(x462<<(x463/x464)));

	if (t33 != -503693587855494LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x476 = INT32_MIN;
	volatile int64_t t34 = -373LL;

	t34 = (x473^(x474<<(x475/x476)));

	if (t34 != 2724779384691752046LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x506 = 11813547LL;
	int64_t x507 = 15905452027LL;
	volatile int64_t x508 = INT64_MIN;

	t35 = (x505^(x506<<(x507/x508)));

	if (t35 != 11813547LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x513 = INT32_MIN;
	volatile uint8_t x514 = UINT8_MAX;
	volatile int64_t x515 = -1LL;
	static volatile int32_t x516 = -1;
	int32_t t36 = -3750826;

	t36 = (x513^(x514<<(x515/x516)));

	if (t36 != -2147483138) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x530 = 2U;
	int8_t x531 = INT8_MAX;
	uint32_t x532 = 7933149U;
	static volatile int64_t t37 = -1162799386914490LL;

	t37 = (x529^(x530<<(x531/x532)));

	if (t37 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x537 = INT32_MAX;
	uint8_t x538 = 2U;
	int8_t x539 = 0;
	volatile int32_t x540 = -1;
	volatile int32_t t38 = 13137056;

	t38 = (x537^(x538<<(x539/x540)));

	if (t38 != 2147483645) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x545 = -1LL;
	int16_t x547 = INT16_MIN;
	volatile int32_t x548 = INT32_MIN;

	t39 = (x545^(x546<<(x547/x548)));

	if (t39 != -35352810LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x553 = 149U;
	static uint16_t x554 = 528U;
	int64_t x555 = 262049LL;
	static int64_t x556 = INT64_MIN;
	uint32_t t40 = 2U;

	t40 = (x553^(x554<<(x555/x556)));

	if (t40 != 645U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x565 = INT8_MIN;
	static int8_t x566 = INT8_MAX;
	volatile uint32_t x567 = 10U;
	uint32_t x568 = 85144U;
	static volatile int32_t t41 = -1456086;

	t41 = (x565^(x566<<(x567/x568)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x570 = UINT16_MAX;
	volatile int32_t t42 = 1022511563;

	t42 = (x569^(x570<<(x571/x572)));

	if (t42 != -32769) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x589 = INT8_MIN;
	uint16_t x590 = UINT16_MAX;
	static volatile uint64_t x591 = 12059LLU;
	uint32_t x592 = 26587U;
	int32_t t43 = -528429135;

	t43 = (x589^(x590<<(x591/x592)));

	if (t43 != -65409) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x605 = 758336435LLU;
	uint8_t x606 = 0U;
	volatile uint32_t x607 = 2839861U;
	int16_t x608 = INT16_MIN;
	uint64_t t44 = 2720600111652279897LLU;

	t44 = (x605^(x606<<(x607/x608)));

	if (t44 != 758336435LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x617 = 5704077U;
	int8_t x620 = INT8_MIN;
	uint32_t t45 = 76U;

	t45 = (x617^(x618<<(x619/x620)));

	if (t45 != 5704072U) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x621 = INT32_MAX;
	volatile uint64_t x622 = 1948226LLU;
	int64_t x624 = INT64_MIN;

	t46 = (x621^(x622<<(x623/x624)));

	if (t46 != 2145535421LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x681 = -13703;
	uint8_t x682 = 1U;
	uint16_t x683 = 1016U;
	uint8_t x684 = UINT8_MAX;
	int32_t t47 = 322;

	t47 = (x681^(x682<<(x683/x684)));

	if (t47 != -13711) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x691 = INT16_MIN;
	static int16_t x692 = INT16_MIN;
	static int64_t t48 = 36766895LL;

	t48 = (x689^(x690<<(x691/x692)));

	if (t48 != 1568538466LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x701 = INT64_MAX;
	uint32_t x702 = UINT32_MAX;
	volatile int32_t x704 = -356698;
	int64_t t49 = 11712847237LL;

	t49 = (x701^(x702<<(x703/x704)));

	if (t49 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x705 = INT16_MAX;
	static uint32_t x706 = 18866U;
	int32_t x707 = -389880;
	int64_t x708 = INT64_MIN;
	volatile uint32_t t50 = 1U;

	t50 = (x705^(x706<<(x707/x708)));

	if (t50 != 13901U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x713 = 28477U;
	int32_t x714 = 27521;
	int8_t x715 = INT8_MIN;
	static int32_t t51 = -2576;

	t51 = (x713^(x714<<(x715/x716)));

	if (t51 != 1212) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint16_t x717 = 105U;
	volatile int32_t x718 = INT32_MAX;
	static uint8_t x720 = UINT8_MAX;
	int32_t t52 = 540469;

	t52 = (x717^(x718<<(x719/x720)));

	if (t52 != 2147483542) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x733 = 7U;
	volatile int64_t x734 = 199767790LL;
	volatile int32_t x735 = -1;
	volatile int8_t x736 = -1;
	volatile int64_t t53 = -178751299983LL;

	t53 = (x733^(x734<<(x735/x736)));

	if (t53 != 399535579LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x741 = 11628593U;
	static int32_t x742 = 8425;
	uint32_t x743 = 435U;
	int8_t x744 = -1;
	uint32_t t54 = 6U;

	t54 = (x741^(x742<<(x743/x744)));

	if (t54 != 11620568U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x745 = UINT32_MAX;
	static uint64_t x746 = UINT64_MAX;
	uint32_t x747 = UINT32_MAX;
	uint64_t x748 = 2419670873095LLU;
	uint64_t t55 = 1307063LLU;

	t55 = (x745^(x746<<(x747/x748)));

	if (t55 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x773 = -34689075594484055LL;
	uint32_t x774 = 23646517U;
	uint16_t x775 = 1012U;

	t56 = (x773^(x774<<(x775/x776)));

	if (t56 != -34689075605506148LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x778 = UINT32_MAX;
	static int8_t x780 = INT8_MAX;

	t57 = (x777^(x778<<(x779/x780)));

	if (t57 != 3221258239U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x797 = INT8_MAX;
	volatile int8_t x798 = INT8_MAX;
	uint16_t x799 = UINT16_MAX;
	int32_t x800 = INT32_MAX;
	static int32_t t58 = 1914;

	t58 = (x797^(x798<<(x799/x800)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x809 = INT16_MIN;
	uint8_t x810 = 125U;
	uint16_t x811 = 18U;
	volatile int32_t t59 = 106649199;

	t59 = (x809^(x810<<(x811/x812)));

	if (t59 != -32643) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x825 = -1;
	uint32_t x826 = 9U;
	int8_t x827 = 1;
	int32_t x828 = 5956252;

	t60 = (x825^(x826<<(x827/x828)));

	if (t60 != 4294967286U) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x849 = 19;
	int32_t x851 = INT32_MIN;
	static volatile int64_t x852 = INT64_MIN;
	int32_t t61 = 1;

	t61 = (x849^(x850<<(x851/x852)));

	if (t61 != 36) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x861 = INT8_MIN;
	uint16_t x862 = UINT16_MAX;
	volatile int16_t x863 = -3;
	int8_t x864 = INT8_MIN;
	int32_t t62 = -33452279;

	t62 = (x861^(x862<<(x863/x864)));

	if (t62 != -65409) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x870 = INT16_MAX;
	volatile uint64_t t63 = 1567LLU;

	t63 = (x869^(x870<<(x871/x872)));

	if (t63 != 4196470979359993681LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x881 = 241;
	volatile uint8_t x882 = 2U;
	static int64_t x884 = -57LL;
	int32_t t64 = 4;

	t64 = (x881^(x882<<(x883/x884)));

	if (t64 != 243) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x895 = UINT8_MAX;
	volatile int64_t x896 = INT64_MIN;
	int64_t t65 = -12887975712429LL;

	t65 = (x893^(x894<<(x895/x896)));

	if (t65 != -886223816730911LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x897 = INT32_MIN;
	uint16_t x898 = 3887U;
	uint32_t x899 = 107767845U;
	volatile int16_t x900 = INT16_MIN;
	static int32_t t66 = -107894027;

	t66 = (x897^(x898<<(x899/x900)));

	if (t66 != -2147479761) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x929 = INT64_MAX;
	static volatile uint32_t x930 = 59750452U;
	static int16_t x931 = INT16_MAX;
	uint32_t x932 = 17525U;
	int64_t t67 = -343624010178077244LL;

	t67 = (x929^(x930<<(x931/x932)));

	if (t67 != 9223372036735274903LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x937 = 216302376372599239LL;
	int16_t x938 = INT16_MAX;
	static uint64_t x939 = 3180LLU;
	int64_t x940 = INT64_MAX;
	volatile int64_t t68 = -105574605LL;

	t68 = (x937^(x938<<(x939/x940)));

	if (t68 != 216302376372569656LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x953 = -1;
	int8_t x955 = 1;
	int32_t t69 = -15190;

	t69 = (x953^(x954<<(x955/x956)));

	if (t69 != -458) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x973 = -1LL;
	int16_t x974 = 312;
	static int8_t x975 = INT8_MAX;
	int64_t t70 = -8288710018LL;

	t70 = (x973^(x974<<(x975/x976)));

	if (t70 != -313LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x985 = 704U;
	int8_t x987 = -1;
	static volatile int16_t x988 = INT16_MIN;
	int32_t t71 = -85443122;

	t71 = (x985^(x986<<(x987/x988)));

	if (t71 != 715) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x997 = -1;
	int16_t x998 = INT16_MAX;
	int16_t x999 = INT16_MAX;
	uint64_t x1000 = 1578577LLU;
	int32_t t72 = -2110;

	t72 = (x997^(x998<<(x999/x1000)));

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x1003 = 1U;
	uint64_t x1004 = 15566288656LLU;
	volatile int32_t t73 = 0;

	t73 = (x1001^(x1002<<(x1003/x1004)));

	if (t73 != 403) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x1009 = -384220;
	uint16_t x1010 = 52U;
	uint8_t x1011 = UINT8_MAX;
	uint64_t x1012 = UINT64_MAX;
	static volatile int32_t t74 = -3;

	t74 = (x1009^(x1010<<(x1011/x1012)));

	if (t74 != -384240) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x1025 = INT64_MIN;
	static uint64_t x1026 = 11926677140LLU;
	int64_t x1027 = 2166LL;
	static volatile uint32_t x1028 = 8197849U;
	uint64_t t75 = 54058402LLU;

	t75 = (x1025^(x1026<<(x1027/x1028)));

	if (t75 != 9223372048781452948LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x1029 = -1;
	int8_t x1030 = 1;
	int64_t x1032 = INT64_MIN;
	int32_t t76 = -31;

	t76 = (x1029^(x1030<<(x1031/x1032)));

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x1038 = 47U;
	uint16_t x1039 = 174U;
	volatile int32_t t77 = 711057832;

	t77 = (x1037^(x1038<<(x1039/x1040)));

	if (t77 != -32721) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint16_t x1054 = 28U;
	volatile int32_t x1055 = 5759;
	uint32_t x1056 = UINT32_MAX;
	int32_t t78 = -3358421;

	t78 = (x1053^(x1054<<(x1055/x1056)));

	if (t78 != -2147483620) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x1061 = INT32_MIN;
	static uint32_t x1063 = 994U;
	int16_t x1064 = INT16_MAX;

	t79 = (x1061^(x1062<<(x1063/x1064)));

	if (t79 != -2147483521) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x1069 = INT16_MAX;
	int32_t x1070 = 249005166;
	int64_t x1072 = INT64_MIN;
	int32_t t80 = 24;

	t80 = (x1069^(x1070<<(x1071/x1072)));

	if (t80 != 249035665) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x1082 = 1119255U;
	volatile int16_t x1084 = INT16_MAX;
	uint64_t t81 = 176317025LLU;

	t81 = (x1081^(x1082<<(x1083/x1084)));

	if (t81 != 19738733884734067LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x1085 = 12276413085103LL;
	volatile uint32_t x1086 = 100550045U;
	volatile uint8_t x1087 = 9U;
	int8_t x1088 = INT8_MIN;
	volatile int64_t t82 = -1826231985LL;

	t82 = (x1085^(x1086<<(x1087/x1088)));

	if (t82 != 12276472213554LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x1098 = INT16_MAX;
	static int64_t x1100 = INT64_MIN;
	int32_t t83 = 1277;

	t83 = (x1097^(x1098<<(x1099/x1100)));

	if (t83 != 32237) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x1105 = INT64_MIN;
	uint64_t x1106 = 198737115317LLU;
	int8_t x1107 = -1;
	static volatile int16_t x1108 = INT16_MAX;
	volatile uint64_t t84 = 73LLU;

	t84 = (x1105^(x1106<<(x1107/x1108)));

	if (t84 != 9223372235591891125LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x1109 = 171374U;
	int8_t x1111 = -1;

	t85 = (x1109^(x1110<<(x1111/x1112)));

	if (t85 != 18446744073709380241LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x1125 = -60;
	uint8_t x1126 = 6U;
	int16_t x1127 = INT16_MAX;
	static uint32_t x1128 = UINT32_MAX;

	t86 = (x1125^(x1126<<(x1127/x1128)));

	if (t86 != -62) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x1129 = 2154;
	static int16_t x1131 = INT16_MIN;
	int32_t x1132 = INT32_MIN;
	uint64_t t87 = 8781054334092259LLU;

	t87 = (x1129^(x1130<<(x1131/x1132)));

	if (t87 != 56037569110193940LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x1143 = 3;
	static int32_t t88 = 2391;

	t88 = (x1141^(x1142<<(x1143/x1144)));

	if (t88 != -32513) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x1190 = 67U;
	static int8_t x1191 = INT8_MAX;
	int32_t x1192 = -15045;
	static volatile int64_t t89 = 1065297LL;

	t89 = (x1189^(x1190<<(x1191/x1192)));

	if (t89 != -9223372036854775741LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x1197 = INT32_MAX;
	uint64_t x1199 = 1143646637352LLU;
	int32_t t90 = INT32_MAX;

	t90 = (x1197^(x1198<<(x1199/x1200)));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x1225 = 0U;
	static uint64_t x1226 = 89087373445LLU;
	int8_t x1227 = 0;
	int16_t x1228 = INT16_MIN;

	t91 = (x1225^(x1226<<(x1227/x1228)));

	if (t91 != 89087373445LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x1235 = -1;
	volatile uint16_t x1236 = 26U;

	t92 = (x1233^(x1234<<(x1235/x1236)));

	if (t92 != 1766) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x1246 = 8110U;
	uint16_t x1247 = 40U;
	static volatile int64_t x1248 = INT64_MIN;
	volatile int32_t t93 = 1;

	t93 = (x1245^(x1246<<(x1247/x1248)));

	if (t93 != -10879) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x1281 = UINT64_MAX;
	static uint8_t x1283 = 6U;
	static volatile uint64_t x1284 = UINT64_MAX;

	t94 = (x1281^(x1282<<(x1283/x1284)));

	if (t94 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x1297 = INT8_MIN;
	int16_t x1298 = INT16_MAX;
	static int32_t t95 = -27777290;

	t95 = (x1297^(x1298<<(x1299/x1300)));

	if (t95 != -32641) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x1313 = 86U;
	int32_t x1314 = INT32_MAX;
	int64_t x1315 = -1LL;
	int8_t x1316 = INT8_MIN;
	int32_t t96 = 1196;

	t96 = (x1313^(x1314<<(x1315/x1316)));

	if (t96 != 2147483561) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x1325 = 2009372452855988392LLU;
	static volatile uint8_t x1327 = 28U;
	uint64_t t97 = 30751874303LLU;

	t97 = (x1325^(x1326<<(x1327/x1328)));

	if (t97 != 2009372452855988394LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x1341 = -5951259250169779LL;
	int64_t x1343 = -1049985966LL;
	volatile int32_t x1344 = INT32_MIN;

	t98 = (x1341^(x1342<<(x1343/x1344)));

	if (t98 != -5951259251921422LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x1377 = 2U;
	int64_t x1378 = 3LL;
	int8_t x1379 = -1;
	int32_t x1380 = INT32_MIN;
	int64_t t99 = 18343720138LL;

	t99 = (x1377^(x1378<<(x1379/x1380)));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

