#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x12 = UINT32_MAX;
static volatile int64_t t1 = 32917475LL;
uint16_t x13 = 88U;
static int16_t x17 = -1;
static int16_t x18 = INT16_MIN;
volatile int8_t x19 = -1;
static int8_t x24 = INT8_MAX;
volatile int32_t t4 = -24;
int32_t x34 = INT32_MAX;
uint16_t x36 = UINT16_MAX;
int32_t x40 = INT32_MIN;
volatile int64_t t7 = -801929019LL;
static int16_t x51 = INT16_MIN;
uint32_t x54 = 608729U;
static volatile uint32_t x58 = 213U;
volatile uint64_t t14 = 539610384791136488LLU;
int32_t t15 = -15229877;
int32_t x81 = INT32_MIN;
int64_t x85 = -1LL;
static uint16_t x86 = UINT16_MAX;
volatile uint64_t t17 = 6368364690713172631LLU;
uint32_t x92 = 553028U;
int64_t x95 = 5180110135562LL;
int8_t x103 = -1;
uint16_t x104 = UINT16_MAX;
volatile uint16_t x114 = 61U;
static volatile int64_t x117 = INT64_MIN;
uint64_t t27 = 5344903746706051896LLU;
volatile uint32_t x132 = 133U;
int64_t x146 = INT64_MAX;
volatile int8_t x158 = 0;
int64_t x159 = -1LL;
int32_t x162 = 7612300;
int32_t x171 = INT32_MIN;
volatile uint64_t t35 = 6LLU;
uint32_t x182 = 633U;
volatile uint32_t x189 = UINT32_MAX;
static uint16_t x190 = UINT16_MAX;
int16_t x218 = INT16_MIN;
int16_t x219 = 1;
int8_t x225 = INT8_MIN;
static uint16_t x227 = 21U;
volatile int32_t t42 = 2826;
static uint8_t x230 = UINT8_MAX;
int8_t x231 = INT8_MIN;
uint32_t x239 = 5U;
int32_t x249 = INT32_MIN;
int8_t x264 = -1;
uint32_t t48 = 0U;
volatile int16_t x269 = -1;
volatile int8_t x272 = INT8_MIN;
volatile int32_t t49 = -37678110;
uint64_t x273 = UINT64_MAX;
uint64_t x279 = 1151LLU;
static int16_t x285 = INT16_MIN;
static uint8_t x288 = 7U;
volatile uint64_t x296 = 7248LLU;
volatile int32_t x298 = -3492640;
int16_t x300 = INT16_MIN;
int8_t x308 = 1;
static volatile uint64_t t58 = 3631075167471098LLU;
volatile uint8_t x320 = 46U;
volatile int64_t t60 = -10005450LL;
int32_t x334 = INT32_MAX;
uint64_t x341 = 251969LLU;
int16_t x347 = -6192;
volatile int16_t x348 = INT16_MIN;
volatile int32_t t64 = 71307;
int16_t x353 = INT16_MAX;
uint32_t x357 = 882195U;
uint8_t x382 = UINT8_MAX;
volatile int8_t x390 = INT8_MAX;
int32_t t71 = -1067803;
uint8_t x402 = 5U;
uint64_t x410 = 1943LLU;
int16_t x415 = INT16_MIN;
int8_t x416 = INT8_MIN;
uint16_t x417 = UINT16_MAX;
int32_t x420 = -1;
volatile uint64_t t77 = 52547220689LLU;
int32_t x422 = INT32_MIN;
int16_t x425 = 2683;
volatile uint64_t t80 = 2958118LLU;
static int64_t x438 = INT64_MIN;
volatile uint32_t x445 = UINT32_MAX;
static uint32_t x458 = UINT32_MAX;
volatile int64_t x460 = INT64_MAX;
volatile int32_t x461 = INT32_MIN;
uint8_t x463 = 39U;
int16_t x464 = INT16_MIN;
int8_t x466 = INT8_MAX;
uint32_t t92 = 2U;
int64_t x482 = 388LL;
uint8_t x485 = UINT8_MAX;
int32_t x488 = INT32_MIN;
static uint16_t x489 = UINT16_MAX;
volatile int8_t x496 = -16;
static uint64_t t98 = 49963168842LLU;
int64_t x506 = 107535589828LL;


void f0(void) {
	uint8_t x5 = 109U;
	uint16_t x6 = 24361U;
	volatile int16_t x7 = -1;
	volatile int16_t x8 = INT16_MIN;
	volatile int32_t t0 = 0;

	t0 = (x5^((x6+x7)-x8));

	if (t0 != 57157) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = -27;
	int64_t x10 = -1LL;
	int8_t x11 = INT8_MIN;

	t1 = (x9^((x10+x11)-x12));

	if (t1 != 4294967397LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x14 = 12;
	int64_t x15 = -1LL;
	volatile int32_t x16 = -116;
	volatile int64_t t2 = 120273578LL;

	t2 = (x13^((x14+x15)-x16));

	if (t2 != 39LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x20 = 527937900U;
	uint32_t t3 = 2355143U;

	t3 = (x17^((x18+x19)-x20));

	if (t3 != 527970668U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	volatile int16_t x22 = -1003;
	volatile int32_t x23 = INT32_MAX;

	t4 = (x21^((x22+x23)-x24));

	if (t4 != -2147452011) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = -1LL;
	int64_t x26 = -56690LL;
	uint32_t x27 = 33687658U;
	int16_t x28 = INT16_MIN;
	volatile int64_t t5 = -192006667236177LL;

	t5 = (x25^((x26+x27)-x28));

	if (t5 != -33663737LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -27516759;
	volatile int64_t x35 = INT64_MIN;
	volatile int64_t t6 = 270880954604436LL;

	t6 = (x33^((x34+x35)-x36));

	if (t6 != 9223372034734760105LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	int64_t x38 = 827LL;
	static int8_t x39 = INT8_MIN;

	t7 = (x37^((x38+x39)-x40));

	if (t7 != -2147484357LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x49 = -1587;
	uint64_t x50 = UINT64_MAX;
	static int16_t x52 = -1;
	uint64_t t8 = 2488017179LLU;

	t8 = (x49^((x50+x51)-x52));

	if (t8 != 31181LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x53 = INT32_MAX;
	static int16_t x55 = INT16_MAX;
	volatile int16_t x56 = -1;
	uint32_t t9 = 364783U;

	t9 = (x53^((x54+x55)-x56));

	if (t9 != 2146842150U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x57 = -1;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;
	uint32_t t10 = 1976143U;

	t10 = (x57^((x58+x59)-x60));

	if (t10 != 2147516202U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x61 = -9;
	volatile int64_t x62 = -1LL;
	int8_t x63 = INT8_MIN;
	int32_t x64 = -1;
	int64_t t11 = -46208134860937LL;

	t11 = (x61^((x62+x63)-x64));

	if (t11 != 119LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = INT64_MIN;
	int8_t x66 = -9;
	static volatile uint64_t x67 = UINT64_MAX;
	uint16_t x68 = 3777U;
	volatile uint64_t t12 = 56915548LLU;

	t12 = (x65^((x66+x67)-x68));

	if (t12 != 9223372036854772021LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	volatile int32_t x70 = INT32_MIN;
	uint8_t x71 = 1U;
	static volatile int16_t x72 = INT16_MIN;
	static int32_t t13 = 484;

	t13 = (x69^((x70+x71)-x72));

	if (t13 != -32770) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x73 = INT8_MIN;
	static uint16_t x74 = 22228U;
	static uint64_t x75 = 1520480LLU;
	uint64_t x76 = UINT64_MAX;

	t14 = (x73^((x74+x75)-x76));

	if (t14 != 18446744073708008885LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x77 = UINT8_MAX;
	uint16_t x78 = UINT16_MAX;
	int32_t x79 = -134;
	int32_t x80 = INT32_MAX;

	t15 = (x77^((x78+x79)-x80));

	if (t15 != -2147418235) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MAX;
	int32_t x84 = -1;
	static int32_t t16 = -2691;

	t16 = (x81^((x82+x83)-x84));

	if (t16 != -2147451008) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x87 = UINT64_MAX;
	uint8_t x88 = UINT8_MAX;

	t17 = (x85^((x86+x87)-x88));

	if (t17 != 18446744073709486336LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x89 = UINT32_MAX;
	static int32_t x90 = INT32_MAX;
	volatile int8_t x91 = INT8_MIN;
	uint32_t t18 = 247940U;

	t18 = (x89^((x90+x91)-x92));

	if (t18 != 2148036804U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x93 = INT64_MAX;
	uint64_t x94 = UINT64_MAX;
	int8_t x96 = INT8_MIN;
	uint64_t t19 = 506LLU;

	t19 = (x93^((x94+x95)-x96));

	if (t19 != 9223366856744640118LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x97 = -1123;
	static int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MAX;
	volatile int16_t x100 = INT16_MAX;
	static volatile int64_t t20 = -529382142491645LL;

	t20 = (x97^((x98+x99)-x100));

	if (t20 != -9223372034707260515LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x101 = -2114LL;
	int8_t x102 = -12;
	int64_t t21 = 92857105LL;

	t21 = (x101^((x102+x103)-x104));

	if (t21 != 67658LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = UINT16_MAX;
	uint64_t x106 = 2373529455502LLU;
	int16_t x107 = -1;
	uint64_t x108 = 23154LLU;
	volatile uint64_t t22 = 12528LLU;

	t22 = (x105^((x106+x107)-x108));

	if (t22 != 2373529374436LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = UINT16_MAX;
	int32_t x110 = INT32_MAX;
	volatile uint32_t x111 = 21U;
	uint64_t x112 = 3200796696986108LLU;
	volatile uint64_t t23 = 3421907LLU;

	t23 = (x109^((x110+x111)-x112));

	if (t23 != 18443543279160017383LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x113 = INT32_MAX;
	static int16_t x115 = -31;
	int16_t x116 = INT16_MIN;
	int32_t t24 = 1;

	t24 = (x113^((x114+x115)-x116));

	if (t24 != 2147450849) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = -1;
	int16_t x119 = INT16_MAX;
	static int16_t x120 = INT16_MAX;
	int64_t t25 = INT64_MAX;

	t25 = (x117^((x118+x119)-x120));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x121 = -1;
	volatile int64_t x122 = -1LL;
	int32_t x123 = -60;
	int64_t x124 = -437446394044767351LL;
	int64_t t26 = 182264370LL;

	t26 = (x121^((x122+x123)-x124));

	if (t26 != -437446394044767291LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x125 = 29834546LLU;
	int32_t x126 = INT32_MAX;
	uint64_t x127 = UINT64_MAX;
	static uint64_t x128 = 1375771826674148855LLU;

	t27 = (x125^((x126+x127)-x128));

	if (t27 != 17070972249179154229LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x129 = UINT8_MAX;
	int8_t x130 = INT8_MAX;
	int32_t x131 = 29;
	volatile uint32_t t28 = 50U;

	t28 = (x129^((x130+x131)-x132));

	if (t28 != 232U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x138 = INT16_MAX;
	volatile int64_t x139 = 976279LL;
	uint16_t x140 = UINT16_MAX;
	volatile uint64_t t29 = 371941347LLU;

	t29 = (x137^((x138+x139)-x140));

	if (t29 != 18446744073708608104LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x145 = -2145441;
	uint64_t x147 = 10582LLU;
	uint32_t x148 = 13499U;
	volatile uint64_t t30 = 34688234LLU;

	t30 = (x145^((x146+x147)-x148));

	if (t30 != 9223372036856920005LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	int8_t x150 = -1;
	static uint8_t x151 = 8U;
	uint8_t x152 = 13U;
	volatile int32_t t31 = 1;

	t31 = (x149^((x150+x151)-x152));

	if (t31 != 122) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 0;
	int16_t x160 = INT16_MIN;
	int64_t t32 = 330699LL;

	t32 = (x157^((x158+x159)-x160));

	if (t32 != 32767LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x161 = INT8_MAX;
	int8_t x163 = INT8_MIN;
	static int8_t x164 = -2;
	volatile int32_t t33 = -13318735;

	t33 = (x161^((x162+x163)-x164));

	if (t33 != 7612273) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = 3U;
	int32_t x166 = INT32_MIN;
	uint32_t x167 = 96941190U;
	volatile int8_t x168 = -1;
	volatile uint32_t t34 = 2670041U;

	t34 = (x165^((x166+x167)-x168));

	if (t34 != 2244424836U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = INT16_MAX;
	volatile uint64_t x170 = 6972468LLU;
	uint8_t x172 = UINT8_MAX;

	t35 = (x169^((x170+x171)-x172));

	if (t35 != 18446744071569022154LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x177 = 17767U;
	static volatile int64_t x178 = INT64_MIN;
	volatile uint64_t x179 = 72728187LLU;
	int8_t x180 = INT8_MIN;
	volatile uint64_t t36 = 221LLU;

	t36 = (x177^((x178+x179)-x180));

	if (t36 != 9223372036927519644LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = INT32_MIN;
	volatile int64_t x183 = -67614030593254484LL;
	static volatile int32_t x184 = INT32_MAX;
	static int64_t t37 = 1205870315288250LL;

	t37 = (x181^((x182+x183)-x184));

	if (t37 != 67614032628555302LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x185 = -468417508;
	static uint16_t x186 = 5273U;
	int16_t x187 = -1;
	int8_t x188 = INT8_MIN;
	int32_t t38 = -500;

	t38 = (x185^((x186+x187)-x188));

	if (t38 != -468414204) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x191 = -1;
	int8_t x192 = INT8_MIN;
	volatile uint32_t t39 = 14U;

	t39 = (x189^((x190+x191)-x192));

	if (t39 != 4294901633U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x209 = 783U;
	static int64_t x210 = INT64_MIN;
	int64_t x211 = INT64_MAX;
	int16_t x212 = INT16_MIN;
	volatile int64_t t40 = -192616LL;

	t40 = (x209^((x210+x211)-x212));

	if (t40 != 31984LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x217 = 138LLU;
	int16_t x220 = -1;
	volatile uint64_t t41 = 1LLU;

	t41 = (x217^((x218+x219)-x220));

	if (t41 != 18446744073709518984LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x226 = -14041;
	int32_t x228 = -1;

	t42 = (x225^((x226+x227)-x228));

	if (t42 != 14013) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x229 = INT16_MAX;
	int32_t x232 = 9711690;
	static volatile int32_t t43 = -188647358;

	t43 = (x229^((x230+x231)-x232));

	if (t43 != -9719862) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x237 = INT32_MIN;
	uint16_t x238 = UINT16_MAX;
	int8_t x240 = -1;
	static uint32_t t44 = 928391U;

	t44 = (x237^((x238+x239)-x240));

	if (t44 != 2147549189U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x241 = 25;
	volatile int8_t x242 = 10;
	int8_t x243 = INT8_MAX;
	static volatile int64_t x244 = -6311958914LL;
	int64_t t45 = -1901923385043LL;

	t45 = (x241^((x242+x243)-x244));

	if (t45 != 6311959058LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x245 = INT32_MIN;
	int16_t x246 = -1;
	volatile int64_t x247 = -17471423458LL;
	int32_t x248 = INT32_MAX;
	volatile int64_t t46 = -59976406478LL;

	t46 = (x245^((x246+x247)-x248));

	if (t46 != 21183282206LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x250 = 1473U;
	int32_t x251 = -1;
	static int64_t x252 = INT64_MAX;
	volatile int64_t t47 = 392LL;

	t47 = (x249^((x250+x251)-x252));

	if (t47 != 9223372034707293633LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x261 = 6U;
	static int16_t x262 = INT16_MIN;
	uint32_t x263 = 7U;

	t48 = (x261^((x262+x263)-x264));

	if (t48 != 4294934542U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x270 = INT8_MIN;
	int8_t x271 = -60;

	t49 = (x269^((x270+x271)-x272));

	if (t49 != 59) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x274 = 7499654U;
	uint32_t x275 = 394206U;
	uint64_t x276 = 48785085833LLU;
	volatile uint64_t t50 = 14341441515976LLU;

	t50 = (x273^((x274+x275)-x276));

	if (t50 != 48777191972LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x277 = INT32_MIN;
	volatile int8_t x278 = -1;
	static int16_t x280 = INT16_MAX;
	volatile uint64_t t51 = 0LLU;

	t51 = (x277^((x278+x279)-x280));

	if (t51 != 2147452031LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x281 = 0U;
	uint16_t x282 = 1U;
	int64_t x283 = -264953780370858740LL;
	int64_t x284 = INT64_MIN;
	int64_t t52 = 1081190LL;

	t52 = (x281^((x282+x283)-x284));

	if (t52 != 8958418256483917069LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x286 = -981168;
	static volatile uint32_t x287 = UINT32_MAX;
	volatile uint32_t t53 = 3727174U;

	t53 = (x285^((x286+x287)-x288));

	if (t53 != 952136U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x289 = -1;
	int16_t x290 = 0;
	static volatile uint8_t x291 = UINT8_MAX;
	static int16_t x292 = 0;
	volatile int32_t t54 = 9728;

	t54 = (x289^((x290+x291)-x292));

	if (t54 != -256) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x293 = 15U;
	uint16_t x294 = UINT16_MAX;
	int16_t x295 = INT16_MAX;
	uint64_t t55 = 4107502963472072LLU;

	t55 = (x293^((x294+x295)-x296));

	if (t55 != 91041LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x297 = 2U;
	uint64_t x299 = 507307777634836LLU;
	volatile uint64_t t56 = 132LLU;

	t56 = (x297^((x298+x299)-x300));

	if (t56 != 507307774174966LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x305 = -1;
	int64_t x306 = -520926LL;
	volatile int32_t x307 = -700960602;
	volatile int64_t t57 = 1132170544015250LL;

	t57 = (x305^((x306+x307)-x308));

	if (t57 != 701481528LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x309 = INT64_MAX;
	static int64_t x310 = 23478588804895LL;
	uint64_t x311 = 6510107889500423LLU;
	int16_t x312 = -1;

	t58 = (x309^((x310+x311)-x312));

	if (t58 != 9216838450376470488LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x313 = -208109090;
	static int32_t x314 = 0;
	int32_t x315 = -54519;
	volatile uint64_t x316 = UINT64_MAX;
	static uint64_t t59 = 233409195LLU;

	t59 = (x313^((x314+x315)-x316));

	if (t59 != 208120532LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x317 = INT16_MIN;
	int32_t x318 = 6981;
	static int64_t x319 = INT64_MIN;

	t60 = (x317^((x318+x319)-x320));

	if (t60 != 9223372036854749975LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x333 = -1;
	int16_t x335 = INT16_MIN;
	uint32_t x336 = 888850418U;
	static volatile uint32_t t61 = 4776U;

	t61 = (x333^((x334+x335)-x336));

	if (t61 != 3036366834U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x337 = INT32_MAX;
	static uint64_t x338 = UINT64_MAX;
	uint8_t x339 = 18U;
	volatile int16_t x340 = 7788;
	uint64_t t62 = 528596LLU;

	t62 = (x337^((x338+x339)-x340));

	if (t62 != 18446744071562075738LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x342 = 382846U;
	uint16_t x343 = 2745U;
	int64_t x344 = INT64_MAX;
	volatile uint64_t t63 = 5357816LLU;

	t63 = (x341^((x342+x343)-x344));

	if (t63 != 9223372036855183993LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = -1;

	t64 = (x345^((x346+x347)-x348));

	if (t64 != -26545) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x354 = INT16_MIN;
	uint64_t x355 = 2177529017126958LLU;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t65 = 83282574LLU;

	t65 = (x353^((x354+x355)-x356));

	if (t65 != 2177529017085777LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x358 = INT16_MIN;
	volatile uint64_t x359 = 9341095264LLU;
	volatile int32_t x360 = 2374;
	volatile uint64_t t66 = 551565LLU;

	t66 = (x357^((x358+x359)-x360));

	if (t66 != 9341252105LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x365 = -1;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MIN;
	volatile uint8_t x368 = 12U;
	volatile uint32_t t67 = 2U;

	t67 = (x365^((x366+x367)-x368));

	if (t67 != 2147483660U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x373 = 19U;
	int16_t x374 = -1;
	volatile int64_t x375 = -1LL;
	uint16_t x376 = UINT16_MAX;
	int64_t t68 = 11866743360191485LL;

	t68 = (x373^((x374+x375)-x376));

	if (t68 != -65556LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x377 = -1;
	int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MIN;
	volatile int32_t x380 = -1;
	int32_t t69 = -66;

	t69 = (x377^((x378+x379)-x380));

	if (t69 != 32894) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x381 = UINT8_MAX;
	volatile int32_t x383 = INT32_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t70 = -31947;

	t70 = (x381^((x382+x383)-x384));

	if (t70 != -2147450880) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x389 = INT32_MIN;
	int16_t x391 = INT16_MIN;
	volatile int16_t x392 = INT16_MAX;

	t71 = (x389^((x390+x391)-x392));

	if (t71 != 2147418240) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x393 = 9878392U;
	uint64_t x394 = 180839946160LLU;
	uint8_t x395 = UINT8_MAX;
	int8_t x396 = 1;
	volatile uint64_t t72 = 66901LLU;

	t72 = (x393^((x394+x395)-x396));

	if (t72 != 180832183254LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MAX;
	uint32_t x398 = 127237U;
	int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	volatile uint32_t t73 = 4306U;

	t73 = (x397^((x398+x399)-x400));

	if (t73 != 2147585914U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x401 = -3336;
	volatile int64_t x403 = 2830LL;
	uint64_t x404 = 4223439693510LLU;
	volatile uint64_t t74 = 4187379285LLU;

	t74 = (x401^((x402+x403)-x404));

	if (t74 != 4223439689397LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = -1LL;
	int32_t x411 = 6;
	volatile uint8_t x412 = 41U;
	volatile uint64_t t75 = 81757992995LLU;

	t75 = (x409^((x410+x411)-x412));

	if (t75 != 18446744073709549707LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x413 = 60U;
	volatile int64_t x414 = INT64_MAX;
	static int64_t t76 = -2647371037LL;

	t76 = (x413^((x414+x415)-x416));

	if (t76 != 9223372036854743107LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x418 = 102U;
	uint64_t x419 = 3919860LLU;

	t77 = (x417^((x418+x419)-x420));

	if (t77 != 3878820LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x421 = 2U;
	int32_t x423 = 0;
	int64_t x424 = INT64_MIN;
	int64_t t78 = -41LL;

	t78 = (x421^((x422+x423)-x424));

	if (t78 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x426 = 23964;
	uint16_t x427 = 643U;
	int8_t x428 = INT8_MIN;
	volatile int32_t t79 = -3655306;

	t79 = (x425^((x426+x427)-x428));

	if (t79 != 27364) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x429 = 12U;
	int64_t x430 = 43891208158LL;
	static int8_t x431 = -9;
	uint64_t x432 = UINT64_MAX;

	t80 = (x429^((x430+x431)-x432));

	if (t80 != 43891208154LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x433 = INT64_MIN;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MIN;
	volatile int16_t x436 = INT16_MIN;
	volatile int64_t t81 = -903268LL;

	t81 = (x433^((x434+x435)-x436));

	if (t81 != -9223372036854742913LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x437 = INT64_MAX;
	int32_t x439 = 258482104;
	int64_t x440 = 11LL;
	int64_t t82 = 6428584371264LL;

	t82 = (x437^((x438+x439)-x440));

	if (t82 != -258482094LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x441 = 6U;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MAX;
	volatile int8_t x444 = INT8_MAX;
	int32_t t83 = -5;

	t83 = (x441^((x442+x443)-x444));

	if (t83 != -32762) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x446 = 230863287LLU;
	static volatile int32_t x447 = INT32_MAX;
	int16_t x448 = 3454;
	static uint64_t t84 = 25173111253511LLU;

	t84 = (x445^((x446+x447)-x448));

	if (t84 != 1916623815LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x449 = INT8_MIN;
	volatile int8_t x450 = 1;
	uint32_t x451 = UINT32_MAX;
	uint16_t x452 = UINT16_MAX;
	volatile uint32_t t85 = 391858U;

	t85 = (x449^((x450+x451)-x452));

	if (t85 != 65409U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint8_t x453 = UINT8_MAX;
	int64_t x454 = -1224035LL;
	int32_t x455 = 172;
	volatile int32_t x456 = -1;
	int64_t t86 = -32415776020621665LL;

	t86 = (x453^((x454+x455)-x456));

	if (t86 != -1223755LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x457 = -4042;
	int16_t x459 = INT16_MIN;
	volatile int64_t t87 = -11933284LL;

	t87 = (x457^((x458+x459)-x460));

	if (t87 != 9223372032559837238LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x462 = 13U;
	int32_t t88 = 10416;

	t88 = (x461^((x462+x463)-x464));

	if (t88 != -2147450828) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = INT8_MIN;
	int16_t x467 = 997;
	int16_t x468 = INT16_MAX;
	volatile int32_t t89 = -20;

	t89 = (x465^((x466+x467)-x468));

	if (t89 != 31717) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x469 = 0U;
	volatile int16_t x470 = 1855;
	int16_t x471 = -1;
	uint16_t x472 = 17386U;
	volatile uint32_t t90 = 529167733U;

	t90 = (x469^((x470+x471)-x472));

	if (t90 != 4294951764U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x473 = 46U;
	int8_t x474 = 3;
	int16_t x475 = INT16_MAX;
	int16_t x476 = INT16_MIN;
	int32_t t91 = 5220588;

	t91 = (x473^((x474+x475)-x476));

	if (t91 != 65580) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x477 = 5U;
	uint32_t x478 = 206925U;
	int32_t x479 = -1;
	int8_t x480 = -32;

	t92 = (x477^((x478+x479)-x480));

	if (t92 != 206953U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x481 = -1LL;
	volatile int64_t x483 = -6593815276199074LL;
	int16_t x484 = INT16_MAX;
	volatile int64_t t93 = 1222271247587LL;

	t93 = (x481^((x482+x483)-x484));

	if (t93 != 6593815276231452LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x486 = UINT16_MAX;
	int32_t x487 = INT32_MIN;
	static volatile int32_t t94 = 236137318;

	t94 = (x485^((x486+x487)-x488));

	if (t94 != 65280) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x490 = -1;
	uint32_t x491 = 403968U;
	int32_t x492 = -1;
	static uint32_t t95 = 10410649U;

	t95 = (x489^((x490+x491)-x492));

	if (t95 != 447999U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x493 = INT64_MIN;
	uint64_t x494 = 0LLU;
	static uint64_t x495 = UINT64_MAX;
	uint64_t t96 = 331233713310LLU;

	t96 = (x493^((x494+x495)-x496));

	if (t96 != 9223372036854775823LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x497 = 56;
	static int32_t x498 = -1;
	int8_t x499 = 0;
	static int16_t x500 = -1;
	int32_t t97 = 45;

	t97 = (x497^((x498+x499)-x500));

	if (t97 != 56) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x501 = 27235682243431LLU;
	volatile int16_t x502 = INT16_MIN;
	static uint16_t x503 = UINT16_MAX;
	static int32_t x504 = -319560;

	t98 = (x501^((x502+x503)-x504));

	if (t98 != 27235682562848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x505 = INT64_MAX;
	uint64_t x507 = UINT64_MAX;
	uint32_t x508 = 907U;
	uint64_t t99 = 17012124869023318LLU;

	t99 = (x505^((x506+x507)-x508));

	if (t99 != 9223371929319186887LLU) { NG(); } else { ; }
	
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

