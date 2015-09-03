#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 234286889;
volatile int8_t x5 = INT8_MIN;
static int64_t x10 = INT64_MAX;
volatile int64_t x15 = -1LL;
int32_t x19 = INT32_MIN;
volatile int16_t x20 = INT16_MIN;
volatile int8_t x25 = INT8_MIN;
static int32_t x27 = INT32_MAX;
int8_t x39 = INT8_MIN;
volatile int16_t x41 = -102;
int64_t x55 = 2715LL;
static int64_t x56 = INT64_MIN;
int32_t x59 = INT32_MIN;
int64_t x60 = INT64_MIN;
uint8_t x62 = 0U;
int8_t x68 = 53;
static int16_t x71 = 21;
int8_t x73 = INT8_MIN;
static uint16_t x78 = UINT16_MAX;
volatile int16_t x79 = INT16_MAX;
int64_t x80 = -1LL;
static int32_t t20 = 1042103239;
static uint32_t x93 = UINT32_MAX;
int64_t x95 = -6236LL;
static uint32_t x104 = UINT32_MAX;
static int64_t x105 = INT64_MAX;
volatile int8_t x106 = INT8_MIN;
static volatile int32_t x109 = -28;
int8_t x110 = INT8_MIN;
static int64_t t25 = -10788982286LL;
int32_t x120 = INT32_MIN;
int64_t x129 = INT64_MIN;
volatile int8_t x133 = INT8_MAX;
volatile int32_t t31 = 1384;
int8_t x156 = 18;
volatile uint8_t x158 = 2U;
int64_t x166 = 0LL;
int16_t x171 = -1;
static uint8_t x177 = 2U;
static int16_t x178 = -1;
int32_t t40 = 112943245;
int8_t x185 = INT8_MIN;
int16_t x187 = INT16_MAX;
uint64_t x188 = 112208LLU;
int8_t x192 = -1;
volatile uint8_t x194 = 14U;
volatile int64_t x195 = -200089907948664LL;
int16_t x197 = -3;
int32_t x198 = INT32_MAX;
volatile uint16_t x206 = 5733U;
static int32_t x208 = INT32_MIN;
int16_t x213 = -1;
static int8_t x216 = INT8_MIN;
static int32_t t50 = 66963669;
uint8_t x225 = UINT8_MAX;
static int8_t x226 = 3;
volatile uint32_t x233 = 230U;
int64_t x243 = INT64_MIN;
int16_t x244 = 490;
int64_t x245 = INT64_MAX;
volatile int8_t x246 = INT8_MAX;
uint8_t x248 = 31U;
volatile uint16_t x251 = 453U;
int64_t x252 = INT64_MIN;
uint64_t x253 = UINT64_MAX;
volatile int64_t x255 = INT64_MIN;
int8_t x256 = INT8_MIN;
static volatile int64_t t58 = 3088712LL;
int16_t x258 = 1563;
int16_t x263 = -1;
volatile int8_t x264 = INT8_MIN;
int32_t x271 = -1;
int64_t t62 = 41448855162720346LL;
int8_t x279 = INT8_MAX;
int16_t x287 = -1;
static int8_t x293 = INT8_MAX;
static int64_t x294 = INT64_MAX;
volatile int32_t t68 = 32864;
volatile int32_t t69 = 36595;
volatile int8_t x303 = -1;
int64_t x305 = 3LL;
int64_t x308 = -94350LL;
uint16_t x313 = UINT16_MAX;
int64_t x318 = -1LL;
volatile int32_t x322 = INT32_MIN;
volatile uint64_t x327 = 6746669982628713859LLU;
volatile uint64_t t76 = 1LLU;
uint16_t x329 = 22288U;
int64_t t77 = -273253659594104734LL;
int8_t x337 = INT8_MAX;
int8_t x342 = INT8_MAX;
static int64_t x343 = INT64_MAX;
uint32_t x348 = 29U;
int8_t x352 = INT8_MIN;
int64_t x362 = -1LL;
int16_t x370 = INT16_MIN;
uint8_t x371 = 3U;
int8_t x372 = INT8_MIN;
int32_t x381 = -1;
uint32_t x382 = UINT32_MAX;
int64_t x388 = INT64_MIN;
static int32_t x397 = INT32_MIN;
uint64_t x399 = 118672LLU;
int16_t x400 = 3;
int8_t x404 = 44;
int8_t x407 = 0;
volatile int64_t x412 = -488650997LL;
static volatile uint32_t x414 = 130317U;
uint8_t x420 = 61U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int32_t x2 = INT32_MIN;
	int16_t x3 = INT16_MAX;
	volatile int32_t x4 = INT32_MIN;

	t0 = (((x1<x2)*x3)%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = -4;
	static uint32_t x7 = UINT32_MAX;
	static int64_t x8 = -1680249708328LL;
	int64_t t1 = -2727LL;

	t1 = (((x5<x6)*x7)%x8);

	if (t1 != 4294967295LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 1471013341U;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = 2U;
	int32_t t2 = 2;

	t2 = (((x9<x10)*x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = INT32_MIN;
	volatile int16_t x14 = INT16_MAX;
	volatile uint64_t x16 = 32246076324598614LLU;
	uint64_t t3 = 1257LLU;

	t3 = (((x13<x14)*x15)%x16);

	if (t3 != 1988416039144407LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -6970;
	static int8_t x18 = -1;
	int32_t t4 = 715182;

	t4 = (((x17<x18)*x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x21 = 483362U;
	int16_t x22 = -1;
	static int16_t x23 = INT16_MIN;
	int32_t x24 = -43;
	static int32_t t5 = 781793;

	t5 = (((x21<x22)*x23)%x24);

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	int8_t x28 = -14;
	int32_t t6 = 100016817;

	t6 = (((x25<x26)*x27)%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 39417323644052LL;
	int16_t x30 = INT16_MAX;
	uint64_t x31 = 33675690192LLU;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 215954984LLU;

	t7 = (((x29<x30)*x31)%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x34 = -1;
	static volatile int8_t x35 = -56;
	volatile uint64_t x36 = 127756302LLU;
	static uint64_t t8 = 870949LLU;

	t8 = (((x33<x34)*x35)%x36);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -7373;
	int16_t x38 = INT16_MIN;
	static volatile int32_t x40 = -6520423;
	static int32_t t9 = 10070287;

	t9 = (((x37<x38)*x39)%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 1637U;
	int64_t x43 = 1LL;
	uint32_t x44 = 26068U;
	volatile int64_t t10 = -4577880758LL;

	t10 = (((x41<x42)*x43)%x44);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = -15;
	static int64_t x48 = -2867775560439LL;
	static int64_t t11 = 1LL;

	t11 = (((x45<x46)*x47)%x48);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	uint16_t x50 = UINT16_MAX;
	uint32_t x51 = 911U;
	volatile int32_t x52 = -1;
	uint32_t t12 = 455952263U;

	t12 = (((x49<x50)*x51)%x52);

	if (t12 != 911U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x53 = 238475U;
	uint16_t x54 = UINT16_MAX;
	int64_t t13 = 22318000551479774LL;

	t13 = (((x53<x54)*x55)%x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -1LL;
	int16_t x58 = INT16_MIN;
	int64_t t14 = 2LL;

	t14 = (((x57<x58)*x59)%x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 638LLU;
	int16_t x63 = INT16_MAX;
	int8_t x64 = 1;
	volatile int32_t t15 = -67;

	t15 = (((x61<x62)*x63)%x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = 73U;
	int64_t x67 = INT64_MIN;
	volatile int64_t t16 = 578359LL;

	t16 = (((x65<x66)*x67)%x68);

	if (t16 != -34LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x69 = 1821351U;
	volatile int16_t x70 = 3;
	volatile uint16_t x72 = 2U;
	volatile int32_t t17 = 1946554;

	t17 = (((x69<x70)*x71)%x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x74 = 1679280U;
	uint64_t x75 = UINT64_MAX;
	int8_t x76 = -1;
	static volatile uint64_t t18 = 4586986623197LLU;

	t18 = (((x73<x74)*x75)%x76);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 153928422265LLU;
	int64_t t19 = 98396086336LL;

	t19 = (((x77<x78)*x79)%x80);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 85U;
	volatile int32_t x86 = INT32_MIN;
	volatile int8_t x87 = INT8_MIN;
	int16_t x88 = 1851;

	t20 = (((x85<x86)*x87)%x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x94 = UINT32_MAX;
	static int8_t x96 = -54;
	static int64_t t21 = -1997211248761482539LL;

	t21 = (((x93<x94)*x95)%x96);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MIN;
	uint16_t x102 = UINT16_MAX;
	int8_t x103 = INT8_MAX;
	volatile uint32_t t22 = 581204U;

	t22 = (((x101<x102)*x103)%x104);

	if (t22 != 127U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x107 = INT64_MIN;
	static int64_t x108 = 8451839LL;
	static volatile int64_t t23 = -1516948815559373909LL;

	t23 = (((x105<x106)*x107)%x108);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x111 = -360;
	static int8_t x112 = INT8_MAX;
	int32_t t24 = -37441699;

	t24 = (((x109<x110)*x111)%x112);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x113 = 1445931574U;
	int16_t x114 = INT16_MAX;
	int64_t x115 = INT64_MAX;
	volatile int8_t x116 = -16;

	t25 = (((x113<x114)*x115)%x116);

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	static int64_t x119 = INT64_MAX;
	int64_t t26 = 2157504663LL;

	t26 = (((x117<x118)*x119)%x120);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = 5063U;
	int8_t x122 = -1;
	volatile int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MIN;
	volatile int32_t t27 = -5158;

	t27 = (((x121<x122)*x123)%x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x130 = 0;
	uint8_t x131 = 103U;
	uint32_t x132 = 666075293U;
	uint32_t t28 = 16676397U;

	t28 = (((x129<x130)*x131)%x132);

	if (t28 != 103U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	static volatile int8_t x136 = -2;
	static uint64_t t29 = 108572149123257876LLU;

	t29 = (((x133<x134)*x135)%x136);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x137 = INT64_MIN;
	int64_t x138 = INT64_MIN;
	static int16_t x139 = INT16_MAX;
	int16_t x140 = INT16_MAX;
	volatile int32_t t30 = -62777250;

	t30 = (((x137<x138)*x139)%x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = 9381;
	uint16_t x142 = UINT16_MAX;
	int16_t x143 = -1;
	static uint16_t x144 = 122U;

	t31 = (((x141<x142)*x143)%x144);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x145 = 16096375;
	int32_t x146 = INT32_MIN;
	int32_t x147 = INT32_MIN;
	static int16_t x148 = INT16_MIN;
	volatile int32_t t32 = -61800843;

	t32 = (((x145<x146)*x147)%x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = 4740129137816766LL;
	volatile int64_t x150 = INT64_MIN;
	uint64_t x151 = 85401LLU;
	static int8_t x152 = INT8_MAX;
	uint64_t t33 = 21304305557801332LLU;

	t33 = (((x149<x150)*x151)%x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = 2257082835LLU;
	int64_t x154 = -1LL;
	int8_t x155 = INT8_MIN;
	volatile int32_t t34 = 1042717911;

	t34 = (((x153<x154)*x155)%x156);

	if (t34 != -2) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = -3;
	uint8_t x159 = 1U;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t35 = 2085909954176594LLU;

	t35 = (((x157<x158)*x159)%x160);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	int32_t x162 = INT32_MIN;
	uint8_t x163 = 6U;
	int64_t x164 = INT64_MIN;
	static int64_t t36 = 111100460559226929LL;

	t36 = (((x161<x162)*x163)%x164);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -1;
	int16_t x167 = 3;
	int16_t x168 = 751;
	static int32_t t37 = -1072;

	t37 = (((x165<x166)*x167)%x168);

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x169 = -12096;
	int8_t x170 = INT8_MIN;
	int64_t x172 = INT64_MIN;
	int64_t t38 = 803590047778744LL;

	t38 = (((x169<x170)*x171)%x172);

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x173 = INT64_MIN;
	static int64_t x174 = -1LL;
	static int16_t x175 = -1;
	uint32_t x176 = 90U;
	uint32_t t39 = 115995883U;

	t39 = (((x173<x174)*x175)%x176);

	if (t39 != 75U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x179 = INT16_MAX;
	static uint8_t x180 = 127U;

	t40 = (((x177<x178)*x179)%x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x182 = 11611;
	uint16_t x183 = 113U;
	int64_t x184 = INT64_MAX;
	int64_t t41 = -8115927LL;

	t41 = (((x181<x182)*x183)%x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x186 = INT8_MIN;
	volatile uint64_t t42 = 40LLU;

	t42 = (((x185<x186)*x187)%x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x189 = 3U;
	int8_t x190 = INT8_MIN;
	volatile int32_t x191 = INT32_MIN;
	int32_t t43 = -1;

	t43 = (((x189<x190)*x191)%x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 247U;
	int8_t x196 = -1;
	int64_t t44 = 4637760861LL;

	t44 = (((x193<x194)*x195)%x196);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	volatile uint32_t t45 = 61745U;

	t45 = (((x197<x198)*x199)%x200);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MAX;
	int16_t x202 = -6499;
	int32_t x203 = -1;
	uint32_t x204 = 5U;
	volatile uint32_t t46 = 0U;

	t46 = (((x201<x202)*x203)%x204);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = 2U;
	static uint8_t x207 = UINT8_MAX;
	int32_t t47 = -13768;

	t47 = (((x205<x206)*x207)%x208);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x214 = INT8_MAX;
	int8_t x215 = INT8_MIN;
	int32_t t48 = -3;

	t48 = (((x213<x214)*x215)%x216);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x217 = -1;
	int8_t x218 = INT8_MIN;
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MAX;
	volatile int64_t t49 = 4497396009LL;

	t49 = (((x217<x218)*x219)%x220);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x221 = INT64_MAX;
	int16_t x222 = INT16_MIN;
	static volatile int32_t x223 = 11;
	int16_t x224 = -1;

	t50 = (((x221<x222)*x223)%x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x227 = -11;
	static volatile uint32_t x228 = UINT32_MAX;
	volatile uint32_t t51 = 17U;

	t51 = (((x225<x226)*x227)%x228);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x229 = INT64_MIN;
	uint8_t x230 = 52U;
	uint32_t x231 = 0U;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t52 = 25U;

	t52 = (((x229<x230)*x231)%x232);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x234 = 429;
	int32_t x235 = -1;
	volatile int32_t x236 = -1;
	volatile int32_t t53 = 0;

	t53 = (((x233<x234)*x235)%x236);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x237 = -1;
	volatile int8_t x238 = INT8_MIN;
	uint16_t x239 = UINT16_MAX;
	static int16_t x240 = 187;
	static volatile int32_t t54 = -394338204;

	t54 = (((x237<x238)*x239)%x240);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	static int32_t x242 = 57797293;
	volatile int64_t t55 = 0LL;

	t55 = (((x241<x242)*x243)%x244);

	if (t55 != -148LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x247 = 68689350U;
	uint32_t t56 = 315U;

	t56 = (((x245<x246)*x247)%x248);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x249 = 51617623U;
	int64_t x250 = 221116448613810805LL;
	static int64_t t57 = 1578437LL;

	t57 = (((x249<x250)*x251)%x252);

	if (t57 != 453LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x254 = UINT8_MAX;

	t58 = (((x253<x254)*x255)%x256);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x257 = UINT16_MAX;
	static volatile uint64_t x259 = 91LLU;
	int64_t x260 = -8458751088714867LL;
	uint64_t t59 = 958830994LLU;

	t59 = (((x257<x258)*x259)%x260);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x261 = 3;
	volatile int64_t x262 = -1LL;
	volatile int32_t t60 = 808456946;

	t60 = (((x261<x262)*x263)%x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 7239057;
	int16_t x266 = -1;
	int8_t x267 = -1;
	uint32_t x268 = 13397634U;
	uint32_t t61 = 18U;

	t61 = (((x265<x266)*x267)%x268);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = INT8_MAX;
	uint32_t x270 = 0U;
	int64_t x272 = 750809936361LL;

	t62 = (((x269<x270)*x271)%x272);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x273 = 2242829623739795050LLU;
	int8_t x274 = INT8_MAX;
	static volatile int8_t x275 = 3;
	static int32_t x276 = 2165;
	int32_t t63 = -9832;

	t63 = (((x273<x274)*x275)%x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1462;
	int64_t x278 = 38LL;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t64 = -8;

	t64 = (((x277<x278)*x279)%x280);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x281 = UINT16_MAX;
	uint32_t x282 = 481829540U;
	int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MIN;
	int32_t t65 = -16;

	t65 = (((x281<x282)*x283)%x284);

	if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = INT32_MIN;
	static volatile uint32_t x288 = 14319627U;
	volatile uint32_t t66 = 6351157U;

	t66 = (((x285<x286)*x287)%x288);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x289 = UINT16_MAX;
	int64_t x290 = INT64_MAX;
	uint32_t x291 = UINT32_MAX;
	int16_t x292 = 499;
	static uint32_t t67 = 5998899U;

	t67 = (((x289<x290)*x291)%x292);

	if (t67 != 443U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x295 = INT8_MIN;
	static int16_t x296 = 5370;

	t68 = (((x293<x294)*x295)%x296);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x297 = -1452;
	int16_t x298 = INT16_MAX;
	uint16_t x299 = UINT16_MAX;
	volatile int8_t x300 = INT8_MIN;

	t69 = (((x297<x298)*x299)%x300);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x301 = UINT8_MAX;
	static int16_t x302 = 6;
	int8_t x304 = INT8_MIN;
	int32_t t70 = 1;

	t70 = (((x301<x302)*x303)%x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MAX;
	static int64_t t71 = 1LL;

	t71 = (((x305<x306)*x307)%x308);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = INT8_MAX;
	volatile int32_t x310 = INT32_MIN;
	int16_t x311 = INT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t72 = 1904070726U;

	t72 = (((x309<x310)*x311)%x312);

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x314 = 1U;
	int16_t x315 = INT16_MIN;
	volatile int8_t x316 = 43;
	int32_t t73 = -111;

	t73 = (((x313<x314)*x315)%x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x317 = 1986U;
	volatile int8_t x319 = INT8_MIN;
	int8_t x320 = INT8_MIN;
	volatile int32_t t74 = 323;

	t74 = (((x317<x318)*x319)%x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x321 = 87U;
	volatile uint16_t x323 = UINT16_MAX;
	static uint8_t x324 = 27U;
	int32_t t75 = 857436744;

	t75 = (((x321<x322)*x323)%x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = 11;
	static int32_t x326 = INT32_MIN;
	int8_t x328 = 10;

	t76 = (((x325<x326)*x327)%x328);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x330 = INT16_MAX;
	int64_t x331 = 499LL;
	volatile uint16_t x332 = UINT16_MAX;

	t77 = (((x329<x330)*x331)%x332);

	if (t77 != 499LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x333 = 1;
	volatile int32_t x334 = -1;
	uint64_t x335 = UINT64_MAX;
	int64_t x336 = INT64_MIN;
	static uint64_t t78 = 2LLU;

	t78 = (((x333<x334)*x335)%x336);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x338 = UINT64_MAX;
	static int16_t x339 = 100;
	volatile int16_t x340 = 7949;
	volatile int32_t t79 = 0;

	t79 = (((x337<x338)*x339)%x340);

	if (t79 != 100) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	int64_t x344 = INT64_MAX;
	volatile int64_t t80 = -2866154055261LL;

	t80 = (((x341<x342)*x343)%x344);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x345 = INT16_MIN;
	int64_t x346 = 5LL;
	int16_t x347 = INT16_MIN;
	static volatile uint32_t t81 = 19U;

	t81 = (((x345<x346)*x347)%x348);

	if (t81 != 18U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = INT16_MIN;
	volatile int64_t x350 = INT64_MIN;
	static uint32_t x351 = 2292U;
	uint32_t t82 = 19U;

	t82 = (((x349<x350)*x351)%x352);

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x353 = 17U;
	int16_t x354 = -12975;
	int64_t x355 = -1LL;
	int16_t x356 = 326;
	volatile int64_t t83 = 101LL;

	t83 = (((x353<x354)*x355)%x356);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x357 = 309;
	volatile uint32_t x358 = 9479U;
	int64_t x359 = INT64_MIN;
	int32_t x360 = -58708899;
	int64_t t84 = 1783893LL;

	t84 = (((x357<x358)*x359)%x360);

	if (t84 != -41592446LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = INT16_MIN;
	volatile int8_t x363 = 8;
	uint32_t x364 = 88696543U;
	volatile uint32_t t85 = 0U;

	t85 = (((x361<x362)*x363)%x364);

	if (t85 != 8U) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x365 = -1;
	uint64_t x366 = 10LLU;
	static int16_t x367 = INT16_MIN;
	int16_t x368 = -1;
	volatile int32_t t86 = -2239260;

	t86 = (((x365<x366)*x367)%x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x369 = UINT32_MAX;
	static int32_t t87 = 47447049;

	t87 = (((x369<x370)*x371)%x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = 372849900633LL;
	static int16_t x374 = INT16_MIN;
	int32_t x375 = 1100;
	uint8_t x376 = 5U;
	int32_t t88 = -11;

	t88 = (((x373<x374)*x375)%x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x377 = 2630902803054756LLU;
	volatile int32_t x378 = 56;
	int8_t x379 = INT8_MIN;
	volatile uint32_t x380 = UINT32_MAX;
	uint32_t t89 = 6U;

	t89 = (((x377<x378)*x379)%x380);

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x383 = -1;
	int16_t x384 = INT16_MAX;
	int32_t t90 = -358;

	t90 = (((x381<x382)*x383)%x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = 230104;
	volatile int8_t x387 = 2;
	int64_t t91 = 27311485314LL;

	t91 = (((x385<x386)*x387)%x388);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MIN;
	int8_t x390 = -20;
	int8_t x391 = -1;
	int32_t x392 = -8;
	static volatile int32_t t92 = 1;

	t92 = (((x389<x390)*x391)%x392);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint32_t x393 = UINT32_MAX;
	int32_t x394 = INT32_MIN;
	volatile uint16_t x395 = UINT16_MAX;
	int32_t x396 = -1;
	int32_t t93 = 180823;

	t93 = (((x393<x394)*x395)%x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x398 = INT32_MAX;
	uint64_t t94 = 92912377LLU;

	t94 = (((x397<x398)*x399)%x400);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x401 = 79U;
	static int64_t x402 = 426546804LL;
	int64_t x403 = -1LL;
	volatile int64_t t95 = 95685LL;

	t95 = (((x401<x402)*x403)%x404);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 58701870U;
	int8_t x406 = 0;
	int16_t x408 = -1;
	volatile int32_t t96 = 45;

	t96 = (((x405<x406)*x407)%x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x409 = 29370U;
	static int64_t x410 = INT64_MAX;
	int64_t x411 = -7638284LL;
	int64_t t97 = 135441LL;

	t97 = (((x409<x410)*x411)%x412);

	if (t97 != -7638284LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x413 = 528812652LLU;
	volatile int64_t x415 = INT64_MIN;
	volatile int64_t x416 = -1LL;
	static int64_t t98 = -982176605LL;

	t98 = (((x413<x414)*x415)%x416);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x417 = 483U;
	uint32_t x418 = 1U;
	static uint32_t x419 = UINT32_MAX;
	static volatile uint32_t t99 = 150001U;

	t99 = (((x417<x418)*x419)%x420);

	if (t99 != 0U) { NG(); } else { ; }
	
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

