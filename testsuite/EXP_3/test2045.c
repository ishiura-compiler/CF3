#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -231;
int64_t x7 = -100107201578047639LL;
int8_t x17 = -1;
static uint32_t x19 = 13511U;
int32_t x20 = -780892;
static volatile int8_t x27 = INT8_MIN;
volatile int64_t t4 = 4LL;
volatile int16_t x37 = -1;
uint32_t x40 = 0U;
volatile int64_t t9 = -3061LL;
int64_t x56 = INT64_MIN;
int64_t x57 = -1LL;
uint16_t x84 = 276U;
volatile uint64_t t14 = 497451LLU;
volatile int16_t x85 = INT16_MAX;
int64_t x91 = INT64_MAX;
uint64_t x93 = 68302043198LLU;
volatile uint32_t x102 = UINT32_MAX;
uint8_t x103 = 15U;
volatile uint16_t x105 = UINT16_MAX;
uint64_t x111 = 1392172479794888LLU;
volatile uint64_t t22 = 2523252743103941544LLU;
volatile uint64_t t23 = 6440223578LLU;
int32_t t25 = 65534;
int16_t x148 = -1;
uint16_t x150 = UINT16_MAX;
int16_t x174 = INT16_MAX;
static volatile int64_t x184 = -43LL;
int16_t x192 = INT16_MIN;
volatile int16_t x202 = INT16_MAX;
static volatile int64_t t39 = 16527049456085871LL;
uint16_t x217 = 106U;
static volatile int64_t x228 = INT64_MIN;
volatile int16_t x229 = INT16_MIN;
volatile int32_t x230 = INT32_MIN;
int16_t x253 = -1;
static volatile int64_t t50 = 544966578LL;
static uint64_t t51 = 11415412280LLU;
volatile uint8_t x263 = 1U;
volatile int64_t t53 = -2417666LL;
int32_t x270 = -1;
volatile uint8_t x290 = UINT8_MAX;
static int32_t x292 = -1;
volatile uint16_t x301 = 2U;
uint32_t x314 = UINT32_MAX;
volatile uint32_t x322 = 2818U;
int64_t x337 = -1LL;
volatile int32_t x338 = -78265573;
int8_t x341 = -1;
int32_t x342 = 0;
static volatile int32_t x343 = INT32_MIN;
int8_t x347 = -1;
static int64_t t69 = -217631857170325LL;
uint32_t x349 = 29125U;
int16_t x352 = INT16_MAX;
volatile int64_t t71 = 115006LL;
uint8_t x363 = UINT8_MAX;
static int64_t x366 = -1LL;
volatile int64_t t76 = -713910653906822LL;
int16_t x379 = 0;
static int32_t x380 = -6668;
volatile uint64_t t77 = 462097931855184LLU;
uint64_t x388 = UINT64_MAX;
volatile uint64_t x393 = UINT64_MAX;
static int64_t x398 = -221LL;
uint64_t t82 = 27130LLU;
uint64_t x405 = 308558543661732LLU;
static uint16_t x406 = UINT16_MAX;
uint32_t x409 = 119015U;
int64_t t85 = -404505763522273868LL;
int64_t x430 = -1LL;
volatile int64_t t87 = 598LL;
static int32_t x434 = INT32_MAX;
int32_t x435 = INT32_MAX;
int16_t x438 = INT16_MIN;
int32_t x445 = INT32_MIN;
uint16_t x449 = 0U;
static int32_t x450 = -39;
int16_t x457 = 44;
int8_t x460 = -1;
volatile uint64_t t94 = 25294266LLU;
static int8_t x475 = INT8_MIN;
volatile int64_t x479 = INT64_MIN;
volatile int64_t t98 = -24LL;
static volatile uint32_t t99 = 17316809U;


void f0(void) {
	uint8_t x1 = 10U;
	uint32_t x3 = 38831U;
	uint32_t x4 = 35U;
	uint32_t t0 = 17155U;

	t0 = ((x1-x2)/(x3^x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int64_t x6 = INT64_MIN;
	uint32_t x8 = UINT32_MAX;
	int64_t t1 = -1558446818794005LL;

	t1 = ((x5-x6)/(x7^x8));

	if (t1 != -92LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 95142993U;
	volatile int16_t x10 = INT16_MAX;
	uint8_t x11 = 94U;
	static int32_t x12 = 1739;
	static volatile uint32_t t2 = 1U;

	t2 = ((x9-x10)/(x11^x12));

	if (t2 != 56445U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x18 = 145870936U;
	volatile uint32_t t3 = 3853U;

	t3 = ((x17-x18)/(x19^x20));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = 3U;
	int16_t x26 = 20;
	int64_t x28 = -1LL;

	t4 = ((x25-x26)/(x27^x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = -13;
	volatile int16_t x31 = INT16_MAX;
	volatile int64_t x32 = -1LL;
	int64_t t5 = 160175350028522LL;

	t5 = ((x29-x30)/(x31^x32));

	if (t5 != 65535LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x38 = -1;
	uint8_t x39 = 3U;
	volatile uint32_t t6 = 3287409U;

	t6 = ((x37-x38)/(x39^x40));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = -8693;
	static int64_t x42 = -7LL;
	int64_t x43 = 201365LL;
	static uint64_t x44 = 100788LLU;
	uint64_t t7 = 722LLU;

	t7 = ((x41-x42)/(x43^x44));

	if (t7 != 108011500270571LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = 1603U;
	uint8_t x46 = UINT8_MAX;
	int16_t x47 = -7;
	uint16_t x48 = 2U;
	volatile int32_t t8 = -91394111;

	t8 = ((x45-x46)/(x47^x48));

	if (t8 != -269) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	static volatile int64_t x50 = -1LL;
	int32_t x51 = INT32_MIN;
	int8_t x52 = INT8_MAX;

	t9 = ((x49-x50)/(x51^x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x53 = UINT64_MAX;
	static volatile int32_t x54 = -1760341;
	int8_t x55 = INT8_MIN;
	static uint64_t t10 = 638LLU;

	t10 = ((x53-x54)/(x55^x56));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x58 = -1;
	static int16_t x59 = INT16_MAX;
	int16_t x60 = -2;
	volatile int64_t t11 = -1524940948253LL;

	t11 = ((x57-x58)/(x59^x60));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x65 = -1LL;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 353858442891LLU;
	uint32_t x68 = UINT32_MAX;
	uint64_t t12 = 160921486026LLU;

	t12 = ((x65-x66)/(x67^x68));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	int32_t x70 = 0;
	int32_t x71 = -98;
	int32_t x72 = INT32_MIN;
	int32_t t13 = -2;

	t13 = ((x69-x70)/(x71^x72));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x81 = UINT64_MAX;
	volatile int8_t x82 = INT8_MAX;
	int64_t x83 = INT64_MIN;

	t14 = ((x81-x82)/(x83^x84));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x86 = 50912261LLU;
	static int8_t x87 = INT8_MAX;
	uint32_t x88 = 2682U;
	uint64_t t15 = 32644709LLU;

	t15 = ((x85-x86)/(x87^x88));

	if (t15 != 7191713089145681LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = UINT8_MAX;
	uint32_t x90 = 1712U;
	volatile uint8_t x92 = 0U;
	int64_t t16 = -5070083047LL;

	t16 = ((x89-x90)/(x91^x92));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x94 = 1U;
	int64_t x95 = -1LL;
	uint32_t x96 = 781052U;
	volatile uint64_t t17 = 6055762LLU;

	t17 = ((x93-x94)/(x95^x96));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = -1;
	uint64_t x98 = UINT64_MAX;
	uint32_t x99 = UINT32_MAX;
	static int32_t x100 = INT32_MAX;
	volatile uint64_t t18 = 1072098004143088479LLU;

	t18 = ((x97-x98)/(x99^x100));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x101 = -6;
	static int8_t x104 = -54;
	static volatile uint32_t t19 = 1856297U;

	t19 = ((x101-x102)/(x103^x104));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x106 = UINT16_MAX;
	uint8_t x107 = 5U;
	int8_t x108 = INT8_MIN;
	volatile int32_t t20 = 3019119;

	t20 = ((x105-x106)/(x107^x108));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x109 = UINT16_MAX;
	int16_t x110 = 45;
	int8_t x112 = INT8_MIN;
	static uint64_t t21 = 6070150697212LLU;

	t21 = ((x109-x110)/(x111^x112));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MAX;
	uint64_t x115 = 14292396624198341LLU;
	uint32_t x116 = UINT32_MAX;

	t22 = ((x113-x114)/(x115^x116));

	if (t22 != 1290LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = INT8_MAX;
	uint64_t x118 = 30144832958LLU;
	int64_t x119 = INT64_MIN;
	uint16_t x120 = 12U;

	t23 = ((x117-x118)/(x119^x120));

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MAX;
	int64_t x122 = INT64_MAX;
	volatile uint16_t x123 = 29878U;
	uint32_t x124 = 1011918U;
	static int64_t t24 = -103LL;

	t24 = ((x121-x122)/(x123^x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MAX;
	volatile int8_t x127 = 35;
	uint8_t x128 = 0U;

	t25 = ((x125-x126)/(x127^x128));

	if (t25 != 1868) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x133 = 38U;
	static uint32_t x134 = UINT32_MAX;
	static int8_t x135 = INT8_MAX;
	volatile uint64_t x136 = UINT64_MAX;
	volatile uint64_t t26 = 51LLU;

	t26 = ((x133-x134)/(x135^x136));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x145 = UINT64_MAX;
	uint8_t x146 = 2U;
	uint64_t x147 = 8646210LLU;
	uint64_t t27 = 522741LLU;

	t27 = ((x145-x146)/(x147^x148));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x149 = -1;
	int16_t x151 = -836;
	volatile int8_t x152 = INT8_MIN;
	static volatile int32_t t28 = -47965;

	t28 = ((x149-x150)/(x151^x152));

	if (t28 != -79) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x153 = INT16_MAX;
	static int8_t x154 = INT8_MIN;
	static int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MAX;
	int32_t t29 = 100;

	t29 = ((x153-x154)/(x155^x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MAX;
	static int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	int64_t x160 = -10756914030LL;
	int64_t t30 = 63312828563320LL;

	t30 = ((x157-x158)/(x159^x160));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MAX;
	static int16_t x162 = INT16_MIN;
	static int32_t x163 = INT32_MAX;
	uint8_t x164 = 126U;
	volatile int32_t t31 = 0;

	t31 = ((x161-x162)/(x163^x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x169 = -1;
	int64_t x170 = 274637065475495548LL;
	static uint8_t x171 = 1U;
	int32_t x172 = -13397;
	static volatile int64_t t32 = -1LL;

	t32 = ((x169-x170)/(x171^x172));

	if (t32 != 20498362850835LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x173 = -53021777;
	uint16_t x175 = 769U;
	volatile uint64_t x176 = UINT64_MAX;
	volatile uint64_t t33 = 513LLU;

	t33 = ((x173-x174)/(x175^x176));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MIN;
	int16_t x178 = -10;
	volatile int16_t x179 = INT16_MAX;
	volatile int64_t x180 = -5121437275LL;
	int64_t t34 = 7656LL;

	t34 = ((x177-x178)/(x179^x180));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x181 = 376199;
	static uint8_t x182 = 9U;
	static volatile int16_t x183 = -9;
	volatile int64_t t35 = -14357945669LL;

	t35 = ((x181-x182)/(x183^x184));

	if (t35 != 11064LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x185 = 1;
	uint8_t x186 = 6U;
	uint64_t x187 = 13LLU;
	int8_t x188 = INT8_MAX;
	uint64_t t36 = 15354806697LLU;

	t36 = ((x185-x186)/(x187^x188));

	if (t36 != 161813544506224136LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x189 = -1;
	int8_t x190 = -1;
	int16_t x191 = -3;
	int32_t t37 = 1;

	t37 = ((x189-x190)/(x191^x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x197 = UINT8_MAX;
	uint32_t x198 = 57099U;
	volatile uint16_t x199 = 1U;
	static int64_t x200 = INT64_MAX;
	int64_t t38 = -5566134LL;

	t38 = ((x197-x198)/(x199^x200));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MIN;
	uint16_t x203 = 20U;
	static int64_t x204 = INT64_MAX;

	t39 = ((x201-x202)/(x203^x204));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MIN;
	uint16_t x207 = 302U;
	static int16_t x208 = 74;
	static uint64_t t40 = 893LLU;

	t40 = ((x205-x206)/(x207^x208));

	if (t40 != 92LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x209 = -18;
	static int8_t x210 = -1;
	uint64_t x211 = 2050LLU;
	volatile int32_t x212 = -1;
	uint64_t t41 = 5683975LLU;

	t41 = ((x209-x210)/(x211^x212));

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x218 = -1;
	volatile uint64_t x219 = 7LLU;
	volatile int32_t x220 = -440;
	static volatile uint64_t t42 = 29233405554798LLU;

	t42 = ((x217-x218)/(x219^x220));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = INT16_MAX;
	int16_t x222 = 703;
	int16_t x223 = 4726;
	uint8_t x224 = 15U;
	static volatile int32_t t43 = -1;

	t43 = ((x221-x222)/(x223^x224));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x225 = -1;
	int64_t x226 = -52903028089812LL;
	volatile uint8_t x227 = 6U;
	static volatile int64_t t44 = -1939LL;

	t44 = ((x225-x226)/(x227^x228));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x231 = INT8_MAX;
	int32_t x232 = INT32_MIN;
	int32_t t45 = 1220651;

	t45 = ((x229-x230)/(x231^x232));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x233 = 279U;
	int8_t x234 = 2;
	int16_t x235 = INT16_MIN;
	int64_t x236 = -98916LL;
	volatile int64_t t46 = 964LL;

	t46 = ((x233-x234)/(x235^x236));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x237 = -98965247;
	int8_t x238 = -1;
	int32_t x239 = 4;
	static int64_t x240 = -1LL;
	static int64_t t47 = -1556586LL;

	t47 = ((x237-x238)/(x239^x240));

	if (t47 != 19793049LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = -1;
	volatile uint16_t x246 = UINT16_MAX;
	int16_t x247 = 555;
	uint16_t x248 = 35U;
	int32_t t48 = -6;

	t48 = ((x245-x246)/(x247^x248));

	if (t48 != -126) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x249 = UINT32_MAX;
	uint64_t x250 = 247671LLU;
	int16_t x251 = 3587;
	static int16_t x252 = INT16_MIN;
	static volatile uint64_t t49 = 94800783LLU;

	t49 = ((x249-x250)/(x251^x252));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x254 = -1;
	static uint32_t x255 = 13U;
	int64_t x256 = -1LL;

	t50 = ((x253-x254)/(x255^x256));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = UINT64_MAX;
	static volatile int16_t x258 = -1;
	static volatile int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MIN;

	t51 = ((x257-x258)/(x259^x260));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x261 = 152U;
	int64_t x262 = INT64_MAX;
	int16_t x264 = -15;
	int64_t t52 = 2468943018190421LL;

	t52 = ((x261-x262)/(x263^x264));

	if (t52 != 576460752303423478LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x265 = -1435897751827LL;
	uint8_t x266 = 0U;
	volatile uint16_t x267 = 128U;
	int32_t x268 = -1;

	t53 = ((x265-x266)/(x267^x268));

	if (t53 != 11130990324LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x269 = -9;
	static volatile int32_t x271 = INT32_MIN;
	int8_t x272 = 0;
	static volatile int32_t t54 = -30103;

	t54 = ((x269-x270)/(x271^x272));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x273 = 12554;
	int8_t x274 = -2;
	static uint32_t x275 = 14735U;
	uint16_t x276 = 204U;
	uint32_t t55 = 9001U;

	t55 = ((x273-x274)/(x275^x276));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x277 = 66U;
	volatile int64_t x278 = -3074462260LL;
	uint8_t x279 = UINT8_MAX;
	uint8_t x280 = 42U;
	int64_t t56 = -11191631863LL;

	t56 = ((x277-x278)/(x279^x280));

	if (t56 != 14434095LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x285 = -1;
	int8_t x286 = INT8_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	int16_t x288 = 1411;
	volatile uint32_t t57 = 1990U;

	t57 = ((x285-x286)/(x287^x288));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x289 = 42;
	static volatile int8_t x291 = INT8_MAX;
	int32_t t58 = -213700651;

	t58 = ((x289-x290)/(x291^x292));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x293 = INT16_MIN;
	int8_t x294 = 3;
	volatile uint16_t x295 = 327U;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t59 = 48897U;

	t59 = ((x293-x294)/(x295^x296));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x302 = 28274U;
	static uint64_t x303 = UINT64_MAX;
	static int16_t x304 = -2514;
	volatile uint64_t t60 = 28LLU;

	t60 = ((x301-x302)/(x303^x304));

	if (t60 != 7340526889657589LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x305 = -1;
	uint64_t x306 = 53143282133326897LLU;
	uint16_t x307 = 9414U;
	static int16_t x308 = INT16_MIN;
	volatile uint64_t t61 = 1LLU;

	t61 = ((x305-x306)/(x307^x308));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x313 = 10224U;
	static volatile int64_t x315 = -1LL;
	int64_t x316 = INT64_MAX;
	int64_t t62 = 348311796571071944LL;

	t62 = ((x313-x314)/(x315^x316));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = 3U;
	int8_t x318 = 0;
	int32_t x319 = INT32_MAX;
	int8_t x320 = -1;
	volatile uint32_t t63 = 135461471U;

	t63 = ((x317-x318)/(x319^x320));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x321 = INT16_MIN;
	static int8_t x323 = -1;
	static int32_t x324 = INT32_MIN;
	uint32_t t64 = 1699474U;

	t64 = ((x321-x322)/(x323^x324));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x329 = -1;
	static int8_t x330 = 5;
	int8_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t65 = 31730;

	t65 = ((x329-x330)/(x331^x332));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = 3814775729295785818LL;
	uint16_t x334 = 1575U;
	int8_t x335 = 8;
	int16_t x336 = -1;
	int64_t t66 = -32698286LL;

	t66 = ((x333-x334)/(x335^x336));

	if (t66 != -423863969921753804LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x339 = -1;
	int32_t x340 = -10953;
	int64_t t67 = 14009062709LL;

	t67 = ((x337-x338)/(x339^x340));

	if (t67 != 7146LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x344 = -6347152660608707LL;
	volatile int64_t t68 = 43LL;

	t68 = ((x341-x342)/(x343^x344));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x345 = INT8_MAX;
	int64_t x346 = -515454244139LL;
	static int16_t x348 = -6571;

	t69 = ((x345-x346)/(x347^x348));

	if (t69 != 78455744LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x350 = 1U;
	static int16_t x351 = INT16_MIN;
	uint32_t t70 = 51U;

	t70 = ((x349-x350)/(x351^x352));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x353 = INT8_MIN;
	static int8_t x354 = INT8_MAX;
	int64_t x355 = 8274560LL;
	static volatile uint32_t x356 = 12231361U;

	t71 = ((x353-x354)/(x355^x356));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = 2426994303LLU;
	int32_t x359 = INT32_MAX;
	volatile int64_t x360 = INT64_MIN;
	uint64_t t72 = 64016LLU;

	t72 = ((x357-x358)/(x359^x360));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x361 = 444456764532160LL;
	volatile uint64_t x362 = 76987828483LLU;
	volatile int64_t x364 = 14496960686LL;
	volatile uint64_t t73 = 371LLU;

	t73 = ((x361-x362)/(x363^x364));

	if (t73 != 30653LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x365 = 15871U;
	int8_t x367 = -1;
	volatile int8_t x368 = INT8_MIN;
	volatile int64_t t74 = -11482076308LL;

	t74 = ((x365-x366)/(x367^x368));

	if (t74 != 124LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = INT16_MIN;
	int64_t x371 = INT64_MIN;
	static volatile int32_t x372 = -16;
	int64_t t75 = 413LL;

	t75 = ((x369-x370)/(x371^x372));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x373 = 47796740LL;
	volatile int16_t x374 = -1;
	int16_t x375 = 6897;
	int8_t x376 = INT8_MIN;

	t76 = ((x373-x374)/(x375^x376));

	if (t76 != -7029LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x377 = UINT32_MAX;
	uint64_t x378 = 7295LLU;

	t77 = ((x377-x378)/(x379^x380));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x386 = 3806LLU;
	uint64_t x387 = 2898460549478726797LLU;
	volatile uint64_t t78 = 436752591827014LLU;

	t78 = ((x385-x386)/(x387^x388));

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x389 = -5311;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = 288U;
	int64_t x392 = -1LL;
	int64_t t79 = -507LL;

	t79 = ((x389-x390)/(x391^x392));

	if (t79 != 17LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x394 = INT16_MIN;
	int8_t x395 = INT8_MAX;
	int64_t x396 = INT64_MIN;
	uint64_t t80 = 2242371226LLU;

	t80 = ((x393-x394)/(x395^x396));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = INT16_MIN;
	static int16_t x399 = -891;
	int32_t x400 = INT32_MIN;
	int64_t t81 = -97LL;

	t81 = ((x397-x398)/(x399^x400));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x401 = INT64_MIN;
	uint64_t x402 = 41253375947857641LLU;
	volatile int8_t x403 = INT8_MIN;
	int8_t x404 = -1;

	t82 = ((x401-x402)/(x403^x404));

	if (t82 != 72300146936274946LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x407 = 1U;
	int64_t x408 = INT64_MAX;
	uint64_t t83 = 11647442600228LLU;

	t83 = ((x405-x406)/(x407^x408));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x410 = UINT16_MAX;
	volatile uint16_t x411 = 19U;
	volatile int32_t x412 = INT32_MIN;
	volatile uint32_t t84 = 2013433U;

	t84 = ((x409-x410)/(x411^x412));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x413 = UINT8_MAX;
	int64_t x414 = -1LL;
	volatile int32_t x415 = INT32_MIN;
	volatile int32_t x416 = -745474;

	t85 = ((x413-x414)/(x415^x416));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x417 = 22U;
	volatile int32_t x418 = 642559;
	static int16_t x419 = 1;
	int16_t x420 = INT16_MAX;
	uint32_t t86 = 17960U;

	t86 = ((x417-x418)/(x419^x420));

	if (t86 != 131060U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x429 = INT16_MIN;
	volatile int64_t x431 = -979LL;
	static volatile int32_t x432 = 321603714;

	t87 = ((x429-x430)/(x431^x432));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x433 = 22U;
	int16_t x436 = INT16_MIN;
	int32_t t88 = -899974172;

	t88 = ((x433-x434)/(x435^x436));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x437 = 7U;
	int64_t x439 = -1LL;
	int8_t x440 = 3;
	volatile int64_t t89 = -6LL;

	t89 = ((x437-x438)/(x439^x440));

	if (t89 != -8193LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x441 = -1;
	int16_t x442 = -1;
	int8_t x443 = INT8_MIN;
	int64_t x444 = 1LL;
	int64_t t90 = 27930612192384283LL;

	t90 = ((x441-x442)/(x443^x444));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x446 = UINT32_MAX;
	static int8_t x447 = INT8_MIN;
	static int32_t x448 = INT32_MIN;
	static volatile uint32_t t91 = 53061U;

	t91 = ((x445-x446)/(x447^x448));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x451 = INT8_MIN;
	int8_t x452 = 0;
	int32_t t92 = -3594172;

	t92 = ((x449-x450)/(x451^x452));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x453 = 6748299414LLU;
	int16_t x454 = INT16_MIN;
	static int32_t x455 = -1;
	int16_t x456 = INT16_MIN;
	uint64_t t93 = 328092402LLU;

	t93 = ((x453-x454)/(x455^x456));

	if (t93 != 205949LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x458 = UINT64_MAX;
	int16_t x459 = 348;

	t94 = ((x457-x458)/(x459^x460));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x461 = 1LL;
	int16_t x462 = INT16_MAX;
	int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MAX;
	volatile int64_t t95 = 22890865802LL;

	t95 = ((x461-x462)/(x463^x464));

	if (t95 != 32766LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x469 = INT8_MAX;
	uint16_t x470 = 1U;
	volatile uint64_t x471 = UINT64_MAX;
	int64_t x472 = -893LL;
	volatile uint64_t t96 = 28136668720LLU;

	t96 = ((x469-x470)/(x471^x472));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x473 = 34394LLU;
	static uint64_t x474 = 1991946221LLU;
	int64_t x476 = INT64_MAX;
	uint64_t t97 = 57057881924931LLU;

	t97 = ((x473-x474)/(x475^x476));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint16_t x477 = UINT16_MAX;
	uint8_t x478 = 5U;
	int64_t x480 = INT64_MAX;

	t98 = ((x477-x478)/(x479^x480));

	if (t98 != -65530LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x481 = 1;
	uint32_t x482 = 5714U;
	static volatile uint16_t x483 = 1U;
	int8_t x484 = -1;

	t99 = ((x481-x482)/(x483^x484));

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

