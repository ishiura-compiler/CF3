#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = 141LLU;
int8_t x9 = INT8_MAX;
uint8_t x11 = 1U;
int32_t x12 = 41694992;
int8_t x13 = -1;
uint32_t t3 = 9U;
int32_t x20 = INT32_MIN;
volatile int32_t t4 = -3821;
int8_t x26 = INT8_MAX;
static int32_t x27 = 2057370;
static uint16_t x28 = UINT16_MAX;
int16_t x30 = -2746;
uint32_t x33 = 32U;
static int32_t x36 = 22745203;
volatile int64_t t8 = -28811943762856990LL;
volatile int8_t x47 = 16;
uint64_t x51 = UINT64_MAX;
int64_t x52 = -40127951486720542LL;
int32_t x58 = INT32_MAX;
uint16_t x79 = 23678U;
int16_t x80 = INT16_MIN;
uint16_t x83 = UINT16_MAX;
static uint32_t x84 = UINT32_MAX;
static int64_t x85 = INT64_MAX;
uint32_t x86 = 177218U;
static int16_t x87 = -1;
static int32_t x95 = INT32_MIN;
int32_t t20 = 597;
uint16_t x101 = UINT16_MAX;
int16_t x104 = INT16_MAX;
int8_t x106 = INT8_MAX;
int32_t x109 = -7212;
int64_t x110 = INT64_MIN;
int16_t x122 = INT16_MAX;
static int32_t t28 = 1;
int8_t x143 = 3;
static int64_t x152 = -1LL;
int8_t x155 = INT8_MIN;
static int64_t x156 = INT64_MIN;
int64_t t34 = 4793840472346916LL;
volatile uint32_t x167 = UINT32_MAX;
volatile int32_t t36 = -3927;
volatile uint16_t x182 = 0U;
int64_t x187 = INT64_MAX;
static volatile uint64_t x189 = UINT64_MAX;
static uint16_t x192 = 170U;
uint8_t x193 = UINT8_MAX;
int8_t x197 = -1;
uint8_t x198 = UINT8_MAX;
int64_t x201 = 1466047239LL;
static int8_t x203 = INT8_MAX;
int64_t t43 = -3633930297298LL;
int8_t x206 = INT8_MIN;
int16_t x209 = -183;
volatile int32_t x215 = INT32_MIN;
static int16_t x223 = INT16_MAX;
uint32_t x230 = 15058U;
int16_t x235 = -1;
static int8_t x237 = 7;
int16_t x240 = -2881;
int64_t x241 = -1LL;
int64_t x242 = INT64_MAX;
int8_t x243 = INT8_MIN;
static int64_t x248 = 4308539472387LL;
int32_t t55 = 1683;
static uint64_t t59 = 5622123757LLU;
volatile int8_t x269 = 5;
int16_t x270 = INT16_MIN;
int64_t x271 = -1LL;
uint32_t x273 = UINT32_MAX;
volatile int32_t x278 = -7;
uint16_t x286 = UINT16_MAX;
uint8_t x294 = UINT8_MAX;
uint32_t x296 = UINT32_MAX;
int32_t x301 = 21106;
int32_t t68 = -52;
uint8_t x317 = 6U;
uint64_t x321 = 95506051486LLU;
int32_t x329 = INT32_MIN;
int32_t t74 = 2797;
uint32_t x341 = 260248U;
int64_t x343 = -1LL;
volatile uint16_t x347 = UINT16_MAX;
int64_t x349 = INT64_MIN;
static int16_t x358 = 4;
static int64_t t82 = 10241079927747171LL;
uint8_t x384 = 28U;
volatile uint64_t x390 = UINT64_MAX;
static uint64_t t86 = 245765885LLU;
volatile int32_t x400 = -28;
uint8_t x401 = 84U;
int8_t x403 = INT8_MAX;
volatile uint16_t x405 = 6U;
int8_t x408 = -1;
int32_t t90 = -1;
uint8_t x422 = UINT8_MAX;
static int8_t x424 = INT8_MAX;
int32_t t94 = 22;
uint64_t x433 = UINT64_MAX;
uint32_t x436 = UINT32_MAX;
int32_t x438 = 1641653;
uint8_t x441 = 85U;
static int64_t x444 = INT64_MAX;
volatile int16_t x445 = -1;
static int64_t x446 = -1LL;
volatile uint8_t x447 = UINT8_MAX;
volatile int64_t t99 = 253278246270LL;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static int32_t x3 = INT32_MIN;
	volatile int8_t x4 = 36;
	uint64_t t0 = 2300342185731945LLU;

	t0 = ((x1-x2)*(x3<=x4));

	if (t0 != 18446744073709518707LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int8_t x6 = -2;
	int32_t x7 = INT32_MIN;
	volatile int16_t x8 = -1;
	volatile int32_t t1 = 33999953;

	t1 = ((x5-x6)*(x7<=x8));

	if (t1 != -2147483646) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MIN;
	volatile int32_t t2 = 160530;

	t2 = ((x9-x10)*(x11<=x12));

	if (t2 != 32895) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = UINT32_MAX;
	int64_t x15 = 56LL;
	static int8_t x16 = 1;

	t3 = ((x13-x14)*(x15<=x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 216983973;
	volatile int16_t x18 = -1;
	uint8_t x19 = 2U;

	t4 = ((x17-x18)*(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = INT16_MIN;
	volatile int32_t t5 = 937528;

	t5 = ((x25-x26)*(x27<=x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -1;
	static int16_t x31 = INT16_MIN;
	volatile int32_t x32 = -29777;
	static volatile int32_t t6 = 348;

	t6 = ((x29-x30)*(x31<=x32));

	if (t6 != 2745) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = UINT32_MAX;
	volatile int8_t x35 = INT8_MIN;
	volatile uint32_t t7 = 6U;

	t7 = ((x33-x34)*(x35<=x36));

	if (t7 != 33U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = INT8_MIN;
	volatile int64_t x42 = -1LL;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 95U;

	t8 = ((x41-x42)*(x43<=x44));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 17U;
	uint16_t x46 = 11023U;
	int64_t x48 = -222LL;
	int32_t t9 = -31;

	t9 = ((x45-x46)*(x47<=x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = 8U;
	static int32_t t10 = 4075898;

	t10 = ((x49-x50)*(x51<=x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x53 = UINT64_MAX;
	static int16_t x54 = -7284;
	volatile uint32_t x55 = 0U;
	int32_t x56 = INT32_MIN;
	static uint64_t t11 = 2265682LLU;

	t11 = ((x53-x54)*(x55<=x56));

	if (t11 != 7283LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = 27556881778559333LLU;
	int8_t x59 = -1;
	static int16_t x60 = -1;
	uint64_t t12 = 4321658411496LLU;

	t12 = ((x57-x58)*(x59<=x60));

	if (t12 != 27556879631075686LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MIN;
	int16_t x63 = INT16_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int64_t t13 = -152245471581636124LL;

	t13 = ((x61-x62)*(x63<=x64));

	if (t13 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x69 = INT32_MIN;
	int16_t x70 = -376;
	int32_t x71 = -1;
	volatile int32_t x72 = INT32_MIN;
	int32_t t14 = 4714;

	t14 = ((x69-x70)*(x71<=x72));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -3;
	static int8_t x74 = INT8_MIN;
	static uint32_t x75 = 238U;
	int64_t x76 = INT64_MAX;
	volatile int32_t t15 = 102;

	t15 = ((x73-x74)*(x75<=x76));

	if (t15 != 125) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 255U;
	volatile int8_t x78 = INT8_MAX;
	int32_t t16 = -87985;

	t16 = ((x77-x78)*(x79<=x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	int8_t x82 = -1;
	int32_t t17 = -603;

	t17 = ((x81-x82)*(x83<=x84));

	if (t17 != 65536) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x88 = -1;
	int64_t t18 = 1LL;

	t18 = ((x85-x86)*(x87<=x88));

	if (t18 != 9223372036854598589LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = -1;
	static int16_t x90 = INT16_MAX;
	static int32_t x91 = -71228;
	uint8_t x92 = UINT8_MAX;
	int32_t t19 = -20941345;

	t19 = ((x89-x90)*(x91<=x92));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = INT16_MAX;
	volatile int16_t x94 = -332;
	volatile uint64_t x96 = 186LLU;

	t20 = ((x93-x94)*(x95<=x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x102 = 351609LLU;
	int32_t x103 = 95;
	uint64_t t21 = 1316645589099646LLU;

	t21 = ((x101-x102)*(x103<=x104));

	if (t21 != 18446744073709265542LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -30964498;
	volatile uint32_t x107 = UINT32_MAX;
	int8_t x108 = 3;
	static int32_t t22 = -977;

	t22 = ((x105-x106)*(x107<=x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x111 = UINT32_MAX;
	static int16_t x112 = -884;
	int64_t t23 = -109821905194LL;

	t23 = ((x109-x110)*(x111<=x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = INT32_MAX;
	volatile uint32_t x114 = 4108U;
	int8_t x115 = -1;
	int64_t x116 = INT64_MIN;
	static uint32_t t24 = 519U;

	t24 = ((x113-x114)*(x115<=x116));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = -1;
	int64_t x118 = INT64_MIN;
	int64_t x119 = -3305418762479334743LL;
	volatile int64_t x120 = -1LL;
	static int64_t t25 = INT64_MAX;

	t25 = ((x117-x118)*(x119<=x120));

	if (t25 != INT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x121 = -421LL;
	static uint16_t x123 = 9510U;
	int32_t x124 = INT32_MIN;
	volatile int64_t t26 = -2844256540LL;

	t26 = ((x121-x122)*(x123<=x124));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MAX;
	int64_t x130 = INT64_MAX;
	int16_t x131 = 1;
	uint32_t x132 = UINT32_MAX;
	volatile int64_t t27 = -66927819233984LL;

	t27 = ((x129-x130)*(x131<=x132));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = -1;
	uint32_t x135 = 1359016462U;
	static volatile uint32_t x136 = 0U;

	t28 = ((x133-x134)*(x135<=x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = 2039443;
	uint32_t x142 = 85068U;
	volatile uint16_t x144 = 1106U;
	static volatile uint32_t t29 = 68367005U;

	t29 = ((x141-x142)*(x143<=x144));

	if (t29 != 1954375U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x145 = -275;
	uint32_t x146 = UINT32_MAX;
	uint32_t x147 = 10U;
	uint16_t x148 = 1U;
	volatile uint32_t t30 = 211U;

	t30 = ((x145-x146)*(x147<=x148));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -3;
	int8_t x150 = INT8_MIN;
	uint8_t x151 = 4U;
	static volatile int32_t t31 = 3843560;

	t31 = ((x149-x150)*(x151<=x152));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x153 = INT32_MIN;
	static uint32_t x154 = UINT32_MAX;
	volatile uint32_t t32 = 2U;

	t32 = ((x153-x154)*(x155<=x156));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x157 = INT32_MIN;
	static uint32_t x158 = 5567411U;
	uint16_t x159 = 379U;
	int64_t x160 = INT64_MIN;
	volatile uint32_t t33 = 1U;

	t33 = ((x157-x158)*(x159<=x160));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = INT64_MAX;
	uint32_t x162 = UINT32_MAX;
	uint32_t x163 = UINT32_MAX;
	uint8_t x164 = UINT8_MAX;

	t34 = ((x161-x162)*(x163<=x164));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = 110U;
	uint8_t x166 = UINT8_MAX;
	uint16_t x168 = 0U;
	volatile int32_t t35 = -20;

	t35 = ((x165-x166)*(x167<=x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = INT8_MIN;
	static uint16_t x174 = 13U;
	static int16_t x175 = INT16_MIN;
	int32_t x176 = 4149559;

	t36 = ((x173-x174)*(x175<=x176));

	if (t36 != -141) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x177 = 1;
	volatile int32_t x178 = 12849;
	volatile uint8_t x179 = 2U;
	uint64_t x180 = 11354016682949980LLU;
	int32_t t37 = -291172;

	t37 = ((x177-x178)*(x179<=x180));

	if (t37 != -12848) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x181 = -7084909;
	int64_t x183 = -1LL;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int32_t t38 = -40;

	t38 = ((x181-x182)*(x183<=x184));

	if (t38 != -7084909) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x185 = INT32_MAX;
	static uint16_t x186 = 286U;
	uint64_t x188 = 2677LLU;
	volatile int32_t t39 = 0;

	t39 = ((x185-x186)*(x187<=x188));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x190 = 428U;
	int16_t x191 = INT16_MIN;
	uint64_t t40 = 13LLU;

	t40 = ((x189-x190)*(x191<=x192));

	if (t40 != 18446744073709551187LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x194 = UINT32_MAX;
	static int32_t x195 = -1;
	static uint8_t x196 = 126U;
	volatile uint32_t t41 = 45U;

	t41 = ((x193-x194)*(x195<=x196));

	if (t41 != 256U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint64_t x199 = 1699504493LLU;
	static int16_t x200 = INT16_MIN;
	int32_t t42 = -33262355;

	t42 = ((x197-x198)*(x199<=x200));

	if (t42 != -256) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x202 = 8401U;
	int32_t x204 = -1;

	t43 = ((x201-x202)*(x203<=x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x205 = -1LL;
	int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MAX;
	volatile int64_t t44 = 1013719809LL;

	t44 = ((x205-x206)*(x207<=x208));

	if (t44 != 127LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x210 = UINT64_MAX;
	uint8_t x211 = UINT8_MAX;
	volatile int64_t x212 = -952255323364927949LL;
	volatile uint64_t t45 = 7757985171115LLU;

	t45 = ((x209-x210)*(x211<=x212));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x213 = INT64_MIN;
	uint32_t x214 = 0U;
	volatile int16_t x216 = -1;
	int64_t t46 = INT64_MIN;

	t46 = ((x213-x214)*(x215<=x216));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x217 = -3875LL;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = INT64_MIN;
	int8_t x220 = -1;
	volatile int64_t t47 = 3344581LL;

	t47 = ((x217-x218)*(x219<=x220));

	if (t47 != -4294971170LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MAX;
	int8_t x222 = -3;
	int16_t x224 = -1;
	int32_t t48 = 752975312;

	t48 = ((x221-x222)*(x223<=x224));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = INT16_MIN;
	static int32_t x227 = -5216935;
	static uint16_t x228 = UINT16_MAX;
	static volatile int32_t t49 = -14518;

	t49 = ((x225-x226)*(x227<=x228));

	if (t49 != 98303) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 583184993502LLU;
	static uint32_t x231 = 66621250U;
	uint16_t x232 = UINT16_MAX;
	volatile uint64_t t50 = 54371561LLU;

	t50 = ((x229-x230)*(x231<=x232));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = 627771460LL;
	uint8_t x234 = 88U;
	int8_t x236 = -1;
	volatile int64_t t51 = -179546343065332LL;

	t51 = ((x233-x234)*(x235<=x236));

	if (t51 != 627771372LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x238 = 17U;
	uint16_t x239 = 0U;
	volatile int32_t t52 = 136898255;

	t52 = ((x237-x238)*(x239<=x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x244 = INT32_MIN;
	int64_t t53 = 3017762LL;

	t53 = ((x241-x242)*(x243<=x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x245 = INT32_MAX;
	uint32_t x246 = 4119U;
	static uint8_t x247 = UINT8_MAX;
	uint32_t t54 = 82U;

	t54 = ((x245-x246)*(x247<=x248));

	if (t54 != 2147479528U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MAX;
	int32_t x251 = INT32_MAX;
	uint64_t x252 = 1337878573LLU;

	t55 = ((x249-x250)*(x251<=x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x253 = 147212199066LL;
	volatile int32_t x254 = -1865;
	static int16_t x255 = -1;
	volatile uint16_t x256 = 14310U;
	static volatile int64_t t56 = -19204LL;

	t56 = ((x253-x254)*(x255<=x256));

	if (t56 != 147212200931LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = 44LLU;
	int16_t x258 = -1;
	static int8_t x259 = 0;
	uint64_t x260 = 73186720195524LLU;
	static uint64_t t57 = 5LLU;

	t57 = ((x257-x258)*(x259<=x260));

	if (t57 != 45LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = INT16_MIN;
	uint16_t x262 = 16055U;
	volatile int16_t x263 = INT16_MAX;
	int64_t x264 = 58066635860620566LL;
	int32_t t58 = -1404601;

	t58 = ((x261-x262)*(x263<=x264));

	if (t58 != -48823) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x265 = UINT64_MAX;
	int16_t x266 = INT16_MIN;
	volatile int64_t x267 = -1LL;
	int8_t x268 = -1;

	t59 = ((x265-x266)*(x267<=x268));

	if (t59 != 32767LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x272 = 10U;
	volatile int32_t t60 = -183;

	t60 = ((x269-x270)*(x271<=x272));

	if (t60 != 32773) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x274 = UINT32_MAX;
	int64_t x275 = -1LL;
	int8_t x276 = INT8_MIN;
	volatile uint32_t t61 = 1441235707U;

	t61 = ((x273-x274)*(x275<=x276));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -1;
	int64_t x279 = INT64_MAX;
	static uint32_t x280 = 1823849059U;
	static volatile int32_t t62 = -602255;

	t62 = ((x277-x278)*(x279<=x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x287 = 26;
	static uint16_t x288 = 0U;
	static volatile uint32_t t63 = 2659U;

	t63 = ((x285-x286)*(x287<=x288));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x289 = INT64_MIN;
	int32_t x290 = INT32_MIN;
	static int64_t x291 = -82152449305631779LL;
	int16_t x292 = -15492;
	volatile int64_t t64 = -4736677LL;

	t64 = ((x289-x290)*(x291<=x292));

	if (t64 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x293 = INT64_MAX;
	static uint16_t x295 = 0U;
	volatile int64_t t65 = 6767527133LL;

	t65 = ((x293-x294)*(x295<=x296));

	if (t65 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x297 = -1;
	static uint64_t x298 = 5538LLU;
	static volatile int8_t x299 = 3;
	int16_t x300 = -1;
	static uint64_t t66 = 7698651818556LLU;

	t66 = ((x297-x298)*(x299<=x300));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x302 = UINT8_MAX;
	int16_t x303 = INT16_MAX;
	int8_t x304 = -1;
	volatile int32_t t67 = 568380004;

	t67 = ((x301-x302)*(x303<=x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MAX;
	static int16_t x306 = -1;
	int16_t x307 = 10986;
	int32_t x308 = -17;

	t68 = ((x305-x306)*(x307<=x308));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = 296164119;
	static int16_t x310 = 1;
	int64_t x311 = -174329LL;
	uint8_t x312 = 0U;
	int32_t t69 = 0;

	t69 = ((x309-x310)*(x311<=x312));

	if (t69 != 296164118) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x313 = INT16_MIN;
	static uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	uint8_t x316 = UINT8_MAX;
	static uint32_t t70 = 21U;

	t70 = ((x313-x314)*(x315<=x316));

	if (t70 != 4294934529U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x318 = 0;
	int8_t x319 = INT8_MAX;
	int8_t x320 = INT8_MAX;
	int32_t t71 = -621382064;

	t71 = ((x317-x318)*(x319<=x320));

	if (t71 != 6) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x322 = 351LLU;
	int32_t x323 = INT32_MIN;
	volatile int32_t x324 = INT32_MIN;
	static volatile uint64_t t72 = 2LLU;

	t72 = ((x321-x322)*(x323<=x324));

	if (t72 != 95506051135LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x325 = -1;
	volatile int8_t x326 = -1;
	volatile int8_t x327 = INT8_MIN;
	int64_t x328 = 153113926515LL;
	volatile int32_t t73 = 93710;

	t73 = ((x325-x326)*(x327<=x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x330 = INT32_MIN;
	volatile uint64_t x331 = UINT64_MAX;
	int32_t x332 = -1;

	t74 = ((x329-x330)*(x331<=x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 23652U;
	static uint8_t x334 = 105U;
	int16_t x335 = INT16_MAX;
	int64_t x336 = 2LL;
	volatile int32_t t75 = 0;

	t75 = ((x333-x334)*(x335<=x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = 619353U;
	uint64_t x338 = 3640600047461849842LLU;
	volatile int8_t x339 = 14;
	int16_t x340 = -1;
	volatile uint64_t t76 = 1LLU;

	t76 = ((x337-x338)*(x339<=x340));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x342 = 28;
	static uint64_t x344 = UINT64_MAX;
	volatile uint32_t t77 = 27U;

	t77 = ((x341-x342)*(x343<=x344));

	if (t77 != 260220U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x345 = INT16_MIN;
	uint32_t x346 = 327288958U;
	int64_t x348 = -1LL;
	uint32_t t78 = 481616U;

	t78 = ((x345-x346)*(x347<=x348));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x350 = 235953LLU;
	uint32_t x351 = UINT32_MAX;
	int32_t x352 = INT32_MIN;
	static uint64_t t79 = 14396260696LLU;

	t79 = ((x349-x350)*(x351<=x352));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x353 = UINT32_MAX;
	int32_t x354 = -1;
	static int8_t x355 = INT8_MAX;
	int32_t x356 = 18;
	uint32_t t80 = 49449771U;

	t80 = ((x353-x354)*(x355<=x356));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x357 = UINT8_MAX;
	static int8_t x359 = -1;
	uint64_t x360 = 3750LLU;
	static volatile int32_t t81 = 15795;

	t81 = ((x357-x358)*(x359<=x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x373 = -10703116LL;
	volatile uint16_t x374 = UINT16_MAX;
	volatile uint32_t x375 = UINT32_MAX;
	int8_t x376 = 0;

	t82 = ((x373-x374)*(x375<=x376));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x377 = INT8_MIN;
	uint16_t x378 = UINT16_MAX;
	int8_t x379 = -1;
	int16_t x380 = -1;
	volatile int32_t t83 = 14;

	t83 = ((x377-x378)*(x379<=x380));

	if (t83 != -65663) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x381 = -1;
	int16_t x382 = INT16_MIN;
	int32_t x383 = -1;
	int32_t t84 = 14;

	t84 = ((x381-x382)*(x383<=x384));

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -1LL;
	static int8_t x386 = -1;
	int32_t x387 = -287804112;
	uint8_t x388 = 13U;
	int64_t t85 = 26043113903261LL;

	t85 = ((x385-x386)*(x387<=x388));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x389 = -1;
	int8_t x391 = INT8_MAX;
	static uint32_t x392 = 499906264U;

	t86 = ((x389-x390)*(x391<=x392));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = -1;
	int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	int32_t t87 = 118;

	t87 = ((x393-x394)*(x395<=x396));

	if (t87 != 128) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x397 = -1;
	uint8_t x398 = 6U;
	int64_t x399 = INT64_MIN;
	int32_t t88 = -1;

	t88 = ((x397-x398)*(x399<=x400));

	if (t88 != -7) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x402 = UINT64_MAX;
	int32_t x404 = 0;
	volatile uint64_t t89 = 175LLU;

	t89 = ((x401-x402)*(x403<=x404));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x406 = INT16_MIN;
	static int8_t x407 = INT8_MAX;

	t90 = ((x405-x406)*(x407<=x408));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x409 = INT64_MAX;
	uint64_t x410 = UINT64_MAX;
	volatile int16_t x411 = -1;
	uint16_t x412 = 28U;
	uint64_t t91 = 2762846587632690LLU;

	t91 = ((x409-x410)*(x411<=x412));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x413 = UINT64_MAX;
	volatile int64_t x414 = 1542285562LL;
	uint32_t x415 = UINT32_MAX;
	volatile int16_t x416 = 0;
	uint64_t t92 = 14127817017240LLU;

	t92 = ((x413-x414)*(x415<=x416));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x417 = -1LL;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MAX;
	static int32_t x420 = -487861;
	int64_t t93 = -54094079514182824LL;

	t93 = ((x417-x418)*(x419<=x420));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x421 = INT8_MAX;
	static volatile int64_t x423 = -6952450254LL;

	t94 = ((x421-x422)*(x423<=x424));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x425 = 12U;
	volatile int16_t x426 = INT16_MIN;
	uint64_t x427 = 454822234952LLU;
	volatile uint64_t x428 = 13407381736205483LLU;
	static volatile int32_t t95 = -137451;

	t95 = ((x425-x426)*(x427<=x428));

	if (t95 != 32780) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x434 = -480322877LL;
	uint32_t x435 = 0U;
	static volatile uint64_t t96 = 8540614340641934LLU;

	t96 = ((x433-x434)*(x435<=x436));

	if (t96 != 480322876LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x437 = 13982;
	volatile uint32_t x439 = UINT32_MAX;
	int8_t x440 = INT8_MAX;
	volatile int32_t t97 = 1194479;

	t97 = ((x437-x438)*(x439<=x440));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x442 = 3U;
	int32_t x443 = -1;
	int32_t t98 = -6807;

	t98 = ((x441-x442)*(x443<=x444));

	if (t98 != 82) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x448 = INT8_MIN;

	t99 = ((x445-x446)*(x447<=x448));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

