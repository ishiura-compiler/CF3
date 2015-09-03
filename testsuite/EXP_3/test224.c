#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = 281U;
volatile uint64_t x26 = UINT64_MAX;
int16_t x40 = INT16_MIN;
volatile uint64_t t7 = 14LLU;
volatile int32_t x48 = INT32_MIN;
uint16_t x49 = UINT16_MAX;
int16_t x53 = 4;
static int8_t x54 = -1;
volatile int32_t t11 = 82;
int32_t x68 = -4624027;
static int64_t t14 = 8239386506128LL;
static int16_t x75 = 1;
uint32_t x76 = 135U;
int16_t x87 = 10;
volatile int64_t x98 = -1764648778676367LL;
int8_t x124 = INT8_MIN;
int64_t x129 = INT64_MAX;
int64_t x138 = INT64_MIN;
uint8_t x143 = 62U;
volatile uint64_t t30 = 19142818822862589LLU;
int8_t x145 = -1;
int16_t x148 = INT16_MIN;
int8_t x154 = 10;
static int32_t x163 = INT32_MIN;
int16_t x169 = INT16_MIN;
static int16_t x170 = 10;
int32_t t35 = 7;
int32_t x176 = -1;
int64_t t36 = -9461453689645313LL;
uint64_t t37 = 305603596264568794LLU;
static int16_t x191 = INT16_MAX;
uint64_t x193 = 213LLU;
int32_t x195 = INT32_MIN;
int8_t x196 = INT8_MIN;
volatile uint8_t x199 = 1U;
volatile uint16_t x200 = UINT16_MAX;
static int16_t x213 = INT16_MAX;
volatile uint64_t x217 = 59655931036LLU;
int32_t x221 = 20;
static int64_t x228 = -1LL;
int64_t t49 = -260901LL;
int32_t x232 = -1;
volatile int32_t x236 = -3824633;
int32_t t51 = 1;
uint64_t t52 = 2056531254787449855LLU;
uint8_t x248 = 0U;
int32_t t55 = 544060062;
static int8_t x253 = 55;
uint8_t x254 = 20U;
volatile int16_t x258 = INT16_MAX;
int64_t t57 = 2474555558636871LL;
uint64_t t58 = 6901160806948110290LLU;
static int64_t x274 = 453LL;
uint16_t x275 = 30U;
static volatile int64_t t60 = 48096350528684803LL;
int8_t x282 = INT8_MIN;
volatile int64_t x286 = 2LL;
uint32_t x291 = UINT32_MAX;
volatile int16_t x299 = 32;
int16_t x303 = -1;
int64_t x304 = 215279148356951456LL;
int64_t x324 = 928043LL;
uint8_t x329 = 19U;
static int16_t x332 = -1;
int16_t x350 = INT16_MIN;
int64_t x352 = -1LL;
volatile int64_t x370 = INT64_MIN;
uint64_t x383 = 775327792LLU;
uint64_t t84 = 0LLU;
volatile int64_t t86 = -8669419022715LL;
int16_t x398 = INT16_MIN;
uint16_t x409 = 6U;
int16_t x418 = 3866;
uint32_t x425 = 1577582U;
int8_t x427 = -1;
int32_t x429 = 1981;
int16_t x432 = -530;
static volatile int32_t t97 = 73;
static int32_t x448 = INT32_MIN;
int64_t x452 = INT64_MAX;


void f0(void) {
	int64_t x6 = INT64_MIN;
	volatile int16_t x7 = INT16_MAX;
	int16_t x8 = INT16_MAX;
	volatile int64_t t0 = -5585941682412862LL;

	t0 = ((x5%x6)*(x7-x8));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 957;
	static uint32_t x10 = UINT32_MAX;
	int8_t x11 = 0;
	int8_t x12 = -1;
	volatile uint32_t t1 = 4U;

	t1 = ((x9%x10)*(x11-x12));

	if (t1 != 957U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x13 = UINT8_MAX;
	volatile int32_t x14 = -1;
	int16_t x15 = INT16_MAX;
	int16_t x16 = INT16_MAX;
	int32_t t2 = 1;

	t2 = ((x13%x14)*(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = -1LL;
	int32_t x19 = INT32_MIN;
	uint32_t x20 = 1793763684U;
	volatile int64_t t3 = 412654LL;

	t3 = ((x17%x18)*(x19-x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x21 = 7LL;
	int64_t x22 = 317LL;
	volatile uint16_t x23 = 13570U;
	uint64_t x24 = 246LLU;
	volatile uint64_t t4 = 65LLU;

	t4 = ((x21%x22)*(x23-x24));

	if (t4 != 93268LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = 0U;
	static int64_t x27 = INT64_MIN;
	volatile uint64_t x28 = 2756298722623760LLU;
	uint64_t t5 = 4064483039251505LLU;

	t5 = ((x25%x26)*(x27-x28));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x33 = -1LL;
	int32_t x34 = -1;
	volatile int16_t x35 = 4347;
	static int32_t x36 = INT32_MAX;
	static volatile int64_t t6 = 452813598830459216LL;

	t6 = ((x33%x34)*(x35-x36));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 1LL;
	uint64_t x38 = UINT64_MAX;
	int16_t x39 = -1;

	t7 = ((x37%x38)*(x39-x40));

	if (t7 != 32767LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = -1;
	uint16_t x42 = 19U;
	uint16_t x43 = 39U;
	static volatile int16_t x44 = INT16_MIN;
	volatile int32_t t8 = 67879;

	t8 = ((x41%x42)*(x43-x44));

	if (t8 != -32807) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = -1LL;
	int64_t x46 = -1LL;
	int16_t x47 = -1;
	int64_t t9 = 0LL;

	t9 = ((x45%x46)*(x47-x48));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x50 = INT8_MIN;
	int32_t x51 = -2640;
	int16_t x52 = -108;
	volatile int32_t t10 = -38493872;

	t10 = ((x49%x50)*(x51-x52));

	if (t10 != -321564) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x55 = -16;
	static int8_t x56 = INT8_MIN;

	t11 = ((x53%x54)*(x55-x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = 16297LL;
	int32_t x58 = 62;
	uint8_t x59 = 13U;
	static int8_t x60 = 57;
	int64_t t12 = 42497LL;

	t12 = ((x57%x58)*(x59-x60));

	if (t12 != -2332LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x61 = 10229;
	int64_t x62 = -5590027067LL;
	int8_t x63 = -1;
	uint16_t x64 = UINT16_MAX;
	int64_t t13 = -1397618000236LL;

	t13 = ((x61%x62)*(x63-x64));

	if (t13 != -670367744LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = 2431939058725456707LL;
	int32_t x66 = -1;
	int16_t x67 = INT16_MIN;

	t14 = ((x65%x66)*(x67-x68));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int8_t x70 = 2;
	int64_t x71 = -338935056415330LL;
	int16_t x72 = INT16_MIN;
	int64_t t15 = 131359274404LL;

	t15 = ((x69%x70)*(x71-x72));

	if (t15 != 338935056382562LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x73 = INT64_MIN;
	int16_t x74 = 2293;
	int64_t t16 = -86169730644942150LL;

	t16 = ((x73%x74)*(x75-x76));

	if (t16 != -8808977649262LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MAX;
	int64_t x78 = 3153590574115709LL;
	uint16_t x79 = UINT16_MAX;
	static uint16_t x80 = UINT16_MAX;
	volatile int64_t t17 = -75912137005LL;

	t17 = ((x77%x78)*(x79-x80));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = 3893;
	int8_t x82 = INT8_MAX;
	volatile int8_t x83 = -1;
	int8_t x84 = -1;
	volatile int32_t t18 = -27;

	t18 = ((x81%x82)*(x83-x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 11578U;
	int32_t x86 = -24390;
	int8_t x88 = -1;
	volatile uint32_t t19 = 10758U;

	t19 = ((x85%x86)*(x87-x88));

	if (t19 != 127358U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 1;
	int8_t x90 = INT8_MAX;
	volatile uint32_t x91 = UINT32_MAX;
	volatile int64_t x92 = -1LL;
	int64_t t20 = 2446LL;

	t20 = ((x89%x90)*(x91-x92));

	if (t20 != 4294967296LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = -1;
	static int8_t x94 = INT8_MIN;
	int16_t x95 = -31;
	int64_t x96 = INT64_MIN;
	int64_t t21 = 732032580457168830LL;

	t21 = ((x93%x94)*(x95-x96));

	if (t21 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = -1LL;
	uint8_t x99 = 3U;
	int32_t x100 = -1;
	int64_t t22 = -13269678485LL;

	t22 = ((x97%x98)*(x99-x100));

	if (t22 != -4LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x101 = 0U;
	static volatile int32_t x102 = -11322;
	volatile int16_t x103 = INT16_MIN;
	static volatile uint64_t x104 = 3394345815941LLU;
	static volatile uint64_t t23 = 312LLU;

	t23 = ((x101%x102)*(x103-x104));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 3LLU;
	uint64_t x107 = 44127LLU;
	static volatile uint16_t x108 = 92U;
	volatile uint64_t t24 = 58209541LLU;

	t24 = ((x105%x106)*(x107-x108));

	if (t24 != 88070LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x117 = UINT16_MAX;
	uint8_t x118 = 9U;
	volatile int64_t x119 = -11886660657393960LL;
	uint8_t x120 = 123U;
	volatile int64_t t25 = 228554482773496120LL;

	t25 = ((x117%x118)*(x119-x120));

	if (t25 != -71319963944364498LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x121 = -16;
	volatile int64_t x122 = INT64_MIN;
	int16_t x123 = -223;
	volatile int64_t t26 = -14341824450957659LL;

	t26 = ((x121%x122)*(x123-x124));

	if (t26 != 1520LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x125 = 484U;
	static int32_t x126 = -5560113;
	volatile int32_t x127 = -1;
	int32_t x128 = -1;
	volatile int32_t t27 = 9;

	t27 = ((x125%x126)*(x127-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x130 = UINT8_MAX;
	static int32_t x131 = -97;
	int16_t x132 = -1;
	int64_t t28 = -5878875487LL;

	t28 = ((x129%x130)*(x131-x132));

	if (t28 != -12192LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = -1;
	volatile int8_t x139 = INT8_MAX;
	int64_t x140 = -1LL;
	int64_t t29 = -221604144160217550LL;

	t29 = ((x137%x138)*(x139-x140));

	if (t29 != -128LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x141 = UINT64_MAX;
	static volatile uint16_t x142 = UINT16_MAX;
	int64_t x144 = 28002464756244LL;

	t30 = ((x141%x142)*(x143-x144));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x146 = 5;
	uint64_t x147 = UINT64_MAX;
	volatile uint64_t t31 = 45LLU;

	t31 = ((x145%x146)*(x147-x148));

	if (t31 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = 87035612550LL;
	int16_t x150 = INT16_MIN;
	static int64_t x151 = -277840714LL;
	volatile int16_t x152 = -1;
	int64_t t32 = -9342548521335049LL;

	t32 = ((x149%x150)*(x151-x152));

	if (t32 != -961884548406LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = INT32_MAX;
	uint32_t x155 = UINT32_MAX;
	int32_t x156 = 351;
	volatile uint32_t t33 = 128401089U;

	t33 = ((x153%x154)*(x155-x156));

	if (t33 != 4294964832U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x161 = 2449U;
	int32_t x162 = 1130934;
	volatile int32_t x164 = INT32_MIN;
	int32_t t34 = 3;

	t34 = ((x161%x162)*(x163-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x171 = 14U;
	int8_t x172 = INT8_MAX;

	t35 = ((x169%x170)*(x171-x172));

	if (t35 != 904) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x173 = -50;
	static int64_t x174 = -1LL;
	uint32_t x175 = UINT32_MAX;

	t36 = ((x173%x174)*(x175-x176));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x177 = -1;
	static int32_t x178 = -21871;
	uint64_t x179 = UINT64_MAX;
	int32_t x180 = INT32_MIN;

	t37 = ((x177%x178)*(x179-x180));

	if (t37 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x181 = 30071LLU;
	static int8_t x182 = 3;
	uint64_t x183 = 9LLU;
	static volatile int64_t x184 = INT64_MAX;
	uint64_t t38 = 5948955041LLU;

	t38 = ((x181%x182)*(x183-x184));

	if (t38 != 20LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x185 = 1554U;
	uint32_t x186 = 757U;
	static volatile uint32_t x187 = UINT32_MAX;
	uint8_t x188 = 10U;
	static volatile uint32_t t39 = 235450100U;

	t39 = ((x185%x186)*(x187-x188));

	if (t39 != 4294966856U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x189 = UINT64_MAX;
	int16_t x190 = INT16_MAX;
	volatile int16_t x192 = INT16_MIN;
	uint64_t t40 = 41299191479848444LLU;

	t40 = ((x189%x190)*(x191-x192));

	if (t40 != 983025LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x194 = INT16_MIN;
	static volatile uint64_t t41 = 7065756LLU;

	t41 = ((x193%x194)*(x195-x196));

	if (t41 != 18446743616295561856LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x197 = INT16_MIN;
	static int32_t x198 = -6;
	int32_t t42 = -83;

	t42 = ((x197%x198)*(x199-x200));

	if (t42 != 131068) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x201 = INT16_MIN;
	int8_t x202 = 1;
	int8_t x203 = 0;
	static uint32_t x204 = 2U;
	volatile uint32_t t43 = 1900231U;

	t43 = ((x201%x202)*(x203-x204));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = 60;
	uint64_t x206 = 223LLU;
	static int32_t x207 = INT32_MAX;
	uint64_t x208 = UINT64_MAX;
	uint64_t t44 = 8887381LLU;

	t44 = ((x205%x206)*(x207-x208));

	if (t44 != 128849018880LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x209 = -236;
	int16_t x210 = -2623;
	volatile int8_t x211 = INT8_MAX;
	static int64_t x212 = -57857172655LL;
	volatile int64_t t45 = -1LL;

	t45 = ((x209%x210)*(x211-x212));

	if (t45 != -13654292776552LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = -3553;
	static uint64_t x216 = 13968224900207075LLU;
	uint64_t t46 = 23819LLU;

	t46 = ((x213%x214)*(x215-x216));

	if (t46 != 16672779511382801860LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x218 = -1;
	uint64_t x219 = 62527963636784LLU;
	volatile int8_t x220 = INT8_MIN;
	uint64_t t47 = 418164051LLU;

	t47 = ((x217%x218)*(x219-x220));

	if (t47 != 10873912182164626240LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x222 = UINT32_MAX;
	volatile int8_t x223 = -1;
	volatile uint8_t x224 = UINT8_MAX;
	volatile uint32_t t48 = 69U;

	t48 = ((x221%x222)*(x223-x224));

	if (t48 != 4294962176U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x225 = 329;
	uint16_t x226 = 18377U;
	static uint16_t x227 = UINT16_MAX;

	t49 = ((x225%x226)*(x227-x228));

	if (t49 != 21561344LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x229 = -1;
	static uint64_t x230 = UINT64_MAX;
	static volatile uint8_t x231 = UINT8_MAX;
	uint64_t t50 = 81223069081LLU;

	t50 = ((x229%x230)*(x231-x232));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x233 = UINT16_MAX;
	static volatile int8_t x234 = -6;
	uint16_t x235 = 30U;

	t51 = ((x233%x234)*(x235-x236));

	if (t51 != 11473989) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x237 = INT8_MIN;
	static int32_t x238 = INT32_MIN;
	uint64_t x239 = UINT64_MAX;
	int16_t x240 = INT16_MIN;

	t52 = ((x237%x238)*(x239-x240));

	if (t52 != 18446744073705357440LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x241 = 124U;
	volatile int16_t x242 = -13;
	int64_t x243 = -1LL;
	static int16_t x244 = -1;
	volatile int64_t t53 = -61359LL;

	t53 = ((x241%x242)*(x243-x244));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 109U;
	uint64_t x246 = 7121874457997622LLU;
	volatile int8_t x247 = INT8_MIN;
	uint64_t t54 = 8813786320060388893LLU;

	t54 = ((x245%x246)*(x247-x248));

	if (t54 != 18446744073709537664LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x249 = UINT16_MAX;
	volatile int8_t x250 = -7;
	uint16_t x251 = 65U;
	int16_t x252 = INT16_MIN;

	t55 = ((x249%x250)*(x251-x252));

	if (t55 != 32833) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x255 = 1LLU;
	int64_t x256 = -33096252054657759LL;
	static volatile uint64_t t56 = 4745086987LLU;

	t56 = ((x253%x254)*(x255-x256));

	if (t56 != 496443780819866400LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = INT64_MIN;
	volatile int64_t x259 = 2207055504089LL;
	uint8_t x260 = 3U;

	t57 = ((x257%x258)*(x259-x260));

	if (t57 != -17656444032688LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x261 = UINT16_MAX;
	static uint64_t x262 = UINT64_MAX;
	static uint16_t x263 = 15632U;
	uint8_t x264 = UINT8_MAX;

	t58 = ((x261%x262)*(x263-x264));

	if (t58 != 1007731695LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x269 = -1;
	int64_t x270 = -1LL;
	int32_t x271 = -1;
	volatile uint8_t x272 = 0U;
	static int64_t t59 = -31LL;

	t59 = ((x269%x270)*(x271-x272));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x273 = 131538U;
	int16_t x276 = 1;

	t60 = ((x273%x274)*(x275-x276));

	if (t60 != 4872LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = -25;
	int8_t x283 = INT8_MIN;
	static int16_t x284 = -1;
	volatile int32_t t61 = 9497258;

	t61 = ((x281%x282)*(x283-x284));

	if (t61 != 3175) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x285 = UINT64_MAX;
	uint16_t x287 = 27U;
	volatile int8_t x288 = INT8_MIN;
	uint64_t t62 = 122LLU;

	t62 = ((x285%x286)*(x287-x288));

	if (t62 != 155LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x289 = -1;
	uint32_t x290 = UINT32_MAX;
	uint32_t x292 = 1905964978U;
	volatile uint32_t t63 = 116U;

	t63 = ((x289%x290)*(x291-x292));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = -1;
	int16_t x294 = INT16_MIN;
	static int32_t x295 = -1;
	int8_t x296 = -1;
	static int32_t t64 = -19259;

	t64 = ((x293%x294)*(x295-x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x297 = 2U;
	int32_t x298 = INT32_MIN;
	int64_t x300 = 2236981634254LL;
	volatile int64_t t65 = 6505059LL;

	t65 = ((x297%x298)*(x299-x300));

	if (t65 != -4473963268444LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = -1;
	int64_t x302 = -1LL;
	volatile int64_t t66 = 60LL;

	t66 = ((x301%x302)*(x303-x304));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x305 = 14U;
	volatile int64_t x306 = INT64_MAX;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = 507LLU;
	volatile uint64_t t67 = 314380307LLU;

	t67 = ((x305%x306)*(x307-x308));

	if (t67 != 18446744073709542726LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x317 = 840U;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	uint32_t x320 = 41U;
	volatile uint32_t t68 = 0U;

	t68 = ((x317%x318)*(x319-x320));

	if (t68 != 55014960U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x321 = -1;
	int32_t x322 = 411;
	uint32_t x323 = 24609U;
	volatile int64_t t69 = 772LL;

	t69 = ((x321%x322)*(x323-x324));

	if (t69 != 903434LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x330 = -1;
	int64_t x331 = 14338555LL;
	static int64_t t70 = 0LL;

	t70 = ((x329%x330)*(x331-x332));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MIN;
	uint64_t x335 = UINT64_MAX;
	int16_t x336 = -7650;
	volatile uint64_t t71 = 5006109LLU;

	t71 = ((x333%x334)*(x335-x336));

	if (t71 != 501277215LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x337 = 31U;
	uint64_t x338 = 64443138558239282LLU;
	volatile int32_t x339 = -1;
	static uint64_t x340 = 783LLU;
	volatile uint64_t t72 = 113LLU;

	t72 = ((x337%x338)*(x339-x340));

	if (t72 != 18446744073709527312LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x341 = 45740;
	uint8_t x342 = 1U;
	static volatile int16_t x343 = -1;
	static uint8_t x344 = UINT8_MAX;
	int32_t t73 = 44;

	t73 = ((x341%x342)*(x343-x344));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x345 = 25838;
	int32_t x346 = 7;
	static int8_t x347 = -19;
	uint8_t x348 = UINT8_MAX;
	volatile int32_t t74 = -51619;

	t74 = ((x345%x346)*(x347-x348));

	if (t74 != -274) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x349 = INT16_MAX;
	static int8_t x351 = -6;
	static int64_t t75 = 1076256156784566754LL;

	t75 = ((x349%x350)*(x351-x352));

	if (t75 != -163835LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = -79;
	int8_t x354 = -3;
	int8_t x355 = -59;
	volatile uint16_t x356 = 50U;
	volatile int32_t t76 = -953;

	t76 = ((x353%x354)*(x355-x356));

	if (t76 != 109) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x357 = 4;
	volatile uint16_t x358 = UINT16_MAX;
	static int64_t x359 = -1LL;
	volatile uint32_t x360 = UINT32_MAX;
	int64_t t77 = 118LL;

	t77 = ((x357%x358)*(x359-x360));

	if (t77 != -17179869184LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x361 = 138393184239295149LL;
	int64_t x362 = -1LL;
	volatile int32_t x363 = -1;
	int8_t x364 = INT8_MAX;
	static int64_t t78 = -58143LL;

	t78 = ((x361%x362)*(x363-x364));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = -1LL;
	int16_t x366 = INT16_MIN;
	uint16_t x367 = 9924U;
	int16_t x368 = 395;
	static volatile int64_t t79 = 6366285441159LL;

	t79 = ((x365%x366)*(x367-x368));

	if (t79 != -9529LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = 5574U;
	static uint32_t x371 = 3083U;
	static int16_t x372 = INT16_MIN;
	static int64_t t80 = -4366757995LL;

	t80 = ((x369%x370)*(x371-x372));

	if (t80 != 199833474LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MAX;
	uint32_t x374 = UINT32_MAX;
	static int8_t x375 = INT8_MIN;
	volatile int16_t x376 = INT16_MAX;
	uint32_t t81 = 209U;

	t81 = ((x373%x374)*(x375-x376));

	if (t81 != 2147516543U) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x377 = UINT8_MAX;
	int8_t x378 = -1;
	static int16_t x379 = INT16_MIN;
	uint64_t x380 = 10832973LLU;
	uint64_t t82 = 211LLU;

	t82 = ((x377%x378)*(x379-x380));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x381 = 15;
	int64_t x382 = INT64_MIN;
	int16_t x384 = INT16_MIN;
	uint64_t t83 = 839213247848330LLU;

	t83 = ((x381%x382)*(x383-x384));

	if (t83 != 11630408400LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x385 = INT8_MIN;
	int16_t x386 = INT16_MIN;
	int32_t x387 = 441368;
	uint64_t x388 = UINT64_MAX;

	t84 = ((x385%x386)*(x387-x388));

	if (t84 != 18446744073653056384LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MAX;
	volatile int16_t x391 = -1;
	int32_t x392 = INT32_MAX;
	int64_t t85 = 3014211370375097037LL;

	t85 = ((x389%x390)*(x391-x392));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x393 = INT64_MIN;
	static uint32_t x394 = UINT32_MAX;
	int32_t x395 = -203926;
	int64_t x396 = -1LL;

	t86 = ((x393%x394)*(x395-x396));

	if (t86 != 437925602918400LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = -1;
	volatile int32_t x399 = INT32_MAX;
	uint8_t x400 = 2U;
	volatile int32_t t87 = -5235964;

	t87 = ((x397%x398)*(x399-x400));

	if (t87 != -2147483645) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x401 = INT8_MAX;
	static int32_t x402 = -1;
	static volatile int16_t x403 = 82;
	int64_t x404 = -1LL;
	static volatile int64_t t88 = 258891539LL;

	t88 = ((x401%x402)*(x403-x404));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int32_t x405 = 7;
	static int8_t x406 = -1;
	static volatile int16_t x407 = INT16_MIN;
	int16_t x408 = -1;
	volatile int32_t t89 = -195389;

	t89 = ((x405%x406)*(x407-x408));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x410 = INT64_MIN;
	int8_t x411 = -1;
	volatile int64_t x412 = -3631729305562LL;
	volatile int64_t t90 = 9LL;

	t90 = ((x409%x410)*(x411-x412));

	if (t90 != 21790375833366LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = INT64_MIN;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = -1;
	static uint8_t x416 = UINT8_MAX;
	int64_t t91 = 0LL;

	t91 = ((x413%x414)*(x415-x416));

	if (t91 != 32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x417 = INT64_MIN;
	int32_t x419 = -51;
	int8_t x420 = INT8_MIN;
	int64_t t92 = 1071540441LL;

	t92 = ((x417%x418)*(x419-x420));

	if (t92 != -20944LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	volatile int64_t x423 = INT64_MAX;
	uint8_t x424 = UINT8_MAX;
	int64_t t93 = -22LL;

	t93 = ((x421%x422)*(x423-x424));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint16_t x426 = 4U;
	uint32_t x428 = UINT32_MAX;
	uint32_t t94 = 177497U;

	t94 = ((x425%x426)*(x427-x428));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x430 = INT8_MIN;
	static int8_t x431 = 2;
	int32_t t95 = -197770;

	t95 = ((x429%x430)*(x431-x432));

	if (t95 != 32452) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x437 = -15;
	static volatile int64_t x438 = 200453818795LL;
	uint32_t x439 = 222U;
	static int32_t x440 = INT32_MAX;
	volatile int64_t t96 = 41LL;

	t96 = ((x437%x438)*(x439-x440));

	if (t96 != -32212258065LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -3767720;
	int32_t x442 = 392797165;
	int8_t x443 = -15;
	int8_t x444 = -8;

	t97 = ((x441%x442)*(x443-x444));

	if (t97 != 26374040) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	volatile int32_t x447 = INT32_MIN;
	static int32_t t98 = -156401;

	t98 = ((x445%x446)*(x447-x448));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x449 = 29656071948507LLU;
	int32_t x450 = INT32_MIN;
	int16_t x451 = -1;
	uint64_t t99 = 1LLU;

	t99 = ((x449%x450)*(x451-x452));

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

