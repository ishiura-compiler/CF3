#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x16 = -1;
int32_t x21 = 425;
int16_t x149 = 69;
volatile uint32_t x151 = 37067U;
int64_t x152 = -963004LL;
static uint8_t x169 = UINT8_MAX;
int16_t x187 = INT16_MAX;
uint16_t x213 = 0U;
int32_t t16 = -626;
uint64_t x235 = UINT64_MAX;
static int8_t x239 = -1;
int16_t x247 = -676;
uint8_t x266 = 0U;
int16_t x277 = 5057;
volatile int32_t x279 = -160345680;
int8_t x324 = INT8_MIN;
volatile int32_t t26 = -522;
volatile int64_t t27 = -6259162LL;
static uint8_t x350 = 1U;
static uint64_t x351 = 7335779656931110564LLU;
static volatile int16_t x352 = 1;
int8_t x356 = -1;
uint32_t x388 = 15898U;
static volatile int64_t t33 = INT64_MAX;
uint8_t x402 = UINT8_MAX;
uint8_t x545 = UINT8_MAX;
uint32_t x548 = 5701569U;
int8_t x594 = INT8_MIN;
volatile uint16_t x595 = 83U;
uint8_t x629 = UINT8_MAX;
int16_t x642 = INT16_MAX;
volatile int32_t t46 = -279;
int32_t x655 = INT32_MAX;
volatile int64_t t47 = -9329LL;
int32_t x700 = INT32_MIN;
volatile uint32_t x743 = UINT32_MAX;
static uint8_t x750 = UINT8_MAX;
uint16_t x762 = 0U;
int8_t x790 = -6;
int16_t x802 = -1;
int32_t t60 = 17;
int8_t x823 = 7;
static uint32_t t62 = UINT32_MAX;
uint16_t x861 = 6U;
int8_t x865 = INT8_MAX;
int32_t x868 = -18705;
static int16_t x875 = 9;
volatile uint64_t t65 = 189883874285LLU;
volatile int8_t x895 = 14;
uint8_t x925 = 1U;
static int32_t x930 = INT32_MIN;
int64_t x931 = INT64_MAX;
int16_t x942 = INT16_MIN;
uint16_t x950 = UINT16_MAX;
int32_t x959 = -1009175;
int8_t x961 = INT8_MAX;
volatile int8_t x962 = INT8_MAX;
static int64_t x966 = INT64_MIN;
int32_t x967 = 3792803;
volatile int32_t x971 = INT32_MAX;
volatile int32_t x981 = INT32_MAX;
uint16_t x983 = 22779U;
uint16_t x984 = 21545U;
int32_t t79 = INT32_MAX;
uint32_t t81 = 1040333213U;
uint64_t x1010 = 6LLU;
volatile int64_t x1011 = 1550LL;
uint16_t x1012 = UINT16_MAX;
int8_t x1040 = INT8_MIN;
static volatile int8_t x1051 = 0;
uint64_t t85 = 195798159106923LLU;
static volatile uint32_t x1086 = 3U;
int16_t x1151 = INT16_MAX;
uint32_t t87 = 966141U;
static uint8_t x1155 = 18U;
int64_t x1170 = INT64_MIN;
static uint32_t x1172 = 1U;
volatile int32_t t89 = -10405;
int64_t x1226 = -479550711390681LL;
static volatile int8_t x1243 = INT8_MAX;
uint32_t x1245 = 58U;
uint16_t x1248 = 4U;
int32_t x1251 = 6928202;
static int8_t x1256 = INT8_MIN;
volatile uint16_t x1267 = 6U;
uint16_t x1273 = 1U;
uint8_t x1274 = 0U;
int64_t x1285 = INT64_MAX;
uint64_t x1286 = 255LLU;
uint8_t x1289 = 54U;


void f0(void) {
	int8_t x13 = 12;
	int64_t x14 = 121939160LL;
	uint8_t x15 = UINT8_MAX;
	static volatile int32_t t0 = -1786735;

	t0 = (x13>>(x14*(x15<=x16)));

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x22 = 0;
	uint8_t x23 = 44U;
	uint64_t x24 = UINT64_MAX;
	static volatile int32_t t1 = -1;

	t1 = (x21>>(x22*(x23<=x24)));

	if (t1 != 425) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x33 = 15LLU;
	uint16_t x34 = 0U;
	int16_t x35 = INT16_MIN;
	int8_t x36 = -1;
	volatile uint64_t t2 = 129379801357399LLU;

	t2 = (x33>>(x34*(x35<=x36)));

	if (t2 != 15LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x57 = 1362664862LLU;
	static uint64_t x58 = 4LLU;
	int8_t x59 = INT8_MIN;
	int8_t x60 = INT8_MIN;
	volatile uint64_t t3 = 6LLU;

	t3 = (x57>>(x58*(x59<=x60)));

	if (t3 != 85166553LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x121 = 4;
	static volatile uint16_t x122 = 11U;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t4 = -26;

	t4 = (x121>>(x122*(x123<=x124)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x133 = 466041;
	static volatile int8_t x134 = -1;
	static volatile uint16_t x135 = UINT16_MAX;
	int32_t x136 = INT32_MIN;
	int32_t t5 = -223926564;

	t5 = (x133>>(x134*(x135<=x136)));

	if (t5 != 466041) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x150 = -1324;
	static volatile int32_t t6 = 85;

	t6 = (x149>>(x150*(x151<=x152)));

	if (t6 != 69) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x153 = INT32_MAX;
	uint32_t x154 = 241646511U;
	int16_t x155 = 90;
	static uint8_t x156 = 8U;
	volatile int32_t t7 = INT32_MAX;

	t7 = (x153>>(x154*(x155<=x156)));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x157 = 0;
	static uint8_t x158 = UINT8_MAX;
	int16_t x159 = -1;
	int16_t x160 = INT16_MIN;
	volatile int32_t t8 = 307931970;

	t8 = (x157>>(x158*(x159<=x160)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x161 = UINT32_MAX;
	static volatile int16_t x162 = -147;
	uint16_t x163 = 76U;
	int64_t x164 = INT64_MIN;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = (x161>>(x162*(x163<=x164)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x170 = INT64_MIN;
	static volatile int64_t x171 = 1316341135LL;
	volatile int16_t x172 = 58;
	volatile int32_t t10 = -3783361;

	t10 = (x169>>(x170*(x171<=x172)));

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x181 = 278U;
	volatile uint8_t x182 = 20U;
	volatile int32_t x183 = INT32_MIN;
	int8_t x184 = INT8_MIN;
	int32_t t11 = -30849632;

	t11 = (x181>>(x182*(x183<=x184)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x185 = 21793530217168LL;
	uint32_t x186 = 140283640U;
	static int64_t x188 = -1LL;
	volatile int64_t t12 = 5437148825089880LL;

	t12 = (x185>>(x186*(x187<=x188)));

	if (t12 != 21793530217168LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x193 = INT8_MAX;
	volatile int8_t x194 = INT8_MIN;
	int64_t x195 = 393LL;
	static int32_t x196 = INT32_MIN;
	int32_t t13 = 100;

	t13 = (x193>>(x194*(x195<=x196)));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x209 = INT64_MAX;
	static volatile int64_t x210 = INT64_MAX;
	static uint32_t x211 = UINT32_MAX;
	uint32_t x212 = 23984735U;
	volatile int64_t t14 = INT64_MAX;

	t14 = (x209>>(x210*(x211<=x212)));

	if (t14 != INT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x214 = -6;
	int16_t x215 = INT16_MAX;
	int32_t x216 = 0;
	int32_t t15 = -2;

	t15 = (x213>>(x214*(x215<=x216)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x225 = INT8_MAX;
	volatile int32_t x226 = INT32_MAX;
	int8_t x227 = -30;
	volatile int8_t x228 = INT8_MIN;

	t16 = (x225>>(x226*(x227<=x228)));

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x233 = INT8_MAX;
	int64_t x234 = INT64_MAX;
	int16_t x236 = INT16_MIN;
	static volatile int32_t t17 = 26908431;

	t17 = (x233>>(x234*(x235<=x236)));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x237 = 3U;
	static uint8_t x238 = 6U;
	static uint16_t x240 = 21494U;
	int32_t t18 = 15294408;

	t18 = (x237>>(x238*(x239<=x240)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x245 = INT32_MAX;
	int32_t x246 = 23;
	int32_t x248 = -1;
	static int32_t t19 = 63632;

	t19 = (x245>>(x246*(x247<=x248)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x265 = UINT64_MAX;
	uint32_t x267 = 56524312U;
	uint16_t x268 = UINT16_MAX;
	uint64_t t20 = UINT64_MAX;

	t20 = (x265>>(x266*(x267<=x268)));

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint16_t x269 = 1U;
	uint8_t x270 = 3U;
	int64_t x271 = INT64_MAX;
	int8_t x272 = -6;
	int32_t t21 = 61;

	t21 = (x269>>(x270*(x271<=x272)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x273 = INT16_MAX;
	uint8_t x274 = 32U;
	uint32_t x275 = 19250U;
	static uint8_t x276 = 1U;
	volatile int32_t t22 = 3853;

	t22 = (x273>>(x274*(x275<=x276)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x278 = INT8_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t23 = 0;

	t23 = (x277>>(x278*(x279<=x280)));

	if (t23 != 5057) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x317 = 22U;
	volatile uint64_t x318 = 95LLU;
	uint16_t x319 = 3153U;
	volatile int32_t x320 = -227;
	volatile int32_t t24 = 191;

	t24 = (x317>>(x318*(x319<=x320)));

	if (t24 != 22) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x321 = 705692716;
	int64_t x322 = INT64_MIN;
	int16_t x323 = 11;
	int32_t t25 = 3650365;

	t25 = (x321>>(x322*(x323<=x324)));

	if (t25 != 705692716) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x329 = UINT8_MAX;
	uint16_t x330 = 5U;
	int64_t x331 = -280553818085835597LL;
	int8_t x332 = INT8_MIN;

	t26 = (x329>>(x330*(x331<=x332)));

	if (t26 != 7) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x345 = 10406258397865LL;
	uint16_t x346 = 66U;
	int16_t x347 = -239;
	static uint64_t x348 = 118325110941897LLU;

	t27 = (x345>>(x346*(x347<=x348)));

	if (t27 != 10406258397865LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x349 = INT8_MAX;
	volatile int32_t t28 = -8;

	t28 = (x349>>(x350*(x351<=x352)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x353 = 30U;
	int8_t x354 = 0;
	int32_t x355 = INT32_MIN;
	uint32_t t29 = 5U;

	t29 = (x353>>(x354*(x355<=x356)));

	if (t29 != 30U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x377 = INT32_MAX;
	static uint64_t x378 = UINT64_MAX;
	int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MAX;
	int32_t t30 = INT32_MAX;

	t30 = (x377>>(x378*(x379<=x380)));

	if (t30 != INT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x381 = 2;
	volatile uint16_t x382 = UINT16_MAX;
	volatile uint32_t x383 = 7U;
	static volatile uint32_t x384 = 4U;
	volatile int32_t t31 = -61120;

	t31 = (x381>>(x382*(x383<=x384)));

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x385 = UINT64_MAX;
	volatile uint32_t x386 = 1070953U;
	uint64_t x387 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x385>>(x386*(x387<=x388)));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x393 = INT64_MAX;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MAX;
	int32_t x396 = -174985328;

	t33 = (x393>>(x394*(x395<=x396)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x401 = INT64_MAX;
	volatile uint16_t x403 = UINT16_MAX;
	volatile int32_t x404 = -1;
	int64_t t34 = INT64_MAX;

	t34 = (x401>>(x402*(x403<=x404)));

	if (t34 != INT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x409 = 6U;
	volatile int8_t x410 = INT8_MIN;
	static volatile int64_t x411 = INT64_MAX;
	volatile int32_t x412 = INT32_MIN;
	uint32_t t35 = 0U;

	t35 = (x409>>(x410*(x411<=x412)));

	if (t35 != 6U) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x421 = UINT16_MAX;
	volatile int16_t x422 = 0;
	int16_t x423 = INT16_MIN;
	static int8_t x424 = INT8_MAX;
	static volatile int32_t t36 = 377156;

	t36 = (x421>>(x422*(x423<=x424)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x441 = 6656;
	static uint8_t x442 = 12U;
	volatile int16_t x443 = INT16_MAX;
	int64_t x444 = -1LL;
	volatile int32_t t37 = -4;

	t37 = (x441>>(x442*(x443<=x444)));

	if (t37 != 6656) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x497 = INT32_MAX;
	int64_t x498 = INT64_MIN;
	volatile int16_t x499 = INT16_MAX;
	int32_t x500 = -1;
	int32_t t38 = INT32_MAX;

	t38 = (x497>>(x498*(x499<=x500)));

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x505 = INT8_MAX;
	int64_t x506 = INT64_MIN;
	volatile uint16_t x507 = 28326U;
	int64_t x508 = INT64_MIN;
	int32_t t39 = -2400;

	t39 = (x505>>(x506*(x507<=x508)));

	if (t39 != 127) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x546 = 12;
	uint16_t x547 = 27U;
	int32_t t40 = 651063;

	t40 = (x545>>(x546*(x547<=x548)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x589 = 9744886LLU;
	static uint8_t x590 = 2U;
	volatile int16_t x591 = INT16_MIN;
	uint8_t x592 = UINT8_MAX;
	uint64_t t41 = 1795419074LLU;

	t41 = (x589>>(x590*(x591<=x592)));

	if (t41 != 2436221LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x593 = 6U;
	uint16_t x596 = 65U;
	volatile uint32_t t42 = 41611441U;

	t42 = (x593>>(x594*(x595<=x596)));

	if (t42 != 6U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x609 = 4U;
	int16_t x610 = INT16_MAX;
	static volatile int16_t x611 = 1;
	uint8_t x612 = 0U;
	volatile int32_t t43 = -13335032;

	t43 = (x609>>(x610*(x611<=x612)));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x613 = INT8_MAX;
	volatile uint16_t x614 = 14U;
	static int64_t x615 = -79771675699LL;
	int16_t x616 = -7599;
	static int32_t t44 = 15672;

	t44 = (x613>>(x614*(x615<=x616)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x630 = 3;
	static int64_t x631 = -1LL;
	int16_t x632 = INT16_MIN;
	volatile int32_t t45 = -922827298;

	t45 = (x629>>(x630*(x631<=x632)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x641 = 19500U;
	uint8_t x643 = 41U;
	static volatile int8_t x644 = INT8_MIN;

	t46 = (x641>>(x642*(x643<=x644)));

	if (t46 != 19500) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x653 = 7435806145LL;
	static int32_t x654 = 22;
	static int16_t x656 = -1;

	t47 = (x653>>(x654*(x655<=x656)));

	if (t47 != 7435806145LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x673 = UINT8_MAX;
	int32_t x674 = INT32_MAX;
	int32_t x675 = INT32_MIN;
	int64_t x676 = INT64_MIN;
	static int32_t t48 = -7;

	t48 = (x673>>(x674*(x675<=x676)));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x697 = UINT64_MAX;
	int16_t x698 = 1617;
	uint16_t x699 = UINT16_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x697>>(x698*(x699<=x700)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x705 = 208464821291LL;
	uint8_t x706 = 7U;
	int32_t x707 = -533440477;
	int64_t x708 = 67201996129642LL;
	int64_t t50 = 4354439867422LL;

	t50 = (x705>>(x706*(x707<=x708)));

	if (t50 != 1628631416LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x733 = 42;
	int32_t x734 = INT32_MIN;
	uint16_t x735 = 7U;
	int64_t x736 = INT64_MIN;
	int32_t t51 = -440276;

	t51 = (x733>>(x734*(x735<=x736)));

	if (t51 != 42) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x737 = 15LLU;
	volatile uint8_t x738 = 31U;
	uint16_t x739 = 1U;
	int64_t x740 = 59638178911298095LL;
	uint64_t t52 = 319001049566731784LLU;

	t52 = (x737>>(x738*(x739<=x740)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x741 = 33215573U;
	volatile uint32_t x742 = UINT32_MAX;
	uint64_t x744 = 1752LLU;
	uint32_t t53 = 11713U;

	t53 = (x741>>(x742*(x743<=x744)));

	if (t53 != 33215573U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint8_t x749 = 5U;
	int8_t x751 = 30;
	int8_t x752 = -50;
	volatile int32_t t54 = 0;

	t54 = (x749>>(x750*(x751<=x752)));

	if (t54 != 5) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x761 = 246;
	uint32_t x763 = UINT32_MAX;
	volatile uint16_t x764 = 2U;
	int32_t t55 = -15671785;

	t55 = (x761>>(x762*(x763<=x764)));

	if (t55 != 246) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x777 = INT32_MAX;
	int64_t x778 = INT64_MAX;
	int16_t x779 = INT16_MAX;
	uint8_t x780 = 17U;
	int32_t t56 = INT32_MAX;

	t56 = (x777>>(x778*(x779<=x780)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x781 = INT32_MAX;
	volatile int8_t x782 = INT8_MIN;
	volatile uint16_t x783 = UINT16_MAX;
	int16_t x784 = INT16_MIN;
	static volatile int32_t t57 = INT32_MAX;

	t57 = (x781>>(x782*(x783<=x784)));

	if (t57 != INT32_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x789 = 30U;
	static volatile uint32_t x791 = UINT32_MAX;
	uint16_t x792 = UINT16_MAX;
	volatile int32_t t58 = 0;

	t58 = (x789>>(x790*(x791<=x792)));

	if (t58 != 30) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x793 = INT16_MAX;
	uint8_t x794 = 0U;
	static uint16_t x795 = 3U;
	static int32_t x796 = -436;
	int32_t t59 = 7950935;

	t59 = (x793>>(x794*(x795<=x796)));

	if (t59 != 32767) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x801 = INT8_MAX;
	static uint8_t x803 = 3U;
	int64_t x804 = -1LL;

	t60 = (x801>>(x802*(x803<=x804)));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x805 = INT64_MAX;
	int32_t x806 = INT32_MIN;
	int32_t x807 = -1;
	int8_t x808 = INT8_MIN;
	int64_t t61 = INT64_MAX;

	t61 = (x805>>(x806*(x807<=x808)));

	if (t61 != INT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x821 = UINT32_MAX;
	int64_t x822 = INT64_MAX;
	volatile int16_t x824 = -1;

	t62 = (x821>>(x822*(x823<=x824)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x862 = INT32_MAX;
	volatile int64_t x863 = -1LL;
	int32_t x864 = INT32_MIN;
	int32_t t63 = -8355068;

	t63 = (x861>>(x862*(x863<=x864)));

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x866 = -4;
	int32_t x867 = 2914;
	static int32_t t64 = -1969302;

	t64 = (x865>>(x866*(x867<=x868)));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x873 = 10LLU;
	static volatile uint64_t x874 = 11687922LLU;
	int16_t x876 = INT16_MIN;

	t65 = (x873>>(x874*(x875<=x876)));

	if (t65 != 10LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x877 = 7;
	static int32_t x878 = INT32_MIN;
	uint64_t x879 = UINT64_MAX;
	int16_t x880 = INT16_MAX;
	volatile int32_t t66 = 0;

	t66 = (x877>>(x878*(x879<=x880)));

	if (t66 != 7) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x885 = 7U;
	uint16_t x886 = 52U;
	int32_t x887 = -1;
	uint64_t x888 = 273598658135642LLU;
	volatile int32_t t67 = 22426879;

	t67 = (x885>>(x886*(x887<=x888)));

	if (t67 != 7) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x889 = INT64_MAX;
	volatile uint16_t x890 = 226U;
	int16_t x891 = INT16_MAX;
	int8_t x892 = INT8_MIN;
	static volatile int64_t t68 = INT64_MAX;

	t68 = (x889>>(x890*(x891<=x892)));

	if (t68 != INT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x893 = 63981186LLU;
	int64_t x894 = -1LL;
	int32_t x896 = INT32_MIN;
	uint64_t t69 = 1413569585423LLU;

	t69 = (x893>>(x894*(x895<=x896)));

	if (t69 != 63981186LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x909 = UINT16_MAX;
	volatile uint16_t x910 = 87U;
	uint64_t x911 = 1170536113797417LLU;
	static uint32_t x912 = UINT32_MAX;
	volatile int32_t t70 = 1129224;

	t70 = (x909>>(x910*(x911<=x912)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x926 = 110014;
	uint16_t x927 = 11423U;
	int64_t x928 = INT64_MIN;
	int32_t t71 = 320;

	t71 = (x925>>(x926*(x927<=x928)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x929 = 6U;
	static int16_t x932 = -81;
	int32_t t72 = 16752491;

	t72 = (x929>>(x930*(x931<=x932)));

	if (t72 != 6) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x941 = UINT8_MAX;
	static volatile uint32_t x943 = UINT32_MAX;
	int64_t x944 = 939LL;
	int32_t t73 = 143101;

	t73 = (x941>>(x942*(x943<=x944)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x949 = INT16_MAX;
	int32_t x951 = 1;
	volatile int16_t x952 = INT16_MIN;
	static volatile int32_t t74 = 0;

	t74 = (x949>>(x950*(x951<=x952)));

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x957 = INT64_MAX;
	uint64_t x958 = 325417857006LLU;
	uint64_t x960 = 412630LLU;
	volatile int64_t t75 = INT64_MAX;

	t75 = (x957>>(x958*(x959<=x960)));

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x963 = INT64_MAX;
	int8_t x964 = -15;
	int32_t t76 = 12438;

	t76 = (x961>>(x962*(x963<=x964)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x965 = 1367U;
	static int8_t x968 = INT8_MIN;
	static uint32_t t77 = 103U;

	t77 = (x965>>(x966*(x967<=x968)));

	if (t77 != 1367U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x969 = UINT16_MAX;
	int32_t x970 = INT32_MIN;
	volatile uint32_t x972 = 1837549881U;
	static volatile int32_t t78 = -18;

	t78 = (x969>>(x970*(x971<=x972)));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x982 = 4;

	t79 = (x981>>(x982*(x983<=x984)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x985 = INT8_MAX;
	int16_t x986 = INT16_MIN;
	int8_t x987 = INT8_MIN;
	static uint64_t x988 = 4199539530378758LLU;
	int32_t t80 = 201347304;

	t80 = (x985>>(x986*(x987<=x988)));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x993 = 15611803U;
	int32_t x994 = INT32_MAX;
	volatile int16_t x995 = -4835;
	volatile uint32_t x996 = 3U;

	t81 = (x993>>(x994*(x995<=x996)));

	if (t81 != 15611803U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x997 = UINT8_MAX;
	int64_t x998 = INT64_MIN;
	static int8_t x999 = INT8_MIN;
	uint64_t x1000 = 60805271931687LLU;
	int32_t t82 = -15702;

	t82 = (x997>>(x998*(x999<=x1000)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x1009 = UINT16_MAX;
	static int32_t t83 = 2458375;

	t83 = (x1009>>(x1010*(x1011<=x1012)));

	if (t83 != 1023) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x1037 = INT16_MAX;
	int64_t x1038 = INT64_MAX;
	static int16_t x1039 = -1;
	int32_t t84 = 0;

	t84 = (x1037>>(x1038*(x1039<=x1040)));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x1049 = 1192738809779LLU;
	int8_t x1050 = INT8_MIN;
	static int16_t x1052 = INT16_MIN;

	t85 = (x1049>>(x1050*(x1051<=x1052)));

	if (t85 != 1192738809779LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x1085 = UINT8_MAX;
	volatile int64_t x1087 = INT64_MIN;
	volatile uint64_t x1088 = 5753499LLU;
	int32_t t86 = -3377837;

	t86 = (x1085>>(x1086*(x1087<=x1088)));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x1149 = 5U;
	int32_t x1150 = -1;
	int8_t x1152 = INT8_MAX;

	t87 = (x1149>>(x1150*(x1151<=x1152)));

	if (t87 != 5U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x1153 = UINT32_MAX;
	static int64_t x1154 = INT64_MIN;
	int64_t x1156 = -1LL;
	volatile uint32_t t88 = UINT32_MAX;

	t88 = (x1153>>(x1154*(x1155<=x1156)));

	if (t88 != UINT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x1169 = 14U;
	static uint32_t x1171 = 353447943U;

	t89 = (x1169>>(x1170*(x1171<=x1172)));

	if (t89 != 14) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x1197 = INT64_MAX;
	int16_t x1198 = INT16_MIN;
	static uint64_t x1199 = UINT64_MAX;
	int16_t x1200 = INT16_MIN;
	int64_t t90 = INT64_MAX;

	t90 = (x1197>>(x1198*(x1199<=x1200)));

	if (t90 != INT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x1225 = UINT64_MAX;
	volatile int32_t x1227 = INT32_MIN;
	int64_t x1228 = INT64_MIN;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x1225>>(x1226*(x1227<=x1228)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x1241 = 102;
	int32_t x1242 = INT32_MAX;
	int8_t x1244 = -1;
	int32_t t92 = 427165;

	t92 = (x1241>>(x1242*(x1243<=x1244)));

	if (t92 != 102) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x1246 = UINT32_MAX;
	static uint16_t x1247 = 155U;
	uint32_t t93 = 399U;

	t93 = (x1245>>(x1246*(x1247<=x1248)));

	if (t93 != 58U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x1249 = INT64_MAX;
	uint32_t x1250 = 16U;
	int16_t x1252 = INT16_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x1249>>(x1250*(x1251<=x1252)));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x1253 = 9823398368594048LL;
	int64_t x1254 = INT64_MIN;
	volatile uint16_t x1255 = UINT16_MAX;
	volatile int64_t t95 = 5701856LL;

	t95 = (x1253>>(x1254*(x1255<=x1256)));

	if (t95 != 9823398368594048LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x1265 = 118486337LLU;
	uint32_t x1266 = 1821U;
	int32_t x1268 = -1;
	volatile uint64_t t96 = 3869656719LLU;

	t96 = (x1265>>(x1266*(x1267<=x1268)));

	if (t96 != 118486337LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x1275 = -1LL;
	int64_t x1276 = -1LL;
	int32_t t97 = 26082;

	t97 = (x1273>>(x1274*(x1275<=x1276)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x1287 = INT8_MAX;
	int32_t x1288 = INT32_MIN;
	int64_t t98 = INT64_MAX;

	t98 = (x1285>>(x1286*(x1287<=x1288)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x1290 = INT16_MAX;
	static int16_t x1291 = INT16_MIN;
	uint32_t x1292 = 2051693656U;
	volatile int32_t t99 = -1;

	t99 = (x1289>>(x1290*(x1291<=x1292)));

	if (t99 != 54) { NG(); } else { ; }
	
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

