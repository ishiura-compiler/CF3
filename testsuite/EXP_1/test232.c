#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x15 = INT64_MAX;
volatile uint64_t t4 = 60LLU;
int32_t x29 = 9687353;
uint64_t x34 = 4272329237012LLU;
int32_t x36 = -1;
int16_t x44 = INT16_MIN;
static volatile int64_t t8 = 21924990LL;
int8_t x45 = 23;
uint64_t x46 = 53285LLU;
static int16_t x48 = 5;
int64_t t10 = 51518LL;
int32_t x61 = INT32_MIN;
static int64_t x63 = INT64_MAX;
static volatile int64_t x65 = -1LL;
uint64_t x68 = UINT64_MAX;
int64_t x72 = INT64_MAX;
int8_t x88 = -1;
int64_t t15 = 104171LL;
uint64_t x97 = 27279061852524LLU;
uint64_t t17 = 232690136943180LLU;
int64_t t20 = 279212859856328LL;
uint8_t x121 = UINT8_MAX;
int32_t x123 = INT32_MIN;
int16_t x130 = INT16_MIN;
int16_t x140 = INT16_MIN;
uint64_t x150 = UINT64_MAX;
uint16_t x152 = 79U;
static uint64_t x153 = UINT64_MAX;
int16_t x155 = INT16_MIN;
int8_t x156 = INT8_MIN;
static uint64_t x181 = UINT64_MAX;
static int64_t x190 = -1LL;
int8_t x198 = INT8_MIN;
volatile int16_t x206 = -89;
int64_t x214 = -1LL;
int8_t x215 = -1;
int16_t x224 = -6890;
volatile int64_t t44 = 2305LL;
uint16_t x229 = 7U;
int16_t x230 = 1;
static uint64_t x233 = 21768550973316357LLU;
int16_t x236 = INT16_MAX;
int64_t x239 = INT64_MAX;
volatile uint32_t x242 = UINT32_MAX;
uint64_t x246 = UINT64_MAX;
int32_t x260 = -1;
int64_t x261 = -1LL;
volatile uint8_t x264 = UINT8_MAX;
volatile uint16_t x265 = 10U;
static int64_t x267 = -84LL;
uint32_t x290 = 677U;
uint8_t x291 = 4U;
static int8_t x294 = INT8_MAX;
static uint8_t x295 = 25U;
volatile uint64_t t58 = 41026LLU;
static int8_t x301 = INT8_MIN;
static volatile int16_t x303 = 37;
int16_t x309 = INT16_MIN;
int8_t x317 = 0;
int8_t x321 = INT8_MIN;
int8_t x322 = -44;
uint8_t x324 = 23U;
static volatile int8_t x332 = INT8_MIN;
static int64_t t66 = 197LL;
uint32_t x334 = 701603215U;
int32_t x335 = INT32_MIN;
uint64_t t68 = 77084113580LLU;
uint16_t x343 = 60U;
volatile uint32_t t70 = 6056U;
static int64_t x354 = -1LL;
volatile int16_t x355 = INT16_MIN;
uint64_t x357 = UINT64_MAX;
static volatile int8_t x361 = -1;
int32_t x362 = -1;
volatile int32_t x364 = INT32_MIN;
static uint64_t x373 = UINT64_MAX;
volatile uint32_t x383 = 35U;
int64_t x391 = INT64_MIN;
int8_t x397 = -1;
int8_t x402 = -1;
static volatile uint32_t x413 = UINT32_MAX;
int8_t x422 = INT8_MAX;
volatile int8_t x424 = INT8_MIN;
static uint8_t x427 = 22U;
int64_t t84 = 982171422247LL;
int32_t x435 = INT32_MIN;
int16_t x446 = INT16_MAX;
volatile int16_t x447 = INT16_MIN;
uint16_t x458 = UINT16_MAX;
volatile int16_t x463 = INT16_MIN;
static int16_t x465 = -12611;
volatile int32_t t93 = 760273966;
int8_t x472 = -1;
int16_t x479 = -2079;
volatile int64_t x487 = INT64_MIN;
uint32_t t99 = 356477677U;


void f0(void) {
	volatile int64_t x5 = -870189899LL;
	int16_t x6 = -1;
	uint8_t x7 = UINT8_MAX;
	uint64_t x8 = UINT64_MAX;
	uint64_t t0 = 5298242808LLU;

	t0 = (((x5-x6)%x7)&x8);

	if (t0 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -48384219386479256LL;
	int32_t x10 = INT32_MAX;
	static uint64_t x11 = 135966844116783LLU;
	int64_t x12 = INT64_MIN;
	static uint64_t t1 = 296086679LLU;

	t1 = (((x9-x10)%x11)&x12);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 6U;
	int64_t x14 = -1LL;
	uint16_t x16 = UINT16_MAX;
	static int64_t t2 = -7LL;

	t2 = (((x13-x14)%x15)&x16);

	if (t2 != 7LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x21 = -1LL;
	int64_t x22 = -1865912LL;
	uint32_t x23 = 821128U;
	static int64_t x24 = -1LL;
	int64_t t3 = 27LL;

	t3 = (((x21-x22)%x23)&x24);

	if (t3 != 223655LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x25 = INT32_MIN;
	static int16_t x26 = -1;
	uint64_t x27 = 1501369501436LLU;
	uint64_t x28 = UINT64_MAX;

	t4 = (((x25-x26)%x27)&x28);

	if (t4 != 1040153994573LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x30 = 13U;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = 1;
	static volatile uint32_t t5 = 6506U;

	t5 = (((x29-x30)%x31)&x32);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	int16_t x35 = INT16_MIN;
	volatile uint64_t t6 = 0LLU;

	t6 = (((x33-x34)%x35)&x36);

	if (t6 != 18446739799232830956LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MIN;
	volatile uint8_t x38 = 1U;
	static volatile int32_t x39 = INT32_MAX;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t7 = 288050592U;

	t7 = (((x37-x38)%x39)&x40);

	if (t7 != 4294934527U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -1LL;
	uint16_t x42 = 31U;
	static int64_t x43 = 14LL;

	t8 = (((x41-x42)%x43)&x44);

	if (t8 != -32768LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x47 = -777930877LL;
	uint64_t t9 = 206LLU;

	t9 = (((x45-x46)%x47)&x48);

	if (t9 != 5LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x53 = 102;
	int64_t x54 = INT64_MAX;
	int16_t x55 = INT16_MAX;
	int8_t x56 = INT8_MAX;

	t10 = (((x53-x54)%x55)&x56);

	if (t10 != 96LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x62 = INT32_MIN;
	uint16_t x64 = 72U;
	static int64_t t11 = -8032261208LL;

	t11 = (((x61-x62)%x63)&x64);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x66 = -1;
	static int32_t x67 = -1;
	volatile uint64_t t12 = 20014428LLU;

	t12 = (((x65-x66)%x67)&x68);

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = 107;
	volatile uint64_t x70 = 527587861LLU;
	int64_t x71 = INT64_MIN;
	volatile uint64_t t13 = 122LLU;

	t13 = (((x69-x70)%x71)&x72);

	if (t13 != 9223372036327188054LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	int64_t x83 = 861LL;
	static int8_t x84 = INT8_MIN;
	volatile int64_t t14 = -178129211255447LL;

	t14 = (((x81-x82)%x83)&x84);

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x85 = -1782436553LL;
	int16_t x86 = -1;
	int32_t x87 = INT32_MIN;

	t15 = (((x85-x86)%x87)&x88);

	if (t15 != -1782436552LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 160539713U;
	volatile int16_t x90 = INT16_MIN;
	int64_t x91 = -49700967008130LL;
	uint8_t x92 = 22U;
	volatile int64_t t16 = 73LL;

	t16 = (((x89-x90)%x91)&x92);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x98 = 20140U;
	static uint16_t x99 = UINT16_MAX;
	int8_t x100 = -1;

	t17 = (((x97-x98)%x99)&x100);

	if (t17 != 53849LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = -1;
	uint32_t x102 = 0U;
	volatile uint64_t x103 = 3732878LLU;
	volatile uint16_t x104 = 238U;
	static volatile uint64_t t18 = 45488LLU;

	t18 = (((x101-x102)%x103)&x104);

	if (t18 != 10LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x105 = -1;
	int64_t x106 = 1LL;
	uint64_t x107 = UINT64_MAX;
	uint32_t x108 = 15U;
	volatile uint64_t t19 = 218342441LLU;

	t19 = (((x105-x106)%x107)&x108);

	if (t19 != 14LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x109 = -33;
	uint8_t x110 = UINT8_MAX;
	int64_t x111 = -1LL;
	static volatile int32_t x112 = 447132;

	t20 = (((x109-x110)%x111)&x112);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 673U;
	volatile uint8_t x114 = 39U;
	int64_t x115 = INT64_MAX;
	uint16_t x116 = 84U;
	volatile int64_t t21 = 914205LL;

	t21 = (((x113-x114)%x115)&x116);

	if (t21 != 80LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = -1;
	volatile uint8_t x119 = 1U;
	static uint16_t x120 = UINT16_MAX;
	static volatile int64_t t22 = 182LL;

	t22 = (((x117-x118)%x119)&x120);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x122 = INT8_MAX;
	int64_t x124 = -84640097124LL;
	volatile int64_t t23 = -439312227149289LL;

	t23 = (((x121-x122)%x123)&x124);

	if (t23 != 128LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x129 = UINT64_MAX;
	volatile uint64_t x131 = 50849137931LLU;
	volatile int64_t x132 = INT64_MAX;
	static uint64_t t24 = 53176448LLU;

	t24 = (((x129-x130)%x131)&x132);

	if (t24 != 32767LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x133 = INT8_MAX;
	volatile int16_t x134 = INT16_MAX;
	static int32_t x135 = INT32_MAX;
	static int64_t x136 = -2013469693557351LL;
	int64_t t25 = 6510719LL;

	t25 = (((x133-x134)%x135)&x136);

	if (t25 != -2013469693575040LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = INT8_MAX;
	uint16_t x138 = UINT16_MAX;
	int16_t x139 = -1;
	volatile int32_t t26 = 9;

	t26 = (((x137-x138)%x139)&x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 16773U;
	uint16_t x142 = 98U;
	uint8_t x143 = 2U;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t27 = 305337618964LLU;

	t27 = (((x141-x142)%x143)&x144);

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = INT8_MAX;
	int32_t x151 = INT32_MAX;
	volatile uint64_t t28 = 2048626121783062LLU;

	t28 = (((x149-x150)%x151)&x152);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x154 = -1;
	uint64_t t29 = 54532316959202729LLU;

	t29 = (((x153-x154)%x155)&x156);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x157 = INT16_MIN;
	int16_t x158 = -147;
	volatile int16_t x159 = INT16_MAX;
	static int8_t x160 = -1;
	int32_t t30 = 24011088;

	t30 = (((x157-x158)%x159)&x160);

	if (t30 != -32621) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x169 = 198777811983246LL;
	int8_t x170 = INT8_MIN;
	int32_t x171 = -920262607;
	volatile int8_t x172 = -1;
	volatile int64_t t31 = 0LL;

	t31 = (((x169-x170)%x171)&x172);

	if (t31 != 168608767LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x173 = 15LL;
	uint64_t x174 = 253521516250LLU;
	uint16_t x175 = UINT16_MAX;
	int8_t x176 = INT8_MAX;
	volatile uint64_t t32 = 4435774467LLU;

	t32 = (((x173-x174)%x175)&x176);

	if (t32 != 107LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x182 = -1LL;
	uint16_t x183 = 16U;
	static int8_t x184 = INT8_MIN;
	volatile uint64_t t33 = 11659878277LLU;

	t33 = (((x181-x182)%x183)&x184);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x185 = 98LLU;
	int64_t x186 = INT64_MIN;
	int8_t x187 = -1;
	int32_t x188 = -1;
	uint64_t t34 = 75820LLU;

	t34 = (((x185-x186)%x187)&x188);

	if (t34 != 9223372036854775906LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x189 = 33U;
	volatile int8_t x191 = INT8_MAX;
	uint32_t x192 = 70048U;
	int64_t t35 = -91679847LL;

	t35 = (((x189-x190)%x191)&x192);

	if (t35 != 32LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x193 = -1LL;
	uint64_t x194 = 622078LLU;
	uint64_t x195 = UINT64_MAX;
	int16_t x196 = -9;
	volatile uint64_t t36 = 59144392542462937LLU;

	t36 = (((x193-x194)%x195)&x196);

	if (t36 != 18446744073708929537LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x197 = INT16_MIN;
	volatile int16_t x199 = -1;
	uint16_t x200 = 8U;
	volatile int32_t t37 = -13993;

	t37 = (((x197-x198)%x199)&x200);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x201 = 126LLU;
	volatile int32_t x202 = INT32_MIN;
	static int8_t x203 = INT8_MAX;
	static uint16_t x204 = 8U;
	volatile uint64_t t38 = 14081697044685LLU;

	t38 = (((x201-x202)%x203)&x204);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = INT8_MIN;
	int16_t x207 = INT16_MIN;
	uint16_t x208 = UINT16_MAX;
	int32_t t39 = 0;

	t39 = (((x205-x206)%x207)&x208);

	if (t39 != 65497) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = INT64_MAX;
	uint64_t x210 = 3298404LLU;
	int64_t x211 = INT64_MIN;
	int16_t x212 = 18;
	volatile uint64_t t40 = 1117039967LLU;

	t40 = (((x209-x210)%x211)&x212);

	if (t40 != 18LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x213 = INT64_MIN;
	int32_t x216 = -1;
	int64_t t41 = 1840601387047834193LL;

	t41 = (((x213-x214)%x215)&x216);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x217 = 0U;
	static int16_t x218 = -2238;
	uint8_t x219 = 16U;
	int8_t x220 = INT8_MIN;
	int32_t t42 = 7210826;

	t42 = (((x217-x218)%x219)&x220);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x221 = 153611U;
	static uint8_t x222 = UINT8_MAX;
	volatile uint64_t x223 = UINT64_MAX;
	uint64_t t43 = 329377883396518LLU;

	t43 = (((x221-x222)%x223)&x224);

	if (t43 != 148740LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	int16_t x228 = INT16_MAX;

	t44 = (((x225-x226)%x227)&x228);

	if (t44 != 32641LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 15U;
	volatile uint32_t t45 = 31083U;

	t45 = (((x229-x230)%x231)&x232);

	if (t45 != 6U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x234 = -1;
	int64_t x235 = 6308283256LL;
	uint64_t t46 = 476807256514574LLU;

	t46 = (((x233-x234)%x235)&x236);

	if (t46 != 7206LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x237 = INT32_MAX;
	int64_t x238 = -1LL;
	volatile int32_t x240 = 1;
	static int64_t t47 = -240LL;

	t47 = (((x237-x238)%x239)&x240);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	static int16_t x244 = INT16_MIN;
	uint32_t t48 = 1393U;

	t48 = (((x241-x242)%x243)&x244);

	if (t48 != 2147483648U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 15900;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MIN;
	static uint64_t t49 = 2125650320LLU;

	t49 = (((x245-x246)%x247)&x248);

	if (t49 != 15872LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = UINT32_MAX;
	uint32_t x250 = UINT32_MAX;
	uint32_t x251 = 5728U;
	int32_t x252 = INT32_MIN;
	uint32_t t50 = 0U;

	t50 = (((x249-x250)%x251)&x252);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x253 = 2U;
	volatile int32_t x254 = 514;
	volatile int16_t x255 = -1;
	int16_t x256 = INT16_MIN;
	volatile int32_t t51 = -216;

	t51 = (((x253-x254)%x255)&x256);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int32_t x258 = INT32_MAX;
	int32_t x259 = INT32_MIN;
	volatile uint64_t t52 = 895547913204837418LLU;

	t52 = (((x257-x258)%x259)&x260);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x262 = 2317284656LLU;
	static uint64_t x263 = UINT64_MAX;
	uint64_t t53 = 1473219662LLU;

	t53 = (((x261-x262)%x263)&x264);

	if (t53 != 207LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x266 = 192647;
	int16_t x268 = -11833;
	static volatile int64_t t54 = 317LL;

	t54 = (((x265-x266)%x267)&x268);

	if (t54 != -11833LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = -2708424;
	static int16_t x278 = -1;
	static uint32_t x279 = 95U;
	int8_t x280 = INT8_MIN;
	volatile uint32_t t55 = 1U;

	t55 = (((x277-x278)%x279)&x280);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x285 = 1U;
	static uint8_t x286 = 57U;
	volatile int16_t x287 = -1;
	int32_t x288 = INT32_MAX;
	volatile int32_t t56 = -112;

	t56 = (((x285-x286)%x287)&x288);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x289 = 452U;
	uint8_t x292 = 16U;
	static volatile uint32_t t57 = 2689762U;

	t57 = (((x289-x290)%x291)&x292);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x293 = 7357113LLU;
	int16_t x296 = 865;

	t58 = (((x293-x294)%x295)&x296);

	if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x297 = -1878;
	uint32_t x298 = UINT32_MAX;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MIN;
	int64_t t59 = 1050453904672LL;

	t59 = (((x297-x298)%x299)&x300);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x302 = INT16_MIN;
	int8_t x304 = INT8_MIN;
	volatile int32_t t60 = 98377559;

	t60 = (((x301-x302)%x303)&x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x305 = UINT8_MAX;
	int16_t x306 = 14;
	static uint64_t x307 = 6693LLU;
	int64_t x308 = INT64_MIN;
	uint64_t t61 = 12282041125LLU;

	t61 = (((x305-x306)%x307)&x308);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x310 = 3U;
	volatile int64_t x311 = INT64_MIN;
	static uint16_t x312 = UINT16_MAX;
	int64_t t62 = 0LL;

	t62 = (((x309-x310)%x311)&x312);

	if (t62 != 32765LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x318 = INT64_MAX;
	static volatile int16_t x319 = 14;
	uint16_t x320 = UINT16_MAX;
	volatile int64_t t63 = 4LL;

	t63 = (((x317-x318)%x319)&x320);

	if (t63 != 65529LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x323 = 13659U;
	volatile uint32_t t64 = 18696U;

	t64 = (((x321-x322)%x323)&x324);

	if (t64 != 22U) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x325 = 18U;
	volatile uint32_t x326 = 15079056U;
	volatile int8_t x327 = 45;
	int32_t x328 = INT32_MIN;
	uint32_t t65 = 82212998U;

	t65 = (((x325-x326)%x327)&x328);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = -1;
	volatile uint8_t x330 = UINT8_MAX;
	int64_t x331 = INT64_MIN;

	t66 = (((x329-x330)%x331)&x332);

	if (t66 != -256LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x333 = 22U;
	uint16_t x336 = 2954U;
	uint32_t t67 = 108912U;

	t67 = (((x333-x334)%x335)&x336);

	if (t67 != 642U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x337 = 93260982LLU;
	static uint64_t x338 = UINT64_MAX;
	int64_t x339 = INT64_MIN;
	uint16_t x340 = 5350U;

	t68 = (((x337-x338)%x339)&x340);

	if (t68 != 1190LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x341 = INT16_MIN;
	volatile uint8_t x342 = 1U;
	static int32_t x344 = -1;
	static volatile int32_t t69 = 128811651;

	t69 = (((x341-x342)%x343)&x344);

	if (t69 != -9) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x349 = -1;
	uint8_t x350 = UINT8_MAX;
	uint32_t x351 = 86682U;
	int8_t x352 = INT8_MIN;

	t70 = (((x349-x350)%x351)&x352);

	if (t70 != 47232U) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x353 = -1;
	static uint64_t x356 = 1041LLU;
	uint64_t t71 = 2837193439LLU;

	t71 = (((x353-x354)%x355)&x356);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x358 = INT8_MIN;
	static uint8_t x359 = 23U;
	int64_t x360 = INT64_MAX;
	uint64_t t72 = 0LLU;

	t72 = (((x357-x358)%x359)&x360);

	if (t72 != 12LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x363 = 64076737U;
	static volatile uint32_t t73 = 6U;

	t73 = (((x361-x362)%x363)&x364);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x369 = -29050128LL;
	uint64_t x370 = 176622LLU;
	uint64_t x371 = 24903LLU;
	int16_t x372 = INT16_MIN;
	static volatile uint64_t t74 = 24389113350060699LLU;

	t74 = (((x369-x370)%x371)&x372);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x374 = 3180U;
	int32_t x375 = INT32_MIN;
	int8_t x376 = INT8_MIN;
	volatile uint64_t t75 = 2362LLU;

	t75 = (((x373-x374)%x375)&x376);

	if (t75 != 2147480448LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	int8_t x384 = -34;
	int64_t t76 = -4246310136164520LL;

	t76 = (((x381-x382)%x383)&x384);

	if (t76 != -54LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = 40307LLU;
	uint32_t x390 = UINT32_MAX;
	static int64_t x392 = INT64_MAX;
	volatile uint64_t t77 = 764709335262713LLU;

	t77 = (((x389-x390)%x391)&x392);

	if (t77 != 9223372032559848820LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x393 = 1045879U;
	int16_t x394 = -1507;
	int64_t x395 = INT64_MIN;
	int32_t x396 = -1;
	static volatile int64_t t78 = -3878003167LL;

	t78 = (((x393-x394)%x395)&x396);

	if (t78 != 1047386LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x398 = 9U;
	static int8_t x399 = INT8_MIN;
	volatile int64_t x400 = INT64_MIN;
	volatile int64_t t79 = -4413305717177913LL;

	t79 = (((x397-x398)%x399)&x400);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x401 = -1;
	uint16_t x403 = 12U;
	int64_t x404 = 8671151LL;
	static volatile int64_t t80 = 7215185900LL;

	t80 = (((x401-x402)%x403)&x404);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x414 = 3U;
	volatile uint16_t x415 = 453U;
	int16_t x416 = INT16_MIN;
	uint32_t t81 = 2758U;

	t81 = (((x413-x414)%x415)&x416);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x417 = INT16_MIN;
	int8_t x418 = INT8_MAX;
	volatile int16_t x419 = INT16_MIN;
	uint64_t x420 = 5278503856803282LLU;
	uint64_t t82 = 134113153LLU;

	t82 = (((x417-x418)%x419)&x420);

	if (t82 != 5278503856803200LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x421 = -1;
	int8_t x423 = -30;
	static volatile int32_t t83 = -1185;

	t83 = (((x421-x422)%x423)&x424);

	if (t83 != -128) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x425 = 1267LL;
	int8_t x426 = INT8_MAX;
	int32_t x428 = INT32_MAX;

	t84 = (((x425-x426)%x427)&x428);

	if (t84 != 18LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x429 = INT32_MIN;
	static int32_t x430 = -13839954;
	uint64_t x431 = 3206761123LLU;
	static volatile int8_t x432 = -1;
	uint64_t t85 = 421436LLU;

	t85 = (((x429-x430)%x431)&x432);

	if (t85 != 2282489187LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x433 = 1U;
	uint64_t x434 = UINT64_MAX;
	int16_t x436 = -175;
	static volatile uint64_t t86 = 132LLU;

	t86 = (((x433-x434)%x435)&x436);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x441 = -1;
	static int8_t x442 = INT8_MIN;
	uint64_t x443 = 1858134278LLU;
	static uint8_t x444 = UINT8_MAX;
	volatile uint64_t t87 = 122766547237LLU;

	t87 = (((x441-x442)%x443)&x444);

	if (t87 != 127LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x445 = 4973154LL;
	volatile uint64_t x448 = UINT64_MAX;
	volatile uint64_t t88 = 7751388099LLU;

	t88 = (((x445-x446)%x447)&x448);

	if (t88 != 25187LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x449 = 7228382LLU;
	int16_t x450 = -23;
	int64_t x451 = 2907LL;
	volatile int32_t x452 = INT32_MIN;
	volatile uint64_t t89 = 50LLU;

	t89 = (((x449-x450)%x451)&x452);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x453 = 3054U;
	uint16_t x454 = UINT16_MAX;
	static int8_t x455 = 15;
	int64_t x456 = -1LL;
	volatile int64_t t90 = 4539995399077LL;

	t90 = (((x453-x454)%x455)&x456);

	if (t90 != -6LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x457 = INT16_MIN;
	int32_t x459 = INT32_MIN;
	int16_t x460 = 29;
	volatile int32_t t91 = 32557084;

	t91 = (((x457-x458)%x459)&x460);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x461 = UINT64_MAX;
	uint8_t x462 = UINT8_MAX;
	int64_t x464 = 1719810396674410LL;
	volatile uint64_t t92 = 6LLU;

	t92 = (((x461-x462)%x463)&x464);

	if (t92 != 22784LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x466 = INT16_MIN;
	volatile uint16_t x467 = 123U;
	uint16_t x468 = 888U;

	t93 = (((x465-x466)%x467)&x468);

	if (t93 != 104) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x469 = INT16_MAX;
	uint64_t x470 = 2832882199298221LLU;
	int64_t x471 = INT64_MIN;
	uint64_t t94 = 10LLU;

	t94 = (((x469-x470)%x471)&x472);

	if (t94 != 9220539154655510354LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x473 = 24913440579624686LLU;
	int32_t x474 = INT32_MAX;
	uint8_t x475 = 51U;
	int16_t x476 = INT16_MIN;
	uint64_t t95 = 15LLU;

	t95 = (((x473-x474)%x475)&x476);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x477 = INT16_MAX;
	int16_t x478 = INT16_MIN;
	volatile uint16_t x480 = UINT16_MAX;
	int32_t t96 = -867649044;

	t96 = (((x477-x478)%x479)&x480);

	if (t96 != 1086) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint64_t x481 = 3123LLU;
	int64_t x482 = INT64_MIN;
	uint8_t x483 = 7U;
	int8_t x484 = INT8_MIN;
	uint64_t t97 = 94122249610946567LLU;

	t97 = (((x481-x482)%x483)&x484);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x485 = INT64_MAX;
	static int32_t x486 = INT32_MAX;
	int32_t x488 = -1;
	int64_t t98 = -109824518577LL;

	t98 = (((x485-x486)%x487)&x488);

	if (t98 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x493 = INT16_MIN;
	uint32_t x494 = 11231096U;
	volatile uint16_t x495 = 100U;
	uint16_t x496 = 13786U;

	t99 = (((x493-x494)%x495)&x496);

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

