#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = -1LL;
volatile int32_t t1 = 84949;
uint32_t x17 = UINT32_MAX;
static int32_t t3 = 3667667;
static volatile int32_t t4 = -285280849;
int8_t x34 = INT8_MAX;
uint32_t x36 = 382812U;
static int8_t x41 = -1;
volatile int32_t t7 = 403977790;
volatile int32_t t9 = 7953;
int64_t x55 = 40065736760LL;
static int32_t t13 = -27591735;
static int8_t x86 = INT8_MAX;
static volatile int32_t t18 = -26;
int16_t x104 = -1;
int16_t x115 = 0;
int32_t t21 = 12096;
int16_t x121 = INT16_MIN;
int8_t x129 = INT8_MIN;
volatile int64_t x132 = -1LL;
int32_t x133 = INT32_MIN;
int32_t x136 = INT32_MIN;
int32_t x137 = INT32_MIN;
volatile int64_t x140 = INT64_MIN;
static int8_t x141 = -3;
static uint8_t x145 = 28U;
int32_t t28 = -106;
int32_t t29 = 27;
int32_t t30 = -61389105;
volatile int32_t x158 = INT32_MIN;
int32_t t31 = 984;
int8_t x163 = -1;
uint64_t x176 = 592180LLU;
int32_t x194 = -729492;
int8_t x196 = -1;
static volatile uint8_t x199 = 46U;
uint64_t x202 = 206139577181983604LLU;
int16_t x203 = -106;
uint16_t x214 = 32697U;
uint32_t x219 = UINT32_MAX;
uint16_t x245 = 0U;
int8_t x250 = INT8_MIN;
int32_t t50 = 182931;
static uint64_t x261 = 348LLU;
int16_t x265 = INT16_MIN;
static volatile int8_t x269 = -1;
uint8_t x273 = 32U;
uint32_t x277 = UINT32_MAX;
int8_t x278 = -1;
uint16_t x280 = 2U;
volatile int32_t t56 = -14296;
uint16_t x289 = UINT16_MAX;
static int32_t x292 = -1;
uint8_t x305 = UINT8_MAX;
int32_t x309 = 140725;
int8_t x311 = INT8_MIN;
int64_t x315 = INT64_MIN;
volatile uint64_t x318 = 18LLU;
volatile int64_t x326 = INT64_MIN;
static int16_t x328 = -1;
int32_t t67 = -234;
int32_t x349 = -1;
static uint32_t x351 = 285U;
int64_t x354 = INT64_MIN;
static int8_t x360 = -1;
static int16_t x364 = INT16_MIN;
static int32_t t71 = 814;
uint64_t x365 = 0LLU;
static int64_t x366 = INT64_MIN;
static volatile int16_t x370 = -6;
uint8_t x371 = 0U;
int32_t x373 = -1;
int8_t x376 = 2;
volatile uint16_t x384 = UINT16_MAX;
static int32_t t77 = -488515451;
int64_t x395 = -1LL;
uint16_t x397 = UINT16_MAX;
volatile int16_t x398 = INT16_MIN;
int64_t x406 = INT64_MIN;
uint32_t x409 = UINT32_MAX;
static volatile int32_t x414 = -1;
int32_t t85 = 767412490;
int16_t x425 = INT16_MAX;
int16_t x429 = 89;
static int32_t x433 = 0;
int32_t t89 = 2;
static uint64_t x442 = 914185672403LLU;
static int32_t x457 = INT32_MIN;
int8_t x460 = -29;
volatile int32_t t92 = 1;
volatile int16_t x461 = -1;
static int32_t x463 = -1;
int32_t t94 = -2798585;
uint32_t x474 = UINT32_MAX;
int8_t x476 = INT8_MIN;
volatile int32_t t96 = 573070;
volatile uint8_t x477 = 18U;


void f0(void) {
	int32_t x1 = -1;
	static uint64_t x3 = UINT64_MAX;
	static uint16_t x4 = 269U;
	int32_t t0 = 410179244;

	t0 = (((x1|x2)*x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -157823;
	static volatile uint8_t x10 = UINT8_MAX;
	int16_t x11 = -1;
	static uint64_t x12 = 1890801079629810LLU;

	t1 = (((x9|x10)*x11)==x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = -1;
	int64_t x19 = -1LL;
	int32_t x20 = -313130;
	int32_t t2 = 584653508;

	t2 = (((x17|x18)*x19)==x20);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x21 = INT64_MIN;
	int8_t x22 = INT8_MIN;
	volatile int32_t x23 = INT32_MIN;
	int64_t x24 = -16067898256LL;

	t3 = (((x21|x22)*x23)==x24);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = -1;
	uint16_t x26 = UINT16_MAX;
	static int32_t x27 = 153;
	int64_t x28 = 590463047086009781LL;

	t4 = (((x25|x26)*x27)==x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x33 = -1LL;
	int64_t x35 = INT64_MAX;
	static int32_t t5 = 0;

	t5 = (((x33|x34)*x35)==x36);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -94;
	int64_t x38 = INT64_MIN;
	static uint32_t x39 = UINT32_MAX;
	int32_t x40 = 2912972;
	static int32_t t6 = 0;

	t6 = (((x37|x38)*x39)==x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x42 = 5U;
	int16_t x43 = -303;
	uint8_t x44 = 0U;

	t7 = (((x41|x42)*x43)==x44);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = INT8_MAX;
	volatile uint32_t x46 = UINT32_MAX;
	int32_t x47 = 19;
	int64_t x48 = -1LL;
	volatile int32_t t8 = 100297;

	t8 = (((x45|x46)*x47)==x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = 1U;
	static uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MAX;
	uint64_t x52 = 118890453781229LLU;

	t9 = (((x49|x50)*x51)==x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x53 = 4712;
	int16_t x54 = INT16_MAX;
	static uint16_t x56 = 10020U;
	volatile int32_t t10 = -1457378;

	t10 = (((x53|x54)*x55)==x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x57 = INT32_MIN;
	int32_t x58 = INT32_MAX;
	int16_t x59 = INT16_MIN;
	int32_t x60 = INT32_MIN;
	volatile int32_t t11 = -3;

	t11 = (((x57|x58)*x59)==x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = UINT32_MAX;
	static int8_t x62 = INT8_MIN;
	int32_t x63 = INT32_MIN;
	static int16_t x64 = -1;
	volatile int32_t t12 = 1831735;

	t12 = (((x61|x62)*x63)==x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x65 = UINT32_MAX;
	int32_t x66 = INT32_MIN;
	static int8_t x67 = -1;
	static uint16_t x68 = 310U;

	t13 = (((x65|x66)*x67)==x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x81 = INT32_MIN;
	volatile uint64_t x82 = 763LLU;
	volatile uint8_t x83 = 0U;
	static uint64_t x84 = 3763141734LLU;
	int32_t t14 = -3;

	t14 = (((x81|x82)*x83)==x84);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x85 = -3;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = INT16_MAX;
	static volatile int32_t t15 = 25151336;

	t15 = (((x85|x86)*x87)==x88);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x89 = -1;
	int8_t x90 = 3;
	uint16_t x91 = UINT16_MAX;
	static int32_t x92 = 168;
	volatile int32_t t16 = -13289;

	t16 = (((x89|x90)*x91)==x92);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x93 = 2273;
	int8_t x94 = -3;
	int32_t x95 = -112499;
	int64_t x96 = INT64_MIN;
	int32_t t17 = 218493;

	t17 = (((x93|x94)*x95)==x96);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = INT8_MAX;
	int64_t x98 = -1LL;
	int32_t x99 = -1;
	static int8_t x100 = INT8_MIN;

	t18 = (((x97|x98)*x99)==x100);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x101 = -1;
	volatile int32_t x102 = INT32_MIN;
	volatile uint8_t x103 = UINT8_MAX;
	volatile int32_t t19 = 505603420;

	t19 = (((x101|x102)*x103)==x104);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x105 = INT32_MIN;
	volatile int8_t x106 = INT8_MIN;
	uint32_t x107 = UINT32_MAX;
	uint16_t x108 = 67U;
	int32_t t20 = -418289;

	t20 = (((x105|x106)*x107)==x108);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x113 = 20U;
	int64_t x114 = INT64_MAX;
	uint32_t x116 = UINT32_MAX;

	t21 = (((x113|x114)*x115)==x116);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x122 = 0U;
	int8_t x123 = INT8_MIN;
	static int8_t x124 = -1;
	int32_t t22 = 2571337;

	t22 = (((x121|x122)*x123)==x124);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = -79;
	int8_t x127 = INT8_MIN;
	static uint16_t x128 = 14U;
	volatile int32_t t23 = -15792032;

	t23 = (((x125|x126)*x127)==x128);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x130 = INT64_MAX;
	volatile int8_t x131 = -3;
	volatile int32_t t24 = 1;

	t24 = (((x129|x130)*x131)==x132);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x134 = -12345LL;
	uint64_t x135 = 0LLU;
	static volatile int32_t t25 = -28;

	t25 = (((x133|x134)*x135)==x136);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x138 = 42530LLU;
	volatile int8_t x139 = INT8_MAX;
	int32_t t26 = 1465;

	t26 = (((x137|x138)*x139)==x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x142 = INT64_MIN;
	uint32_t x143 = 4U;
	int8_t x144 = 5;
	volatile int32_t t27 = 13613524;

	t27 = (((x141|x142)*x143)==x144);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x146 = 4U;
	static volatile int64_t x147 = -1LL;
	static uint64_t x148 = UINT64_MAX;

	t28 = (((x145|x146)*x147)==x148);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = -1;
	uint8_t x150 = 15U;
	static uint64_t x151 = 1398128515386LLU;
	static int8_t x152 = INT8_MIN;

	t29 = (((x149|x150)*x151)==x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x153 = 41U;
	volatile uint16_t x154 = UINT16_MAX;
	int8_t x155 = -1;
	int16_t x156 = -1;

	t30 = (((x153|x154)*x155)==x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x157 = INT32_MAX;
	int8_t x159 = 56;
	int32_t x160 = 21601;

	t31 = (((x157|x158)*x159)==x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x161 = INT32_MIN;
	volatile uint16_t x162 = 2U;
	static uint16_t x164 = UINT16_MAX;
	int32_t t32 = 55725;

	t32 = (((x161|x162)*x163)==x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x169 = UINT32_MAX;
	volatile int16_t x170 = INT16_MIN;
	static int8_t x171 = INT8_MIN;
	int64_t x172 = 4692609LL;
	int32_t t33 = 1185598;

	t33 = (((x169|x170)*x171)==x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = INT8_MIN;
	volatile uint64_t x174 = 10726122LLU;
	uint16_t x175 = 2U;
	int32_t t34 = -170383;

	t34 = (((x173|x174)*x175)==x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x177 = 1038651135U;
	int16_t x178 = -3929;
	uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;
	static int32_t t35 = -1;

	t35 = (((x177|x178)*x179)==x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = -1LL;
	static volatile int8_t x186 = -1;
	uint8_t x187 = 4U;
	volatile int16_t x188 = INT16_MAX;
	int32_t t36 = 483;

	t36 = (((x185|x186)*x187)==x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x189 = -420899871290312LL;
	volatile uint64_t x190 = 6LLU;
	volatile uint64_t x191 = UINT64_MAX;
	int8_t x192 = INT8_MIN;
	volatile int32_t t37 = -37802329;

	t37 = (((x189|x190)*x191)==x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x193 = INT8_MIN;
	int16_t x195 = INT16_MIN;
	volatile int32_t t38 = 1382;

	t38 = (((x193|x194)*x195)==x196);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -1;
	volatile uint64_t x198 = 631LLU;
	static uint32_t x200 = 253U;
	int32_t t39 = -33;

	t39 = (((x197|x198)*x199)==x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x204 = INT8_MIN;
	static volatile int32_t t40 = -292108398;

	t40 = (((x201|x202)*x203)==x204);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x205 = -1;
	int32_t x206 = -2156882;
	static int16_t x207 = INT16_MIN;
	int8_t x208 = 15;
	int32_t t41 = 52083;

	t41 = (((x205|x206)*x207)==x208);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x213 = INT32_MAX;
	uint32_t x215 = 7900U;
	int32_t x216 = INT32_MIN;
	volatile int32_t t42 = -1;

	t42 = (((x213|x214)*x215)==x216);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = INT32_MIN;
	volatile int32_t x218 = -47;
	int16_t x220 = INT16_MIN;
	static int32_t t43 = -2528;

	t43 = (((x217|x218)*x219)==x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x225 = 1607U;
	static int16_t x226 = INT16_MIN;
	volatile uint64_t x227 = UINT64_MAX;
	int8_t x228 = INT8_MAX;
	int32_t t44 = -2578;

	t44 = (((x225|x226)*x227)==x228);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x229 = INT32_MAX;
	static int32_t x230 = -1;
	int32_t x231 = -1;
	static volatile uint32_t x232 = UINT32_MAX;
	volatile int32_t t45 = -9576;

	t45 = (((x229|x230)*x231)==x232);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x233 = INT16_MIN;
	uint32_t x234 = UINT32_MAX;
	static int8_t x235 = INT8_MAX;
	static volatile int64_t x236 = -34005374LL;
	int32_t t46 = 449416;

	t46 = (((x233|x234)*x235)==x236);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x237 = -20;
	static volatile int32_t x238 = 7482208;
	uint16_t x239 = 3U;
	volatile int32_t x240 = -28214;
	volatile int32_t t47 = -2054;

	t47 = (((x237|x238)*x239)==x240);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x241 = 689U;
	int8_t x242 = INT8_MIN;
	static int8_t x243 = 1;
	static int16_t x244 = INT16_MIN;
	volatile int32_t t48 = -959799741;

	t48 = (((x241|x242)*x243)==x244);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x246 = -1;
	volatile int8_t x247 = -1;
	int32_t x248 = INT32_MIN;
	int32_t t49 = 132810;

	t49 = (((x245|x246)*x247)==x248);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x249 = 268543;
	int16_t x251 = INT16_MAX;
	int32_t x252 = -1;

	t50 = (((x249|x250)*x251)==x252);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x262 = INT32_MAX;
	uint32_t x263 = 1002514U;
	static uint64_t x264 = 2159090230198925951LLU;
	static volatile int32_t t51 = 2;

	t51 = (((x261|x262)*x263)==x264);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x266 = 2U;
	static int8_t x267 = INT8_MAX;
	static uint32_t x268 = 245U;
	volatile int32_t t52 = -285;

	t52 = (((x265|x266)*x267)==x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 119U;
	int16_t x272 = -121;
	static volatile int32_t t53 = 495370417;

	t53 = (((x269|x270)*x271)==x272);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x274 = 1;
	volatile int32_t x275 = 1;
	int32_t x276 = -12903;
	volatile int32_t t54 = 28122584;

	t54 = (((x273|x274)*x275)==x276);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x279 = 14U;
	int32_t t55 = 6;

	t55 = (((x277|x278)*x279)==x280);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x285 = 869U;
	uint64_t x286 = 7430895LLU;
	static uint64_t x287 = 20632273065382853LLU;
	int16_t x288 = 1;

	t56 = (((x285|x286)*x287)==x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x290 = -6;
	uint32_t x291 = 1U;
	volatile int32_t t57 = -6065;

	t57 = (((x289|x290)*x291)==x292);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x293 = -431;
	static int64_t x294 = INT64_MAX;
	uint16_t x295 = UINT16_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile int32_t t58 = 47153486;

	t58 = (((x293|x294)*x295)==x296);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x306 = 433558LLU;
	int8_t x307 = -1;
	volatile uint16_t x308 = 3624U;
	int32_t t59 = -3;

	t59 = (((x305|x306)*x307)==x308);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x310 = -13604;
	int16_t x312 = INT16_MAX;
	volatile int32_t t60 = -8533;

	t60 = (((x309|x310)*x311)==x312);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x313 = UINT64_MAX;
	static volatile int32_t x314 = INT32_MIN;
	static int64_t x316 = -25LL;
	volatile int32_t t61 = -7353121;

	t61 = (((x313|x314)*x315)==x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x317 = -1;
	int16_t x319 = -12727;
	volatile uint16_t x320 = 13U;
	volatile int32_t t62 = -826029;

	t62 = (((x317|x318)*x319)==x320);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x321 = INT16_MAX;
	uint32_t x322 = UINT32_MAX;
	volatile int8_t x323 = 1;
	static uint32_t x324 = 1U;
	int32_t t63 = 79860;

	t63 = (((x321|x322)*x323)==x324);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x325 = -1LL;
	volatile int16_t x327 = INT16_MIN;
	volatile int32_t t64 = -1;

	t64 = (((x325|x326)*x327)==x328);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 0U;
	int8_t x334 = INT8_MIN;
	volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = -4;
	volatile int32_t t65 = -1816;

	t65 = (((x333|x334)*x335)==x336);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x337 = -15;
	static int8_t x338 = INT8_MIN;
	int32_t x339 = 41503099;
	static int16_t x340 = -1;
	int32_t t66 = -18304308;

	t66 = (((x337|x338)*x339)==x340);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	uint16_t x343 = UINT16_MAX;
	int8_t x344 = -1;

	t67 = (((x341|x342)*x343)==x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x350 = 71U;
	uint16_t x352 = UINT16_MAX;
	volatile int32_t t68 = -44872;

	t68 = (((x349|x350)*x351)==x352);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x353 = 14LL;
	static int8_t x355 = 0;
	int64_t x356 = INT64_MIN;
	volatile int32_t t69 = -13192;

	t69 = (((x353|x354)*x355)==x356);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = -1;
	static int16_t x359 = INT16_MAX;
	volatile int32_t t70 = -465;

	t70 = (((x357|x358)*x359)==x360);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x361 = -1;
	uint16_t x362 = 173U;
	int8_t x363 = INT8_MIN;

	t71 = (((x361|x362)*x363)==x364);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x367 = INT8_MIN;
	uint16_t x368 = 998U;
	volatile int32_t t72 = 3361;

	t72 = (((x365|x366)*x367)==x368);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x369 = INT16_MIN;
	static volatile int16_t x372 = 0;
	int32_t t73 = -2319140;

	t73 = (((x369|x370)*x371)==x372);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x374 = INT32_MIN;
	int16_t x375 = INT16_MIN;
	int32_t t74 = 1161;

	t74 = (((x373|x374)*x375)==x376);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x377 = INT64_MAX;
	static volatile int32_t x378 = 0;
	int32_t x379 = 0;
	int64_t x380 = INT64_MIN;
	int32_t t75 = -4;

	t75 = (((x377|x378)*x379)==x380);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x381 = 892;
	static volatile int16_t x382 = -6;
	int64_t x383 = -52341LL;
	int32_t t76 = 87635;

	t76 = (((x381|x382)*x383)==x384);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x385 = 61LLU;
	uint16_t x386 = 7945U;
	static volatile int64_t x387 = INT64_MAX;
	int16_t x388 = INT16_MIN;

	t77 = (((x385|x386)*x387)==x388);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x389 = 94U;
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	volatile uint64_t x392 = UINT64_MAX;
	int32_t t78 = -478;

	t78 = (((x389|x390)*x391)==x392);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x393 = INT64_MIN;
	uint16_t x394 = 3U;
	volatile uint8_t x396 = 0U;
	int32_t t79 = 646;

	t79 = (((x393|x394)*x395)==x396);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x399 = 3444690775445541LLU;
	int8_t x400 = -47;
	int32_t t80 = -1;

	t80 = (((x397|x398)*x399)==x400);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x405 = INT32_MIN;
	int16_t x407 = -16;
	uint64_t x408 = UINT64_MAX;
	volatile int32_t t81 = 96316;

	t81 = (((x405|x406)*x407)==x408);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x410 = UINT16_MAX;
	int32_t x411 = INT32_MAX;
	uint32_t x412 = 1546922896U;
	volatile int32_t t82 = 21531761;

	t82 = (((x409|x410)*x411)==x412);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x413 = INT32_MIN;
	static uint32_t x415 = 771U;
	volatile int32_t x416 = -1;
	static volatile int32_t t83 = 1;

	t83 = (((x413|x414)*x415)==x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x417 = INT16_MIN;
	int64_t x418 = -1LL;
	static int32_t x419 = -1;
	static int8_t x420 = INT8_MAX;
	static volatile int32_t t84 = 352312;

	t84 = (((x417|x418)*x419)==x420);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x421 = -95;
	uint32_t x422 = 73977U;
	uint8_t x423 = UINT8_MAX;
	int64_t x424 = INT64_MAX;

	t85 = (((x421|x422)*x423)==x424);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x426 = UINT32_MAX;
	uint32_t x427 = 645130983U;
	int64_t x428 = -1LL;
	int32_t t86 = 465888;

	t86 = (((x425|x426)*x427)==x428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x430 = 6590U;
	int16_t x431 = 10362;
	int64_t x432 = 7LL;
	volatile int32_t t87 = 186471979;

	t87 = (((x429|x430)*x431)==x432);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x434 = -1;
	int32_t x435 = -852484659;
	uint64_t x436 = 24491LLU;
	volatile int32_t t88 = 4033181;

	t88 = (((x433|x434)*x435)==x436);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x437 = 215111399006168625LLU;
	int16_t x438 = INT16_MIN;
	volatile int16_t x439 = INT16_MIN;
	int16_t x440 = INT16_MIN;

	t89 = (((x437|x438)*x439)==x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x441 = -1;
	static uint8_t x443 = 1U;
	int8_t x444 = INT8_MIN;
	static int32_t t90 = 5460;

	t90 = (((x441|x442)*x443)==x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x445 = INT16_MIN;
	int64_t x446 = -1LL;
	int16_t x447 = 2807;
	static volatile int32_t x448 = INT32_MAX;
	static int32_t t91 = -21;

	t91 = (((x445|x446)*x447)==x448);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x458 = INT16_MIN;
	volatile uint8_t x459 = UINT8_MAX;

	t92 = (((x457|x458)*x459)==x460);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x462 = 3;
	int64_t x464 = INT64_MIN;
	int32_t t93 = 2750;

	t93 = (((x461|x462)*x463)==x464);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x465 = INT16_MIN;
	volatile int32_t x466 = INT32_MIN;
	volatile int16_t x467 = -1;
	int8_t x468 = INT8_MIN;

	t94 = (((x465|x466)*x467)==x468);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x469 = 4490208289343337988LLU;
	int8_t x470 = -17;
	uint32_t x471 = 4U;
	uint32_t x472 = UINT32_MAX;
	int32_t t95 = -21363993;

	t95 = (((x469|x470)*x471)==x472);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x473 = 9LL;
	static volatile uint32_t x475 = 5U;

	t96 = (((x473|x474)*x475)==x476);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x478 = -1726LL;
	uint32_t x479 = UINT32_MAX;
	static int8_t x480 = INT8_MIN;
	volatile int32_t t97 = -1;

	t97 = (((x477|x478)*x479)==x480);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = INT16_MIN;
	uint32_t x486 = UINT32_MAX;
	volatile uint16_t x487 = UINT16_MAX;
	int32_t x488 = 10;
	int32_t t98 = 352990529;

	t98 = (((x485|x486)*x487)==x488);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x489 = -676127377LL;
	uint8_t x490 = UINT8_MAX;
	int16_t x491 = -822;
	int64_t x492 = 344345038LL;
	int32_t t99 = 74933645;

	t99 = (((x489|x490)*x491)==x492);

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

