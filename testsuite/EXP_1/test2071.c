#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t1 = 1807100294696765LL;
int8_t x15 = 3;
volatile int16_t x21 = INT16_MAX;
uint8_t x27 = 6U;
uint64_t x28 = UINT64_MAX;
int16_t x29 = -1;
uint64_t x42 = 1813867LLU;
uint16_t x54 = 1U;
int64_t x73 = INT64_MIN;
uint64_t t15 = 78574756654LLU;
static volatile int64_t t16 = -1811621988912LL;
int32_t x84 = INT32_MIN;
int64_t x90 = INT64_MIN;
uint16_t x91 = UINT16_MAX;
volatile int64_t t19 = 15131365206151649LL;
int64_t x95 = -89722LL;
int32_t x100 = -113566175;
static volatile uint8_t x101 = 14U;
volatile int8_t x106 = INT8_MIN;
int64_t x110 = -1LL;
static volatile int32_t x113 = 234860802;
int64_t x115 = -1LL;
uint64_t x116 = UINT64_MAX;
volatile uint64_t x125 = 16636057979114LLU;
int64_t x130 = INT64_MAX;
uint32_t x132 = 371481333U;
int64_t t28 = 241063LL;
volatile int8_t x142 = -1;
int32_t x146 = -203199984;
static volatile int32_t x148 = -603036;
volatile int16_t x151 = -1;
int32_t x153 = INT32_MIN;
volatile uint64_t t35 = 4400LLU;
volatile int16_t x165 = 0;
volatile uint64_t x170 = 18281185916LLU;
volatile uint64_t t38 = 47LLU;
uint32_t x173 = 502982574U;
uint16_t x174 = 10135U;
volatile int8_t x184 = INT8_MIN;
int64_t t41 = -6719564LL;
volatile int16_t x187 = 11263;
int64_t x188 = INT64_MAX;
int8_t x194 = 0;
static int16_t x196 = -1;
volatile int64_t x201 = INT64_MAX;
int8_t x209 = -1;
uint16_t x213 = 3922U;
uint64_t x214 = UINT64_MAX;
static volatile int32_t x216 = 68642;
static int16_t x220 = -8;
int32_t x222 = INT32_MIN;
static volatile int64_t x230 = INT64_MIN;
uint64_t x238 = 250LLU;
static uint64_t t54 = 1844944897LLU;
int32_t x242 = INT32_MAX;
static int32_t x247 = INT32_MIN;
int16_t x248 = INT16_MIN;
uint64_t x255 = 267812899954LLU;
int16_t x257 = -1;
int64_t t60 = 3LL;
volatile uint64_t t61 = 325691350355490201LLU;
static uint32_t x270 = 3U;
int64_t x272 = -717119LL;
static int8_t x273 = -8;
int16_t x274 = INT16_MIN;
int8_t x276 = -52;
int32_t t63 = 4578;
int16_t x283 = INT16_MIN;
static uint32_t t66 = 26027280U;
int32_t x295 = INT32_MAX;
static int8_t x297 = -1;
int64_t x303 = -1LL;
int8_t x305 = -1;
int16_t x311 = INT16_MIN;
static int64_t x312 = -34083LL;
static int8_t x317 = 45;
int16_t x327 = INT16_MAX;
static int16_t x328 = INT16_MAX;
int64_t t76 = -82LL;
volatile int8_t x329 = -12;
volatile int16_t x332 = INT16_MIN;
static volatile int64_t t78 = -235527LL;
static uint64_t x339 = 226502232LLU;
uint64_t t81 = 16442705883LLU;
int64_t x355 = -1LL;
int64_t x375 = 215107786144LL;
int32_t t93 = 964153;
uint64_t t96 = 8922910411608939LLU;
static int8_t x411 = -1;
static uint64_t t97 = 7309438593LLU;
int16_t x413 = INT16_MIN;
uint64_t x424 = 617455439729489LLU;


void f0(void) {
	uint64_t x5 = 2117161335343LLU;
	int32_t x6 = 2;
	volatile int32_t x7 = -1;
	int16_t x8 = -6;
	uint64_t t0 = 24739550LLU;

	t0 = (((x5^x6)/x7)/x8);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x9 = -1LL;
	volatile uint8_t x10 = UINT8_MAX;
	uint32_t x11 = 728243U;
	int64_t x12 = INT64_MIN;

	t1 = (((x9^x10)/x11)/x12);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1423;
	uint8_t x14 = 13U;
	static int8_t x16 = INT8_MIN;
	int32_t t2 = 245383;

	t2 = (((x13^x14)/x15)/x16);

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x22 = 0;
	static int8_t x23 = 3;
	uint64_t x24 = 80091005LLU;
	static volatile uint64_t t3 = 449716LLU;

	t3 = (((x21^x22)/x23)/x24);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x25 = UINT16_MAX;
	static int16_t x26 = 4765;
	volatile uint64_t t4 = 3755371522976250LLU;

	t4 = (((x25^x26)/x27)/x28);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x30 = UINT64_MAX;
	int16_t x31 = INT16_MIN;
	int64_t x32 = 5858482674LL;
	volatile uint64_t t5 = 1169649485721376LLU;

	t5 = (((x29^x30)/x31)/x32);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x33 = INT32_MAX;
	uint8_t x34 = 2U;
	uint64_t x35 = UINT64_MAX;
	volatile int64_t x36 = 900487682177871LL;
	uint64_t t6 = 155LLU;

	t6 = (((x33^x34)/x35)/x36);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = 46;
	static volatile uint64_t x38 = UINT64_MAX;
	static int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t7 = 7408964525LLU;

	t7 = (((x37^x38)/x39)/x40);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -58LL;
	int16_t x43 = INT16_MIN;
	uint64_t x44 = 61901LLU;
	volatile uint64_t t8 = 30253LLU;

	t8 = (((x41^x42)/x43)/x44);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	static uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 5303U;
	int32_t x52 = INT32_MAX;
	uint32_t t9 = 298882U;

	t9 = (((x49^x50)/x51)/x52);

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = 13;
	int64_t x55 = -1LL;
	static uint16_t x56 = 51U;
	int64_t t10 = -56LL;

	t10 = (((x53^x54)/x55)/x56);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x57 = 1U;
	int16_t x58 = 3806;
	int16_t x59 = INT16_MIN;
	uint16_t x60 = 49U;
	volatile int32_t t11 = -11234762;

	t11 = (((x57^x58)/x59)/x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x61 = INT32_MAX;
	int32_t x62 = 3831170;
	int8_t x63 = -1;
	int16_t x64 = -1;
	int32_t t12 = -477;

	t12 = (((x61^x62)/x63)/x64);

	if (t12 != 2143652477) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -1LL;
	uint64_t x66 = UINT64_MAX;
	uint16_t x67 = 1101U;
	int8_t x68 = INT8_MAX;
	volatile uint64_t t13 = 217668727580360658LLU;

	t13 = (((x65^x66)/x67)/x68);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	volatile uint16_t x70 = UINT16_MAX;
	volatile int16_t x71 = 142;
	static int16_t x72 = INT16_MAX;
	int32_t t14 = 166453;

	t14 = (((x69^x70)/x71)/x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = 141620690LLU;
	int16_t x76 = INT16_MIN;

	t15 = (((x73^x74)/x75)/x76);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = 185;
	int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	int32_t x80 = INT32_MIN;

	t16 = (((x77^x78)/x79)/x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 3984;
	int16_t x82 = INT16_MIN;
	volatile int32_t x83 = INT32_MAX;
	volatile int32_t t17 = 3;

	t17 = (((x81^x82)/x83)/x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MAX;
	static uint8_t x87 = 7U;
	volatile int8_t x88 = INT8_MIN;
	volatile int32_t t18 = -15577;

	t18 = (((x85^x86)/x87)/x88);

	if (t18 != 2396708) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x89 = 1058373231;
	int8_t x92 = -1;

	t19 = (((x89^x90)/x91)/x92);

	if (t19 != 140739635855594LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x93 = 379471U;
	int32_t x94 = -11179515;
	static volatile int64_t x96 = INT64_MIN;
	int64_t t20 = -3188010688447294664LL;

	t20 = (((x93^x94)/x95)/x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = 0U;
	volatile int32_t x98 = INT32_MIN;
	static int64_t x99 = INT64_MAX;
	int64_t t21 = 14273374514480484LL;

	t21 = (((x97^x98)/x99)/x100);

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x102 = INT8_MIN;
	int32_t x103 = -48;
	static volatile int32_t x104 = -1;
	static int32_t t22 = 38072;

	t22 = (((x101^x102)/x103)/x104);

	if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x105 = 2752132LLU;
	int8_t x107 = INT8_MIN;
	int16_t x108 = 13857;
	static uint64_t t23 = 10235750222554LLU;

	t23 = (((x105^x106)/x107)/x108);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = 2139232363247538495LLU;
	uint16_t x111 = 54U;
	uint16_t x112 = UINT16_MAX;
	volatile uint64_t t24 = 11509532801600LLU;

	t24 = (((x109^x110)/x111)/x112);

	if (t24 != 4608086634640LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x114 = 8680407921940LLU;
	uint64_t t25 = 656630859LLU;

	t25 = (((x113^x114)/x115)/x116);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	uint64_t x122 = 8441694450152LLU;
	uint16_t x123 = 2156U;
	volatile int16_t x124 = INT16_MIN;
	static uint64_t t26 = 54550983LLU;

	t26 = (((x121^x122)/x123)/x124);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x126 = INT64_MIN;
	uint32_t x127 = 2657U;
	static int8_t x128 = -1;
	volatile uint64_t t27 = 622247LLU;

	t27 = (((x125^x126)/x127)/x128);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x129 = INT8_MIN;
	uint32_t x131 = 795U;

	t28 = (((x129^x130)/x131)/x132);

	if (t28 != -31230979LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = -28;
	volatile uint64_t x134 = UINT64_MAX;
	int32_t x135 = INT32_MIN;
	static uint16_t x136 = 7663U;
	volatile uint64_t t29 = 716836379631LLU;

	t29 = (((x133^x134)/x135)/x136);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MIN;
	volatile uint64_t x138 = 7222164877768LLU;
	volatile int8_t x139 = INT8_MAX;
	static int32_t x140 = INT32_MIN;
	volatile uint64_t t30 = 181LLU;

	t30 = (((x137^x138)/x139)/x140);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1993;
	int64_t x143 = INT64_MAX;
	uint32_t x144 = 1215U;
	int64_t t31 = -1309028641611LL;

	t31 = (((x141^x142)/x143)/x144);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x145 = INT16_MAX;
	uint32_t x147 = UINT32_MAX;
	volatile uint32_t t32 = 221U;

	t32 = (((x145^x146)/x147)/x148);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 117985980U;
	uint64_t x150 = 4173816064LLU;
	int64_t x152 = INT64_MIN;
	uint64_t t33 = 120950960309LLU;

	t33 = (((x149^x150)/x151)/x152);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x154 = UINT16_MAX;
	volatile int32_t x155 = INT32_MIN;
	static int64_t x156 = -29737LL;
	int64_t t34 = 13LL;

	t34 = (((x153^x154)/x155)/x156);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x157 = UINT64_MAX;
	static uint32_t x158 = 421U;
	volatile int32_t x159 = -1;
	uint64_t x160 = UINT64_MAX;

	t35 = (((x157^x158)/x159)/x160);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x161 = UINT32_MAX;
	uint16_t x162 = 7014U;
	uint16_t x163 = UINT16_MAX;
	int64_t x164 = -1LL;
	int64_t t36 = -9571484040705LL;

	t36 = (((x161^x162)/x163)/x164);

	if (t36 != -65536LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint64_t x166 = 15433LLU;
	int64_t x167 = INT64_MIN;
	static uint8_t x168 = UINT8_MAX;
	static uint64_t t37 = 4879558978936153LLU;

	t37 = (((x165^x166)/x167)/x168);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x169 = 0U;
	uint64_t x171 = 24643359934LLU;
	uint16_t x172 = 21U;

	t38 = (((x169^x170)/x171)/x172);

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x175 = -1LL;
	uint16_t x176 = UINT16_MAX;
	int64_t t39 = -23902LL;

	t39 = (((x173^x174)/x175)/x176);

	if (t39 != -7674LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x177 = INT8_MAX;
	volatile int32_t x178 = INT32_MAX;
	uint64_t x179 = 7226602580808207LLU;
	volatile uint32_t x180 = 566U;
	uint64_t t40 = 31176125581LLU;

	t40 = (((x177^x178)/x179)/x180);

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x181 = INT16_MAX;
	static int64_t x182 = -855637999948421LL;
	int16_t x183 = -7350;

	t41 = (((x181^x182)/x183)/x184);

	if (t41 != -909479166LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x185 = -40;
	uint64_t x186 = 55922LLU;
	uint64_t t42 = 11LLU;

	t42 = (((x185^x186)/x187)/x188);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = 12597991LL;
	int8_t x190 = INT8_MAX;
	static uint8_t x191 = UINT8_MAX;
	int16_t x192 = INT16_MIN;
	int64_t t43 = 2LL;

	t43 = (((x189^x190)/x191)/x192);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x193 = UINT8_MAX;
	volatile uint64_t x195 = 113LLU;
	uint64_t t44 = 43048260LLU;

	t44 = (((x193^x194)/x195)/x196);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x202 = INT16_MAX;
	int64_t x203 = -398349622932LL;
	int8_t x204 = -1;
	int64_t t45 = 8272052128LL;

	t45 = (((x201^x202)/x203)/x204);

	if (t45 != 23153962LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x205 = 82438;
	int16_t x206 = INT16_MIN;
	volatile uint16_t x207 = UINT16_MAX;
	static uint64_t x208 = 513353721428056LLU;
	volatile uint64_t t46 = 182280574LLU;

	t46 = (((x205^x206)/x207)/x208);

	if (t46 != 35933LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x210 = INT32_MIN;
	int8_t x211 = -11;
	uint32_t x212 = UINT32_MAX;
	uint32_t t47 = 44U;

	t47 = (((x209^x210)/x211)/x212);

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x215 = INT8_MIN;
	uint64_t t48 = 43344728167LLU;

	t48 = (((x213^x214)/x215)/x216);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x217 = INT64_MIN;
	int8_t x218 = 21;
	volatile int8_t x219 = -18;
	int64_t t49 = 22481LL;

	t49 = (((x217^x218)/x219)/x220);

	if (t49 != -64051194700380387LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x221 = 2U;
	static int32_t x223 = -1;
	volatile uint8_t x224 = 3U;
	static int32_t t50 = -247678;

	t50 = (((x221^x222)/x223)/x224);

	if (t50 != 715827882) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x225 = INT8_MAX;
	int16_t x226 = INT16_MAX;
	volatile uint32_t x227 = UINT32_MAX;
	static int8_t x228 = INT8_MIN;
	static volatile uint32_t t51 = 1100U;

	t51 = (((x225^x226)/x227)/x228);

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MIN;
	int16_t x231 = INT16_MIN;
	static uint16_t x232 = 164U;
	volatile int64_t t52 = -558217751LL;

	t52 = (((x229^x230)/x231)/x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	uint8_t x234 = 38U;
	int8_t x235 = -1;
	static int32_t x236 = 2;
	volatile int32_t t53 = 46;

	t53 = (((x233^x234)/x235)/x236);

	if (t53 != 19) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x237 = 6492809867LLU;
	int64_t x239 = -1LL;
	int32_t x240 = INT32_MIN;

	t54 = (((x237^x238)/x239)/x240);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x241 = -1;
	int16_t x243 = INT16_MAX;
	static volatile int32_t x244 = INT32_MIN;
	static volatile int32_t t55 = 155;

	t55 = (((x241^x242)/x243)/x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x245 = INT32_MAX;
	static int64_t x246 = INT64_MIN;
	int64_t t56 = 15232LL;

	t56 = (((x245^x246)/x247)/x248);

	if (t56 != -131071LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MAX;
	static int32_t x250 = 173;
	static int16_t x251 = INT16_MIN;
	uint64_t x252 = 24302LLU;
	volatile uint64_t t57 = 33181611610464319LLU;

	t57 = (((x249^x250)/x251)/x252);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x253 = 20198LLU;
	uint8_t x254 = UINT8_MAX;
	static int16_t x256 = -1;
	static volatile uint64_t t58 = 2649870110LLU;

	t58 = (((x253^x254)/x255)/x256);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x258 = 103U;
	static uint64_t x259 = 1549368097LLU;
	int8_t x260 = INT8_MIN;
	uint64_t t59 = 2919611164931884LLU;

	t59 = (((x257^x258)/x259)/x260);

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -1;
	volatile int16_t x262 = INT16_MAX;
	int64_t x263 = INT64_MAX;
	int16_t x264 = INT16_MIN;

	t60 = (((x261^x262)/x263)/x264);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	int8_t x266 = 55;
	volatile uint64_t x267 = 23115334762097LLU;
	volatile uint8_t x268 = 2U;

	t61 = (((x265^x266)/x267)/x268);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x269 = INT32_MAX;
	static uint32_t x271 = UINT32_MAX;
	volatile int64_t t62 = -3718855LL;

	t62 = (((x269^x270)/x271)/x272);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x275 = INT16_MIN;

	t63 = (((x273^x274)/x275)/x276);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x277 = 1092409LLU;
	int32_t x278 = -1968;
	static uint16_t x279 = UINT16_MAX;
	int16_t x280 = -6523;
	uint64_t t64 = 22144801327LLU;

	t64 = (((x277^x278)/x279)/x280);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = -1;
	uint8_t x282 = UINT8_MAX;
	static int8_t x284 = INT8_MAX;
	static volatile int32_t t65 = 4;

	t65 = (((x281^x282)/x283)/x284);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x285 = -31441;
	uint32_t x286 = 10128182U;
	int8_t x287 = 1;
	int32_t x288 = -1;

	t66 = (((x285^x286)/x287)/x288);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x289 = 7263456;
	int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	volatile uint32_t x292 = UINT32_MAX;
	int64_t t67 = -790431LL;

	t67 = (((x289^x290)/x291)/x292);

	if (t67 != -16777216LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x293 = 548544035597124941LLU;
	static uint8_t x294 = UINT8_MAX;
	uint16_t x296 = UINT16_MAX;
	volatile uint64_t t68 = 639LLU;

	t68 = (((x293^x294)/x295)/x296);

	if (t68 != 3897LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x298 = INT64_MIN;
	int16_t x299 = INT16_MAX;
	volatile uint8_t x300 = 105U;
	int64_t t69 = -208524003LL;

	t69 = (((x297^x298)/x299)/x300);

	if (t69 != 2680795875308LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x301 = UINT64_MAX;
	static int16_t x302 = -10892;
	static int16_t x304 = INT16_MAX;
	static volatile uint64_t t70 = 41456LLU;

	t70 = (((x301^x302)/x303)/x304);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x306 = INT16_MAX;
	volatile int8_t x307 = INT8_MIN;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t71 = 13809150LLU;

	t71 = (((x305^x306)/x307)/x308);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x309 = INT64_MIN;
	int32_t x310 = 594002;
	volatile int64_t t72 = 4569159LL;

	t72 = (((x309^x310)/x311)/x312);

	if (t72 != -8258515292LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = -4114;
	volatile int16_t x314 = 0;
	static int16_t x315 = INT16_MIN;
	int8_t x316 = 16;
	int32_t t73 = 21;

	t73 = (((x313^x314)/x315)/x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = INT16_MAX;
	int64_t x319 = -19012025296LL;
	static int64_t x320 = INT64_MIN;
	volatile int64_t t74 = -6039514319204LL;

	t74 = (((x317^x318)/x319)/x320);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x321 = -1;
	int16_t x322 = -1;
	uint8_t x323 = UINT8_MAX;
	uint32_t x324 = 7U;
	volatile uint32_t t75 = 64208848U;

	t75 = (((x321^x322)/x323)/x324);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x325 = -7;
	int64_t x326 = INT64_MIN;

	t76 = (((x325^x326)/x327)/x328);

	if (t76 != 8590458904LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x330 = 508U;
	uint16_t x331 = 20791U;
	volatile uint32_t t77 = 11U;

	t77 = (((x329^x330)/x331)/x332);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = 32063502LL;
	int32_t x334 = INT32_MIN;
	int16_t x335 = INT16_MIN;
	int64_t x336 = INT64_MIN;

	t78 = (((x333^x334)/x335)/x336);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = UINT32_MAX;
	uint8_t x338 = UINT8_MAX;
	volatile int16_t x340 = 1;
	uint64_t t79 = 15072LLU;

	t79 = (((x337^x338)/x339)/x340);

	if (t79 != 18LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x341 = UINT32_MAX;
	uint64_t x342 = UINT64_MAX;
	static volatile int64_t x343 = INT64_MIN;
	int64_t x344 = 706619621623LL;
	uint64_t t80 = 10220868413906224LLU;

	t80 = (((x341^x342)/x343)/x344);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = INT32_MIN;
	uint8_t x346 = 2U;
	uint64_t x347 = UINT64_MAX;
	volatile int32_t x348 = -1;

	t81 = (((x345^x346)/x347)/x348);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x349 = -1;
	uint32_t x350 = 605986U;
	uint64_t x351 = UINT64_MAX;
	int64_t x352 = 3760667175567LL;
	uint64_t t82 = 16723333149LLU;

	t82 = (((x349^x350)/x351)/x352);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x353 = 2117;
	int64_t x354 = -176948275502447426LL;
	volatile uint16_t x356 = UINT16_MAX;
	static int64_t t83 = -37596382965893LL;

	t83 = (((x353^x354)/x355)/x356);

	if (t83 != 2700057610474LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -14;
	volatile uint16_t x358 = 50U;
	int32_t x359 = INT32_MAX;
	int32_t x360 = 3289;
	int32_t t84 = 2545070;

	t84 = (((x357^x358)/x359)/x360);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = INT16_MIN;
	int64_t x362 = INT64_MIN;
	volatile int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MAX;
	int64_t t85 = 737615446844954257LL;

	t85 = (((x361^x362)/x363)/x364);

	if (t85 != 571850209985414LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x365 = INT32_MIN;
	int16_t x366 = INT16_MIN;
	int8_t x367 = -14;
	static volatile int16_t x368 = INT16_MIN;
	int32_t t86 = -25430219;

	t86 = (((x365^x366)/x367)/x368);

	if (t86 != 4681) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x369 = 1308U;
	int64_t x370 = INT64_MIN;
	uint64_t x371 = 45010179LLU;
	static volatile int8_t x372 = -1;
	uint64_t t87 = 240LLU;

	t87 = (((x369^x370)/x371)/x372);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x373 = 52108856U;
	int32_t x374 = INT32_MIN;
	static uint32_t x376 = 47U;
	volatile int64_t t88 = -15943918LL;

	t88 = (((x373^x374)/x375)/x376);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x377 = UINT16_MAX;
	int64_t x378 = INT64_MIN;
	int32_t x379 = -1;
	int8_t x380 = -1;
	volatile int64_t t89 = 656745541163671817LL;

	t89 = (((x377^x378)/x379)/x380);

	if (t89 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x381 = -104948461189025LL;
	int32_t x382 = INT32_MAX;
	int32_t x383 = -1;
	uint16_t x384 = 6U;
	volatile int64_t t90 = 1LL;

	t90 = (((x381^x382)/x383)/x384);

	if (t90 != 17491456341690LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int64_t x387 = -1LL;
	static uint64_t x388 = UINT64_MAX;
	volatile uint64_t t91 = 29231530981LLU;

	t91 = (((x385^x386)/x387)/x388);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x389 = INT16_MIN;
	uint8_t x390 = UINT8_MAX;
	int16_t x391 = 65;
	int8_t x392 = -7;
	volatile int32_t t92 = 127928;

	t92 = (((x389^x390)/x391)/x392);

	if (t92 != 71) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = INT8_MAX;
	uint8_t x394 = 13U;
	volatile int16_t x395 = INT16_MIN;
	int8_t x396 = -1;

	t93 = (((x393^x394)/x395)/x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x397 = -1;
	static int32_t x398 = -1;
	uint8_t x399 = 4U;
	int8_t x400 = INT8_MIN;
	int32_t t94 = -24604;

	t94 = (((x397^x398)/x399)/x400);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x401 = INT16_MIN;
	int8_t x402 = 0;
	uint64_t x403 = 4913227LLU;
	volatile uint32_t x404 = 14843U;
	static uint64_t t95 = 4982936603121LLU;

	t95 = (((x401^x402)/x403)/x404);

	if (t95 != 252947973LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x405 = 3709999775936108662LLU;
	int8_t x406 = INT8_MIN;
	int8_t x407 = 31;
	int64_t x408 = INT64_MIN;

	t96 = (((x405^x406)/x407)/x408);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x409 = 92576894608LL;
	int32_t x410 = -4048882;
	volatile uint64_t x412 = 1572LLU;

	t97 = (((x409^x410)/x411)/x412);

	if (t97 != 58893623LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x414 = -36;
	int64_t x415 = INT64_MIN;
	uint64_t x416 = 890026224247493LLU;
	volatile uint64_t t98 = 2354551035338LLU;

	t98 = (((x413^x414)/x415)/x416);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x421 = -1LL;
	int16_t x422 = INT16_MAX;
	static int32_t x423 = INT32_MAX;
	static uint64_t t99 = 970LLU;

	t99 = (((x421^x422)/x423)/x424);

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

