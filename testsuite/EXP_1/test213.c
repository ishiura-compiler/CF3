#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1526U;
uint64_t t1 = 965051873LLU;
int16_t x11 = INT16_MAX;
int64_t x12 = INT64_MAX;
static int64_t t2 = 3004475267253620731LL;
int32_t x20 = INT32_MIN;
uint32_t t4 = 179819U;
int64_t x25 = 44320800751LL;
static int16_t x42 = INT16_MIN;
volatile int64_t t9 = 7738947LL;
int16_t x48 = INT16_MAX;
static volatile int64_t t10 = -14786580245895642LL;
int16_t x57 = INT16_MIN;
volatile int64_t x58 = 51054803LL;
int16_t x63 = -1;
uint8_t x64 = UINT8_MAX;
static int16_t x69 = 96;
int64_t x72 = INT64_MIN;
volatile int64_t t15 = -5876151LL;
int8_t x79 = INT8_MAX;
int64_t t18 = -553612LL;
uint16_t x93 = UINT16_MAX;
static uint64_t x94 = 11348LLU;
int32_t x97 = INT32_MAX;
volatile uint32_t t22 = 7U;
uint64_t x109 = UINT64_MAX;
int64_t x110 = INT64_MIN;
static volatile int64_t t26 = -731108675LL;
volatile int32_t x119 = -1;
uint64_t x120 = UINT64_MAX;
uint8_t x127 = UINT8_MAX;
uint32_t x133 = 2071138U;
uint64_t x139 = 87707237LLU;
uint64_t t30 = 13527196799954LLU;
volatile uint32_t x143 = 6499U;
uint64_t x148 = UINT64_MAX;
int16_t x151 = INT16_MIN;
volatile int16_t x157 = -1;
int16_t x160 = INT16_MIN;
int8_t x161 = -1;
int8_t x167 = INT8_MAX;
uint32_t x168 = UINT32_MAX;
int8_t x169 = 11;
int64_t x180 = INT64_MIN;
int64_t t40 = 1788558014689822LL;
static int64_t x183 = INT64_MIN;
static volatile int64_t t41 = -267206LL;
int32_t x186 = INT32_MIN;
int16_t x190 = -5172;
int64_t x195 = 54811041965LL;
volatile uint64_t t44 = 501823326LLU;
int64_t x199 = INT64_MAX;
static int8_t x200 = -1;
uint8_t x205 = UINT8_MAX;
int32_t x207 = INT32_MAX;
uint64_t x213 = 29018737976799LLU;
uint64_t x214 = 123537836548LLU;
static int64_t x216 = INT64_MIN;
static int16_t x220 = INT16_MIN;
static uint8_t x225 = UINT8_MAX;
uint8_t x226 = UINT8_MAX;
static int32_t x229 = INT32_MAX;
int64_t x244 = INT64_MIN;
volatile int8_t x252 = -8;
int8_t x253 = INT8_MIN;
int8_t x254 = -1;
int8_t x256 = -1;
uint8_t x262 = UINT8_MAX;
volatile uint64_t t60 = 12483148538LLU;
volatile uint64_t t62 = 85858LLU;
uint8_t x282 = 17U;
int16_t x284 = 428;
static int32_t t64 = -1;
uint32_t x289 = UINT32_MAX;
int8_t x292 = INT8_MIN;
uint32_t t65 = 2038U;
volatile uint64_t t67 = 75415250493672748LLU;
static volatile uint64_t t68 = 8715256445370167014LLU;
int64_t x328 = -1LL;
static int32_t x332 = INT32_MAX;
uint8_t x333 = UINT8_MAX;
volatile uint32_t t73 = 53474366U;
static volatile uint8_t x339 = 48U;
volatile uint64_t t76 = 2105921LLU;
volatile int16_t x355 = INT16_MIN;
int16_t x358 = INT16_MIN;
static volatile int64_t t80 = -75750112LL;
uint64_t x365 = 9707114731628205LLU;
int8_t x372 = -1;
uint64_t x373 = 0LLU;
static int8_t x384 = -1;
int64_t x388 = INT64_MIN;
int8_t x390 = -14;
volatile int64_t x393 = INT64_MAX;
int16_t x400 = 1;
static volatile int16_t x402 = 1;
uint32_t x414 = 113446811U;
uint32_t x437 = 0U;
int32_t x438 = INT32_MIN;


void f0(void) {
	int32_t x2 = -1;
	int8_t x3 = -1;
	static volatile uint32_t x4 = 578142U;
	uint32_t t0 = 2483906U;

	t0 = (((x1-x2)/x3)%x4);

	if (t0 != 526993U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = 2;
	uint64_t x6 = UINT64_MAX;
	int32_t x7 = 643898;
	volatile int32_t x8 = INT32_MIN;

	t1 = (((x5-x6)/x7)%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	volatile int16_t x10 = INT16_MIN;

	t2 = (((x9-x10)/x11)%x12);

	if (t2 != 3LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 43U;
	volatile int64_t x14 = 21681801884LL;
	uint64_t x15 = UINT64_MAX;
	int32_t x16 = 3;
	volatile uint64_t t3 = 192024559605042LLU;

	t3 = (((x13-x14)/x15)%x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	uint16_t x18 = 192U;
	uint32_t x19 = UINT32_MAX;

	t4 = (((x17-x18)/x19)%x20);

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 221875668LL;
	static volatile int32_t x24 = 9149;
	static volatile int64_t t5 = -3649819639707LL;

	t5 = (((x21-x22)/x23)%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	volatile int64_t x27 = -1LL;
	static volatile uint64_t x28 = UINT64_MAX;
	volatile uint64_t t6 = 156038824086527LLU;

	t6 = (((x25-x26)/x27)%x28);

	if (t6 != 18446744029388750864LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x29 = -24;
	static uint16_t x30 = 1U;
	int16_t x31 = -1;
	static int64_t x32 = -1LL;
	static volatile int64_t t7 = -3820LL;

	t7 = (((x29-x30)/x31)%x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int32_t x34 = -80779943;
	uint8_t x35 = 26U;
	static int8_t x36 = INT8_MIN;
	static int32_t t8 = 2586703;

	t8 = (((x33-x34)/x35)%x36);

	if (t8 != 124) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = -149429414984477052LL;
	uint8_t x43 = 23U;
	static int8_t x44 = INT8_MIN;

	t9 = (((x41-x42)/x43)%x44);

	if (t9 != -122LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x45 = 6U;
	static int16_t x46 = 7726;
	int64_t x47 = INT64_MIN;

	t10 = (((x45-x46)/x47)%x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	volatile int16_t x50 = -1;
	volatile int64_t x51 = INT64_MAX;
	uint64_t x52 = 33139981LLU;
	volatile uint64_t t11 = 4621649863882LLU;

	t11 = (((x49-x50)/x51)%x52);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 3U;
	static volatile int64_t t12 = -427605710827469LL;

	t12 = (((x57-x58)/x59)%x60);

	if (t12 != 2LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x61 = 13U;
	static volatile int8_t x62 = INT8_MIN;
	static volatile int32_t t13 = 115840119;

	t13 = (((x61-x62)/x63)%x64);

	if (t13 != -141) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 3U;
	int16_t x66 = INT16_MIN;
	uint32_t x67 = 203U;
	volatile int8_t x68 = INT8_MIN;
	volatile uint32_t t14 = 15013U;

	t14 = (((x65-x66)/x67)%x68);

	if (t14 != 161U) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MIN;

	t15 = (((x69-x70)/x71)%x72);

	if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x73 = 1798U;
	static int16_t x74 = -7128;
	volatile int16_t x75 = INT16_MIN;
	uint64_t x76 = 20740672520034LLU;
	volatile uint64_t t16 = 5LLU;

	t16 = (((x73-x74)/x75)%x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -51;
	int8_t x78 = -1;
	int64_t x80 = INT64_MIN;
	static volatile int64_t t17 = -68LL;

	t17 = (((x77-x78)/x79)%x80);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = INT8_MIN;
	static int64_t x82 = -1LL;
	int8_t x83 = -14;
	int32_t x84 = 32;

	t18 = (((x81-x82)/x83)%x84);

	if (t18 != 9LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x85 = UINT32_MAX;
	uint8_t x86 = UINT8_MAX;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MAX;
	uint32_t t19 = 231595245U;

	t19 = (((x85-x86)/x87)%x88);

	if (t19 != 770U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint64_t x89 = 96436943616LLU;
	volatile uint16_t x90 = UINT16_MAX;
	int64_t x91 = 3657725714932833LL;
	uint16_t x92 = 78U;
	static volatile uint64_t t20 = 593230064755780LLU;

	t20 = (((x89-x90)/x91)%x92);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x95 = UINT64_MAX;
	uint8_t x96 = 51U;
	uint64_t t21 = 9263349600587791LLU;

	t21 = (((x93-x94)/x95)%x96);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x98 = 239071U;
	int32_t x99 = 773484;
	uint8_t x100 = UINT8_MAX;

	t22 = (((x97-x98)/x99)%x100);

	if (t22 != 226U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	int64_t x102 = 151022265312LL;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MIN;
	volatile int64_t t23 = -4571973127081142LL;

	t23 = (((x101-x102)/x103)%x104);

	if (t23 != 70LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = 1;
	int32_t x106 = 55305;
	int16_t x107 = -1;
	int16_t x108 = INT16_MAX;
	int32_t t24 = -779;

	t24 = (((x105-x106)/x107)%x108);

	if (t24 != 22537) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x111 = 8309U;
	int64_t x112 = INT64_MIN;
	uint64_t t25 = 682485782953446LLU;

	t25 = (((x109-x110)/x111)%x112);

	if (t25 != 1110045978680319LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x113 = 7U;
	int16_t x114 = -1;
	static int64_t x115 = INT64_MIN;
	static int8_t x116 = -1;

	t26 = (((x113-x114)/x115)%x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x117 = INT32_MIN;
	int8_t x118 = INT8_MIN;
	volatile uint64_t t27 = 11080LLU;

	t27 = (((x117-x118)/x119)%x120);

	if (t27 != 2147483520LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x125 = 9515820U;
	volatile int32_t x126 = INT32_MIN;
	volatile uint64_t x128 = UINT64_MAX;
	volatile uint64_t t28 = 16400LLU;

	t28 = (((x125-x126)/x127)%x128);

	if (t28 != 8458821LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x134 = INT8_MIN;
	int16_t x135 = INT16_MIN;
	volatile int32_t x136 = INT32_MIN;
	volatile uint32_t t29 = 85938U;

	t29 = (((x133-x134)/x135)%x136);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x137 = 404012253U;
	volatile uint32_t x138 = 4U;
	int64_t x140 = 2782107809LL;

	t30 = (((x137-x138)/x139)%x140);

	if (t30 != 4LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x141 = INT8_MIN;
	int16_t x142 = INT16_MIN;
	volatile int64_t x144 = -1LL;
	int64_t t31 = -211455LL;

	t31 = (((x141-x142)/x143)%x144);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x145 = -14060201754128843LL;
	uint32_t x146 = 5U;
	uint64_t x147 = 2710740360LLU;
	volatile uint64_t t32 = 319763751871193655LLU;

	t32 = (((x145-x146)/x147)%x148);

	if (t32 != 6799870671LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MAX;
	static uint8_t x150 = 2U;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t33 = -189873;

	t33 = (((x149-x150)/x151)%x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x153 = INT32_MIN;
	uint64_t x154 = 1953497269041415868LLU;
	static int32_t x155 = INT32_MAX;
	volatile int32_t x156 = 4629;
	volatile uint64_t t34 = 8363474LLU;

	t34 = (((x153-x154)/x155)%x156);

	if (t34 != 1014LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x158 = -1LL;
	uint32_t x159 = UINT32_MAX;
	static volatile int64_t t35 = 594040532750586LL;

	t35 = (((x157-x158)/x159)%x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x162 = INT32_MAX;
	int32_t x163 = INT32_MIN;
	static int32_t x164 = -398684;
	volatile int32_t t36 = 8;

	t36 = (((x161-x162)/x163)%x164);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = INT8_MIN;
	int64_t x166 = -125057LL;
	volatile int64_t t37 = -207LL;

	t37 = (((x165-x166)/x167)%x168);

	if (t37 != 983LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x170 = INT64_MAX;
	static int16_t x171 = 2127;
	uint16_t x172 = 15U;
	volatile int64_t t38 = -62324142LL;

	t38 = (((x169-x170)/x171)%x172);

	if (t38 != -12LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x173 = INT8_MAX;
	uint32_t x174 = 3960U;
	uint64_t x175 = 1214107456365892LLU;
	int32_t x176 = INT32_MIN;
	uint64_t t39 = 29LLU;

	t39 = (((x173-x174)/x175)%x176);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -219993223;
	volatile int64_t x178 = -1LL;
	int8_t x179 = -1;

	t40 = (((x177-x178)/x179)%x180);

	if (t40 != 219993222LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile uint16_t x181 = 89U;
	int8_t x182 = INT8_MAX;
	int32_t x184 = 3933284;

	t41 = (((x181-x182)/x183)%x184);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	int16_t x187 = INT16_MIN;
	static int32_t x188 = INT32_MIN;
	int32_t t42 = 94688;

	t42 = (((x185-x186)/x187)%x188);

	if (t42 != -65535) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x189 = INT64_MIN;
	uint64_t x191 = UINT64_MAX;
	volatile uint32_t x192 = 52U;
	uint64_t t43 = 10898LLU;

	t43 = (((x189-x190)/x191)%x192);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = -1;
	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x196 = 10U;

	t44 = (((x193-x194)/x195)%x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x197 = INT8_MIN;
	volatile int32_t x198 = 6;
	volatile int64_t t45 = -32970119LL;

	t45 = (((x197-x198)/x199)%x200);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x206 = 2LLU;
	volatile int32_t x208 = INT32_MIN;
	volatile uint64_t t46 = 0LLU;

	t46 = (((x205-x206)/x207)%x208);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = -1;
	volatile int64_t x210 = INT64_MIN;
	static uint32_t x211 = UINT32_MAX;
	volatile uint64_t x212 = 5767411263914639LLU;
	uint64_t t47 = 3971LLU;

	t47 = (((x209-x210)/x211)%x212);

	if (t47 != 2147483648LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x215 = -1LL;
	uint64_t t48 = 31484LLU;

	t48 = (((x213-x214)/x215)%x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x217 = INT8_MAX;
	static volatile uint16_t x218 = 195U;
	volatile uint32_t x219 = 41161U;
	volatile uint32_t t49 = 624772U;

	t49 = (((x217-x218)/x219)%x220);

	if (t49 != 104345U) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x221 = INT32_MIN;
	volatile int8_t x222 = INT8_MIN;
	static int8_t x223 = -1;
	static uint8_t x224 = UINT8_MAX;
	volatile int32_t t50 = 570;

	t50 = (((x221-x222)/x223)%x224);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x227 = 210U;
	int32_t x228 = 88976;
	static uint32_t t51 = 319861U;

	t51 = (((x225-x226)/x227)%x228);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x230 = UINT64_MAX;
	volatile int64_t x231 = 12754854053LL;
	volatile int64_t x232 = INT64_MAX;
	uint64_t t52 = 52149599LLU;

	t52 = (((x229-x230)/x231)%x232);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x233 = -1;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = -1;
	int64_t x236 = 2079795172098873LL;
	static volatile int64_t t53 = -129624LL;

	t53 = (((x233-x234)/x235)%x236);

	if (t53 != -2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x237 = INT32_MIN;
	uint32_t x238 = 1121U;
	int16_t x239 = INT16_MAX;
	uint8_t x240 = 6U;
	uint32_t t54 = 2201U;

	t54 = (((x237-x238)/x239)%x240);

	if (t54 != 5U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x241 = -1LL;
	int64_t x242 = -21LL;
	static uint32_t x243 = 27389060U;
	volatile int64_t t55 = -103802890285249LL;

	t55 = (((x241-x242)/x243)%x244);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x249 = INT16_MIN;
	int64_t x250 = INT64_MIN;
	int16_t x251 = -1;
	static int64_t t56 = 54LL;

	t56 = (((x249-x250)/x251)%x252);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x255 = INT8_MIN;
	volatile int32_t t57 = -3;

	t57 = (((x253-x254)/x255)%x256);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x257 = 5933U;
	static int64_t x258 = -1LL;
	int64_t x259 = 150230065917196LL;
	volatile int8_t x260 = INT8_MIN;
	volatile int64_t t58 = 91385LL;

	t58 = (((x257-x258)/x259)%x260);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x261 = 255479LL;
	uint8_t x263 = 30U;
	int32_t x264 = -47;
	volatile int64_t t59 = -1822345047667727LL;

	t59 = (((x261-x262)/x263)%x264);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x269 = -1LL;
	uint64_t x270 = 41LLU;
	int32_t x271 = -32;
	uint8_t x272 = 2U;

	t60 = (((x269-x270)/x271)%x272);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x273 = -1LL;
	static int32_t x274 = 1769;
	uint8_t x275 = 7U;
	uint64_t x276 = 66239163385970273LLU;
	static volatile uint64_t t61 = 7249786104858250LLU;

	t61 = (((x273-x274)/x275)%x276);

	if (t61 != 32256652409815470LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = INT64_MAX;
	static int8_t x278 = 1;
	int32_t x279 = 664;
	volatile uint64_t x280 = UINT64_MAX;

	t62 = (((x277-x278)/x279)%x280);

	if (t62 != 13890620537431891LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = 6;
	int16_t x283 = 1701;
	int32_t t63 = -93;

	t63 = (((x281-x282)/x283)%x284);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x285 = INT16_MAX;
	int8_t x286 = 2;
	int32_t x287 = -1;
	int32_t x288 = INT32_MIN;

	t64 = (((x285-x286)/x287)%x288);

	if (t64 != -32765) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x290 = -1;
	static uint16_t x291 = UINT16_MAX;

	t65 = (((x289-x290)/x291)%x292);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x293 = INT32_MAX;
	uint32_t x294 = 1486936926U;
	int16_t x295 = -1;
	int16_t x296 = 13;
	volatile uint32_t t66 = 69781802U;

	t66 = (((x293-x294)/x295)%x296);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -15305910490101113LL;
	int64_t x299 = INT64_MIN;
	uint64_t x300 = 110959391031112LLU;

	t67 = (((x297-x298)/x299)%x300);

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x309 = INT32_MIN;
	static volatile uint64_t x310 = 21589688LLU;
	int8_t x311 = -1;
	uint32_t x312 = UINT32_MAX;

	t68 = (((x309-x310)/x311)%x312);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x317 = 591U;
	int8_t x318 = INT8_MIN;
	volatile int32_t x319 = INT32_MIN;
	int64_t x320 = -59LL;
	volatile int64_t t69 = -499496510721583557LL;

	t69 = (((x317-x318)/x319)%x320);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = 685094674LL;
	int16_t x322 = -1;
	uint32_t x323 = 208320U;
	int16_t x324 = INT16_MIN;
	int64_t t70 = 372943LL;

	t70 = (((x321-x322)/x323)%x324);

	if (t70 != 3288LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x325 = -1LL;
	volatile int32_t x326 = INT32_MIN;
	int16_t x327 = -1;
	volatile int64_t t71 = 240157LL;

	t71 = (((x325-x326)/x327)%x328);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = 0;
	volatile int8_t x330 = INT8_MIN;
	volatile int32_t x331 = -2;
	volatile int32_t t72 = 8397581;

	t72 = (((x329-x330)/x331)%x332);

	if (t72 != -64) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x334 = UINT32_MAX;
	static volatile int32_t x335 = -1;
	int8_t x336 = 1;

	t73 = (((x333-x334)/x335)%x336);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x337 = 5430;
	uint32_t x338 = UINT32_MAX;
	int64_t x340 = INT64_MIN;
	int64_t t74 = -3806124122636LL;

	t74 = (((x337-x338)/x339)%x340);

	if (t74 != 113LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x341 = INT8_MAX;
	volatile uint32_t x342 = UINT32_MAX;
	volatile int64_t x343 = INT64_MAX;
	int64_t x344 = INT64_MAX;
	volatile int64_t t75 = 7361195623537LL;

	t75 = (((x341-x342)/x343)%x344);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -1;
	uint64_t x346 = 247506455639371596LLU;
	uint32_t x347 = UINT32_MAX;
	static uint64_t x348 = 4473648633673821LLU;

	t76 = (((x345-x346)/x347)%x348);

	if (t76 != 4237340209LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x349 = 52LLU;
	volatile int32_t x350 = INT32_MAX;
	uint64_t x351 = 4676991164113675LLU;
	uint16_t x352 = UINT16_MAX;
	volatile uint64_t t77 = 4015115793908LLU;

	t77 = (((x349-x350)/x351)%x352);

	if (t77 != 3944LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x353 = 894301LLU;
	volatile int16_t x354 = INT16_MIN;
	int64_t x356 = INT64_MIN;
	volatile uint64_t t78 = 470LLU;

	t78 = (((x353-x354)/x355)%x356);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x357 = 5U;
	int64_t x359 = -4546550958616934LL;
	static uint16_t x360 = UINT16_MAX;
	int64_t t79 = 83864LL;

	t79 = (((x357-x358)/x359)%x360);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = -1;
	int64_t x363 = -1LL;
	volatile int32_t x364 = INT32_MIN;

	t80 = (((x361-x362)/x363)%x364);

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x366 = 1;
	uint16_t x367 = UINT16_MAX;
	static uint16_t x368 = 1U;
	volatile uint64_t t81 = 1LLU;

	t81 = (((x365-x366)/x367)%x368);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = 98454951;
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = INT64_MIN;
	int64_t t82 = 12756619227LL;

	t82 = (((x369-x370)/x371)%x372);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x374 = -1;
	uint32_t x375 = 762U;
	static int8_t x376 = INT8_MIN;
	uint64_t t83 = 3LLU;

	t83 = (((x373-x374)/x375)%x376);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x381 = 36869604841LLU;
	int32_t x382 = -1;
	volatile uint64_t x383 = 441950999519121LLU;
	static volatile uint64_t t84 = 6609576825666LLU;

	t84 = (((x381-x382)/x383)%x384);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x385 = -1LL;
	int8_t x386 = 1;
	int8_t x387 = INT8_MIN;
	volatile int64_t t85 = -1997090LL;

	t85 = (((x385-x386)/x387)%x388);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x389 = UINT8_MAX;
	static volatile uint64_t x391 = 3608441LLU;
	static volatile int16_t x392 = INT16_MIN;
	static volatile uint64_t t86 = 405809018015838558LLU;

	t86 = (((x389-x390)/x391)%x392);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x394 = UINT16_MAX;
	static uint32_t x395 = UINT32_MAX;
	int16_t x396 = INT16_MIN;
	int64_t t87 = -6LL;

	t87 = (((x393-x394)/x395)%x396);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x397 = -2931LL;
	uint64_t x398 = 210LLU;
	int64_t x399 = -7167644686465LL;
	static uint64_t t88 = 27312LLU;

	t88 = (((x397-x398)/x399)%x400);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x401 = INT8_MIN;
	static int32_t x403 = INT32_MAX;
	int8_t x404 = INT8_MIN;
	int32_t t89 = 1;

	t89 = (((x401-x402)/x403)%x404);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x405 = -1;
	volatile int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	uint16_t x408 = 49U;
	int32_t t90 = 14;

	t90 = (((x405-x406)/x407)%x408);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x409 = -1;
	int64_t x410 = INT64_MIN;
	uint32_t x411 = 27U;
	int16_t x412 = INT16_MAX;
	static int64_t t91 = 9053LL;

	t91 = (((x409-x410)/x411)%x412);

	if (t91 != 21844LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x413 = UINT16_MAX;
	int16_t x415 = -273;
	static uint16_t x416 = 4U;
	volatile uint32_t t92 = 79704295U;

	t92 = (((x413-x414)/x415)%x416);

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = -792;
	volatile int32_t x418 = INT32_MIN;
	int16_t x419 = 9;
	volatile int32_t x420 = INT32_MIN;
	volatile int32_t t93 = -95;

	t93 = (((x417-x418)/x419)%x420);

	if (t93 != 238609206) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x421 = INT32_MIN;
	uint32_t x422 = 12164295U;
	volatile int16_t x423 = -1;
	static volatile int64_t x424 = INT64_MIN;
	volatile int64_t t94 = 118172967464663LL;

	t94 = (((x421-x422)/x423)%x424);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x425 = -1;
	static uint32_t x426 = 24U;
	int64_t x427 = INT64_MIN;
	volatile int32_t x428 = INT32_MIN;
	volatile int64_t t95 = -31177LL;

	t95 = (((x425-x426)/x427)%x428);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x429 = -2;
	int8_t x430 = INT8_MAX;
	static int32_t x431 = -1;
	int64_t x432 = INT64_MAX;
	int64_t t96 = -4652326677915LL;

	t96 = (((x429-x430)/x431)%x432);

	if (t96 != 129LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = INT16_MIN;
	uint8_t x434 = 1U;
	static uint32_t x435 = 11819015U;
	int16_t x436 = 4017;
	volatile uint32_t t97 = 1016U;

	t97 = (((x433-x434)/x435)%x436);

	if (t97 != 363U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x439 = -17;
	int64_t x440 = -16238279LL;
	static volatile int64_t t98 = 114200LL;

	t98 = (((x437-x438)/x439)%x440);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x441 = UINT32_MAX;
	int64_t x442 = 29LL;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = 7U;
	int64_t t99 = 123175392LL;

	t99 = (((x441-x442)/x443)%x444);

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

