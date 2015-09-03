#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = INT64_MAX;
int8_t x9 = 0;
uint64_t x12 = UINT64_MAX;
static int16_t x23 = 809;
static int64_t x24 = INT64_MAX;
int8_t x37 = INT8_MIN;
static int8_t x38 = -23;
int16_t x39 = -7;
static volatile int32_t t6 = -22943715;
volatile int16_t x50 = 50;
volatile int8_t x51 = INT8_MIN;
static volatile uint8_t x53 = UINT8_MAX;
uint64_t x63 = 197414576159161LLU;
volatile uint8_t x65 = UINT8_MAX;
volatile int8_t x73 = -9;
volatile int32_t t15 = 123079;
int32_t x79 = INT32_MIN;
int32_t t16 = -264111044;
volatile int64_t x85 = 11743892963LL;
static uint16_t x89 = 432U;
uint64_t x95 = 2914747991842LLU;
int8_t x106 = 0;
int64_t x117 = INT64_MIN;
uint64_t x120 = UINT64_MAX;
uint64_t x125 = 559872405438LLU;
int16_t x126 = INT16_MIN;
int32_t x128 = INT32_MAX;
static uint8_t x134 = 1U;
uint16_t x135 = 10301U;
int32_t t29 = -48980120;
static volatile int32_t x149 = -7860210;
volatile int32_t t32 = 34492774;
volatile int32_t t33 = 7007;
static int64_t x163 = 25206813829776LL;
int8_t x168 = INT8_MAX;
static int32_t x169 = INT32_MIN;
uint16_t x171 = 976U;
uint32_t x181 = 0U;
static volatile int8_t x187 = INT8_MIN;
uint16_t x189 = 4U;
int8_t x194 = 15;
int64_t x196 = 44192252818LL;
uint16_t x200 = UINT16_MAX;
int16_t x206 = INT16_MIN;
int32_t t45 = 13683133;
int32_t x225 = INT32_MAX;
int64_t x227 = INT64_MIN;
static volatile int32_t t48 = -64130;
int32_t t50 = 2017;
uint32_t x267 = 25U;
int32_t x268 = -6054;
int32_t t56 = -7637;
int32_t x275 = INT32_MIN;
volatile int32_t t59 = 4328;
int32_t t60 = 231;
int32_t x300 = -2;
int8_t x303 = INT8_MIN;
int16_t x308 = INT16_MIN;
int64_t x311 = 24414958367297LL;
volatile uint32_t x314 = UINT32_MAX;
volatile uint32_t x317 = 967U;
uint16_t x318 = 15U;
uint64_t x319 = 0LLU;
volatile int8_t x326 = INT8_MIN;
uint32_t x338 = UINT32_MAX;
static int32_t t70 = 1;
int16_t x358 = INT16_MIN;
static uint16_t x361 = 20U;
int16_t x370 = -159;
int16_t x379 = INT16_MAX;
volatile int32_t t80 = 0;
uint8_t x385 = 1U;
int32_t x394 = -1;
int16_t x396 = 2633;
static int8_t x399 = INT8_MIN;
int16_t x405 = INT16_MAX;
volatile uint64_t x433 = 3723133048801LLU;
volatile int16_t x435 = -1;
int8_t x436 = -1;
volatile int32_t t89 = 31411;
int16_t x443 = 525;
int32_t x446 = INT32_MIN;
static int32_t x451 = INT32_MIN;
static uint64_t x456 = 206616301594568LLU;
static int64_t x459 = -116128LL;
volatile int8_t x464 = INT8_MIN;
int8_t x467 = INT8_MAX;
static int32_t t96 = 701229964;
uint64_t x477 = 16009555575LLU;
volatile int32_t t98 = 61467925;
static uint64_t x486 = UINT64_MAX;
int8_t x488 = INT8_MIN;


void f0(void) {
	uint16_t x1 = 7U;
	static int8_t x3 = -1;
	int16_t x4 = 1;
	volatile int32_t t0 = 1365;

	t0 = (x1==(x2*(x3&x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x10 = 236269;
	volatile uint16_t x11 = 425U;
	volatile int32_t t1 = -19245;

	t1 = (x9==(x10*(x11&x12)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	int16_t x18 = INT16_MAX;
	int8_t x19 = 10;
	uint16_t x20 = 1U;
	int32_t t2 = 56862;

	t2 = (x17==(x18*(x19&x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x21 = 21U;
	int16_t x22 = 211;
	volatile int32_t t3 = -299267;

	t3 = (x21==(x22*(x23&x24)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x25 = 27;
	int8_t x26 = -5;
	uint8_t x27 = 0U;
	uint16_t x28 = 9346U;
	volatile int32_t t4 = 185779;

	t4 = (x25==(x26*(x27&x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x33 = -1;
	uint32_t x34 = 1312U;
	static int16_t x35 = 1;
	volatile int64_t x36 = INT64_MAX;
	volatile int32_t t5 = -4;

	t5 = (x33==(x34*(x35&x36)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x40 = -1413LL;

	t6 = (x37==(x38*(x39&x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = -1;
	static int16_t x42 = 1913;
	static uint64_t x43 = 34841254463664LLU;
	volatile int8_t x44 = INT8_MAX;
	int32_t t7 = 65881139;

	t7 = (x41==(x42*(x43&x44)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = -1;
	int64_t x47 = INT64_MIN;
	static int8_t x48 = INT8_MAX;
	int32_t t8 = 231519;

	t8 = (x45==(x46*(x47&x48)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MAX;
	uint32_t x52 = UINT32_MAX;
	volatile int32_t t9 = -7866;

	t9 = (x49==(x50*(x51&x52)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x54 = 13345LLU;
	uint8_t x55 = UINT8_MAX;
	int64_t x56 = INT64_MIN;
	int32_t t10 = 20968812;

	t10 = (x53==(x54*(x55&x56)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x57 = 7U;
	static int8_t x58 = INT8_MAX;
	uint64_t x59 = UINT64_MAX;
	int16_t x60 = INT16_MAX;
	static int32_t t11 = -192;

	t11 = (x57==(x58*(x59&x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x61 = INT8_MAX;
	uint16_t x62 = 20U;
	static int32_t x64 = INT32_MAX;
	int32_t t12 = 0;

	t12 = (x61==(x62*(x63&x64)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x66 = 77U;
	int64_t x67 = -314792579051LL;
	static uint64_t x68 = 50188591516883LLU;
	volatile int32_t t13 = 7105;

	t13 = (x65==(x66*(x67&x68)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x69 = 32004285182878090LLU;
	uint8_t x70 = 54U;
	int32_t x71 = 5255683;
	int32_t x72 = -606132;
	volatile int32_t t14 = 150;

	t14 = (x69==(x70*(x71&x72)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x74 = 24352295634812LL;
	int16_t x75 = INT16_MIN;
	volatile int16_t x76 = INT16_MIN;

	t15 = (x73==(x74*(x75&x76)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	volatile int8_t x78 = INT8_MAX;
	volatile uint32_t x80 = 5U;

	t16 = (x77==(x78*(x79&x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 2U;
	uint32_t x82 = 185866U;
	int8_t x83 = 10;
	int32_t x84 = -262987775;
	static int32_t t17 = 282;

	t17 = (x81==(x82*(x83&x84)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x86 = -1;
	int8_t x87 = INT8_MAX;
	int16_t x88 = -1;
	volatile int32_t t18 = 10281;

	t18 = (x85==(x86*(x87&x88)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x90 = INT32_MIN;
	uint64_t x91 = UINT64_MAX;
	static int32_t x92 = -30339632;
	static int32_t t19 = 0;

	t19 = (x89==(x90*(x91&x92)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x93 = 670;
	uint32_t x94 = UINT32_MAX;
	int64_t x96 = INT64_MIN;
	volatile int32_t t20 = -2308;

	t20 = (x93==(x94*(x95&x96)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x97 = UINT8_MAX;
	uint64_t x98 = 24352030478833LLU;
	int32_t x99 = INT32_MIN;
	volatile int8_t x100 = INT8_MAX;
	int32_t t21 = 2474;

	t21 = (x97==(x98*(x99&x100)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = UINT8_MAX;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = 31;
	volatile int32_t t22 = 3191750;

	t22 = (x105==(x106*(x107&x108)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MAX;
	static int8_t x110 = -1;
	volatile int32_t x111 = 478452328;
	volatile int64_t x112 = INT64_MAX;
	static volatile int32_t t23 = -29713932;

	t23 = (x109==(x110*(x111&x112)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = 4U;
	uint64_t x114 = 462576LLU;
	int32_t x115 = INT32_MIN;
	uint8_t x116 = 1U;
	static int32_t t24 = 153175094;

	t24 = (x113==(x114*(x115&x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x118 = INT8_MIN;
	uint16_t x119 = 323U;
	volatile int32_t t25 = -69;

	t25 = (x117==(x118*(x119&x120)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x127 = -1LL;
	int32_t t26 = 652460781;

	t26 = (x125==(x126*(x127&x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x129 = 5608;
	static volatile int32_t x130 = INT32_MIN;
	uint64_t x131 = 314032595948LLU;
	int8_t x132 = INT8_MIN;
	static int32_t t27 = -5565705;

	t27 = (x129==(x130*(x131&x132)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x133 = INT64_MIN;
	static volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t28 = -7572463;

	t28 = (x133==(x134*(x135&x136)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = INT8_MAX;
	uint16_t x138 = 140U;
	int32_t x139 = 456;
	int32_t x140 = -300646;

	t29 = (x137==(x138*(x139&x140)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x145 = 8107701LL;
	int64_t x146 = -60098353LL;
	int8_t x147 = -1;
	static int32_t x148 = -139;
	int32_t t30 = -6046288;

	t30 = (x145==(x146*(x147&x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x150 = 144LLU;
	volatile int64_t x151 = INT64_MAX;
	int32_t x152 = INT32_MAX;
	int32_t t31 = 12;

	t31 = (x149==(x150*(x151&x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = INT32_MAX;
	static int64_t x154 = -17184LL;
	int16_t x155 = INT16_MIN;
	volatile int64_t x156 = -1LL;

	t32 = (x153==(x154*(x155&x156)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 1737368470758166LLU;
	static volatile uint64_t x158 = 534962539342LLU;
	int32_t x159 = INT32_MIN;
	uint8_t x160 = 4U;

	t33 = (x157==(x158*(x159&x160)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = -1;
	uint8_t x162 = 56U;
	int8_t x164 = INT8_MIN;
	volatile int32_t t34 = 55717851;

	t34 = (x161==(x162*(x163&x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x165 = INT32_MIN;
	int8_t x166 = 14;
	uint64_t x167 = 517895559LLU;
	static int32_t t35 = -34236491;

	t35 = (x165==(x166*(x167&x168)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x170 = 2328627;
	int32_t x172 = -440144;
	int32_t t36 = 31611;

	t36 = (x169==(x170*(x171&x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x173 = INT32_MIN;
	volatile int16_t x174 = INT16_MAX;
	int16_t x175 = -36;
	uint16_t x176 = 14U;
	int32_t t37 = 11;

	t37 = (x173==(x174*(x175&x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x177 = INT32_MIN;
	static uint16_t x178 = UINT16_MAX;
	static volatile int16_t x179 = -2462;
	static uint32_t x180 = 765U;
	int32_t t38 = -3480512;

	t38 = (x177==(x178*(x179&x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x182 = 1647325LLU;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t39 = 433813957;

	t39 = (x181==(x182*(x183&x184)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = -1;
	int16_t x186 = 0;
	volatile int16_t x188 = INT16_MAX;
	volatile int32_t t40 = -61993338;

	t40 = (x185==(x186*(x187&x188)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint32_t x190 = UINT32_MAX;
	volatile int32_t x191 = INT32_MIN;
	uint32_t x192 = UINT32_MAX;
	int32_t t41 = -31031;

	t41 = (x189==(x190*(x191&x192)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = INT64_MIN;
	int64_t x195 = -1LL;
	static int32_t t42 = 137892362;

	t42 = (x193==(x194*(x195&x196)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x197 = 14783910023180313LLU;
	int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	volatile int32_t t43 = -1;

	t43 = (x197==(x198*(x199&x200)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x201 = -1;
	static int16_t x202 = INT16_MIN;
	static uint64_t x203 = 847978000337654LLU;
	int16_t x204 = 3164;
	volatile int32_t t44 = 384294;

	t44 = (x201==(x202*(x203&x204)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x205 = 3;
	uint32_t x207 = UINT32_MAX;
	volatile int8_t x208 = INT8_MIN;

	t45 = (x205==(x206*(x207&x208)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x217 = 100U;
	uint64_t x218 = UINT64_MAX;
	int64_t x219 = -2LL;
	uint64_t x220 = 108527026LLU;
	int32_t t46 = 30208142;

	t46 = (x217==(x218*(x219&x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x226 = -8;
	uint64_t x228 = 939320568920181LLU;
	static int32_t t47 = -221628;

	t47 = (x225==(x226*(x227&x228)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x233 = UINT8_MAX;
	uint16_t x234 = UINT16_MAX;
	static int64_t x235 = -184535785LL;
	uint8_t x236 = 1U;

	t48 = (x233==(x234*(x235&x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x237 = -53;
	uint16_t x238 = 26U;
	uint64_t x239 = UINT64_MAX;
	uint64_t x240 = UINT64_MAX;
	int32_t t49 = 679514026;

	t49 = (x237==(x238*(x239&x240)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x241 = 3;
	static volatile uint64_t x242 = 183643743358876LLU;
	volatile uint8_t x243 = 0U;
	int16_t x244 = -1;

	t50 = (x241==(x242*(x243&x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = 3184;
	volatile uint64_t x246 = 381401LLU;
	uint64_t x247 = UINT64_MAX;
	int64_t x248 = INT64_MIN;
	int32_t t51 = 196;

	t51 = (x245==(x246*(x247&x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x249 = -1;
	int32_t x250 = -1;
	volatile int8_t x251 = 31;
	int64_t x252 = INT64_MIN;
	volatile int32_t t52 = -139;

	t52 = (x249==(x250*(x251&x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x253 = 9U;
	int32_t x254 = INT32_MIN;
	uint64_t x255 = 2395513494144LLU;
	uint8_t x256 = 70U;
	int32_t t53 = 45;

	t53 = (x253==(x254*(x255&x256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x261 = UINT16_MAX;
	volatile uint64_t x262 = 18948753387845692LLU;
	uint16_t x263 = UINT16_MAX;
	int32_t x264 = 735;
	volatile int32_t t54 = -170327;

	t54 = (x261==(x262*(x263&x264)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 2U;
	static int8_t x266 = INT8_MIN;
	volatile int32_t t55 = 989986;

	t55 = (x265==(x266*(x267&x268)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x269 = INT64_MIN;
	int64_t x270 = 109975173LL;
	volatile uint16_t x271 = 4208U;
	int32_t x272 = -1;

	t56 = (x269==(x270*(x271&x272)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x273 = INT64_MIN;
	static volatile int16_t x274 = 0;
	int64_t x276 = 16842220467952247LL;
	volatile int32_t t57 = -7543806;

	t57 = (x273==(x274*(x275&x276)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x277 = -226;
	uint64_t x278 = 7676896LLU;
	int64_t x279 = -1LL;
	int32_t x280 = -8815502;
	static int32_t t58 = -1341;

	t58 = (x277==(x278*(x279&x280)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x281 = 94;
	int32_t x282 = -1;
	int16_t x283 = 3008;
	uint8_t x284 = 56U;

	t59 = (x281==(x282*(x283&x284)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x285 = INT32_MAX;
	uint64_t x286 = UINT64_MAX;
	volatile int8_t x287 = INT8_MIN;
	int16_t x288 = INT16_MIN;

	t60 = (x285==(x286*(x287&x288)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x289 = UINT16_MAX;
	uint32_t x290 = 14579052U;
	static volatile int32_t x291 = -5;
	uint8_t x292 = 9U;
	volatile int32_t t61 = 13;

	t61 = (x289==(x290*(x291&x292)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x297 = INT8_MIN;
	uint32_t x298 = 207507706U;
	uint64_t x299 = 4188380882LLU;
	int32_t t62 = 15;

	t62 = (x297==(x298*(x299&x300)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x301 = INT32_MAX;
	volatile uint32_t x302 = 5U;
	int32_t x304 = -48;
	int32_t t63 = -12;

	t63 = (x301==(x302*(x303&x304)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x305 = -1642820140LL;
	int16_t x306 = -1;
	int64_t x307 = -72162LL;
	static int32_t t64 = 17222024;

	t64 = (x305==(x306*(x307&x308)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x309 = -1;
	uint8_t x310 = UINT8_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t65 = -295;

	t65 = (x309==(x310*(x311&x312)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = -57;
	static volatile uint8_t x315 = 2U;
	static uint64_t x316 = UINT64_MAX;
	volatile int32_t t66 = 1;

	t66 = (x313==(x314*(x315&x316)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x320 = INT8_MAX;
	int32_t t67 = -191;

	t67 = (x317==(x318*(x319&x320)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x325 = 80U;
	int64_t x327 = 600LL;
	int16_t x328 = -1;
	volatile int32_t t68 = -11245;

	t68 = (x325==(x326*(x327&x328)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = INT8_MAX;
	int64_t x330 = 33456765155LL;
	int32_t x331 = -15052;
	int16_t x332 = INT16_MAX;
	static volatile int32_t t69 = 1;

	t69 = (x329==(x330*(x331&x332)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int64_t x339 = 7538231388128LL;
	uint64_t x340 = 132129696342268LLU;

	t70 = (x337==(x338*(x339&x340)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x341 = 0;
	uint32_t x342 = 1508001U;
	static uint16_t x343 = UINT16_MAX;
	int16_t x344 = INT16_MAX;
	int32_t t71 = -4941;

	t71 = (x341==(x342*(x343&x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x345 = 4U;
	static uint64_t x346 = 565777LLU;
	uint8_t x347 = 7U;
	volatile int32_t x348 = INT32_MIN;
	static volatile int32_t t72 = 31423;

	t72 = (x345==(x346*(x347&x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x349 = UINT64_MAX;
	uint8_t x350 = 14U;
	volatile uint16_t x351 = 3460U;
	int64_t x352 = INT64_MIN;
	int32_t t73 = 158418271;

	t73 = (x349==(x350*(x351&x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x357 = -1LL;
	uint16_t x359 = 0U;
	int64_t x360 = -471491900LL;
	int32_t t74 = 2293;

	t74 = (x357==(x358*(x359&x360)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x362 = 1U;
	volatile int32_t x363 = INT32_MIN;
	static uint32_t x364 = UINT32_MAX;
	volatile int32_t t75 = 24045;

	t75 = (x361==(x362*(x363&x364)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x365 = INT64_MAX;
	uint64_t x366 = UINT64_MAX;
	uint64_t x367 = 817LLU;
	static int64_t x368 = -65157848LL;
	volatile int32_t t76 = 199497;

	t76 = (x365==(x366*(x367&x368)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x369 = INT8_MIN;
	static uint8_t x371 = UINT8_MAX;
	uint64_t x372 = 2530LLU;
	volatile int32_t t77 = -17;

	t77 = (x369==(x370*(x371&x372)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x373 = 1328390U;
	int8_t x374 = INT8_MIN;
	static volatile int32_t x375 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	int32_t t78 = -272064368;

	t78 = (x373==(x374*(x375&x376)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x377 = -16;
	uint8_t x378 = UINT8_MAX;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t79 = -3;

	t79 = (x377==(x378*(x379&x380)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x381 = INT16_MAX;
	static volatile uint32_t x382 = UINT32_MAX;
	uint16_t x383 = 7850U;
	int64_t x384 = -105627412LL;

	t80 = (x381==(x382*(x383&x384)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x386 = 26LLU;
	int8_t x387 = -1;
	uint16_t x388 = UINT16_MAX;
	volatile int32_t t81 = 1;

	t81 = (x385==(x386*(x387&x388)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x389 = 1U;
	volatile uint32_t x390 = 3649570U;
	int8_t x391 = 4;
	static int32_t x392 = -55328;
	volatile int32_t t82 = -195953;

	t82 = (x389==(x390*(x391&x392)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x393 = -43;
	static volatile int64_t x395 = INT64_MIN;
	volatile int32_t t83 = 85;

	t83 = (x393==(x394*(x395&x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x397 = UINT64_MAX;
	volatile int8_t x398 = INT8_MIN;
	volatile uint16_t x400 = 263U;
	volatile int32_t t84 = -53044;

	t84 = (x397==(x398*(x399&x400)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x401 = INT64_MAX;
	volatile uint8_t x402 = UINT8_MAX;
	int32_t x403 = INT32_MIN;
	static int64_t x404 = 154866LL;
	int32_t t85 = 3;

	t85 = (x401==(x402*(x403&x404)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x406 = INT64_MIN;
	volatile int64_t x407 = INT64_MIN;
	volatile int16_t x408 = 3;
	static volatile int32_t t86 = 69270930;

	t86 = (x405==(x406*(x407&x408)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x413 = -10673;
	volatile int32_t x414 = INT32_MAX;
	int32_t x415 = 1;
	uint32_t x416 = 23U;
	int32_t t87 = -6947;

	t87 = (x413==(x414*(x415&x416)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x417 = -2579216761873LL;
	int16_t x418 = -3;
	uint16_t x419 = 1U;
	volatile int64_t x420 = -1LL;
	int32_t t88 = 3465989;

	t88 = (x417==(x418*(x419&x420)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x434 = INT16_MIN;

	t89 = (x433==(x434*(x435&x436)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x441 = INT16_MAX;
	uint16_t x442 = 118U;
	volatile int8_t x444 = INT8_MIN;
	int32_t t90 = -4318;

	t90 = (x441==(x442*(x443&x444)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x445 = 0;
	volatile int16_t x447 = -10090;
	volatile int8_t x448 = 1;
	volatile int32_t t91 = -2370;

	t91 = (x445==(x446*(x447&x448)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x449 = 28666428210487LLU;
	static int32_t x450 = INT32_MIN;
	static uint64_t x452 = UINT64_MAX;
	int32_t t92 = -230432;

	t92 = (x449==(x450*(x451&x452)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x453 = 3629U;
	volatile uint32_t x454 = 25962U;
	int64_t x455 = -1LL;
	int32_t t93 = 6;

	t93 = (x453==(x454*(x455&x456)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x457 = 6977U;
	int8_t x458 = INT8_MIN;
	static uint64_t x460 = 5805574985347LLU;
	volatile int32_t t94 = -8;

	t94 = (x457==(x458*(x459&x460)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = INT64_MIN;
	int32_t x462 = -57755486;
	static volatile int8_t x463 = INT8_MAX;
	volatile int32_t t95 = -501;

	t95 = (x461==(x462*(x463&x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x465 = INT8_MIN;
	static int16_t x466 = -1;
	uint8_t x468 = 27U;

	t96 = (x465==(x466*(x467&x468)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x473 = -1;
	int8_t x474 = -1;
	volatile uint64_t x475 = 12293236468LLU;
	int8_t x476 = INT8_MIN;
	static int32_t t97 = -124479;

	t97 = (x473==(x474*(x475&x476)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x478 = INT32_MIN;
	uint8_t x479 = UINT8_MAX;
	static int16_t x480 = INT16_MIN;

	t98 = (x477==(x478*(x479&x480)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x485 = INT32_MAX;
	uint64_t x487 = 537106798551515904LLU;
	static volatile int32_t t99 = 5295748;

	t99 = (x485==(x486*(x487&x488)));

	if (t99 != 0) { NG(); } else { ; }
	
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

