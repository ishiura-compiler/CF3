#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 49U;
static volatile int32_t t3 = 3;
static int64_t x20 = INT64_MAX;
static int32_t t4 = 380;
volatile int32_t x21 = 1585652;
uint8_t x23 = 10U;
uint64_t x25 = 74796753LLU;
volatile int16_t x26 = INT16_MIN;
int8_t x29 = INT8_MIN;
volatile int16_t x30 = INT16_MAX;
int8_t x32 = INT8_MIN;
int8_t x35 = INT8_MAX;
int16_t x36 = 1;
static volatile int32_t t10 = 3;
volatile int16_t x56 = 49;
int32_t x78 = 27;
int16_t x81 = 2297;
volatile int8_t x82 = INT8_MAX;
int16_t x90 = -1;
int16_t x96 = INT16_MIN;
int32_t t26 = -961;
volatile int16_t x115 = INT16_MIN;
int32_t x125 = INT32_MIN;
static volatile int32_t t32 = 1;
uint8_t x133 = UINT8_MAX;
static uint8_t x134 = 7U;
uint16_t x136 = 20U;
volatile int64_t x140 = -62352592483123LL;
volatile int64_t x148 = 13165784647803119LL;
int16_t x151 = -1;
static int64_t x157 = -14081891648679847LL;
int16_t x161 = -1;
int16_t x162 = INT16_MAX;
int64_t x165 = -1LL;
uint64_t x167 = 41LLU;
static volatile int64_t x171 = -1LL;
static int32_t t43 = 55012;
volatile int8_t x178 = INT8_MAX;
static int32_t x179 = -61;
static int8_t x180 = -1;
uint32_t x184 = 0U;
uint32_t x186 = UINT32_MAX;
int32_t x187 = -1;
int8_t x188 = -1;
volatile int32_t x190 = INT32_MIN;
static int32_t t48 = -219581984;
uint8_t x198 = 31U;
static volatile int8_t x202 = 16;
int16_t x206 = 6951;
int32_t t52 = -2675580;
uint32_t x222 = 437339418U;
uint64_t x223 = 1162LLU;
volatile uint8_t x225 = 37U;
static int16_t x232 = INT16_MIN;
static uint64_t x238 = 626LLU;
int32_t t60 = -1;
static int16_t x250 = -1;
int32_t t63 = -4754;
int32_t t64 = 40709;
int32_t x265 = INT32_MAX;
volatile int64_t x269 = INT64_MIN;
int32_t t67 = 128;
int64_t x275 = INT64_MAX;
int32_t x276 = -60397074;
int32_t x277 = INT32_MAX;
static uint16_t x282 = UINT16_MAX;
volatile int32_t t70 = 165727630;
uint8_t x295 = UINT8_MAX;
int32_t x304 = INT32_MAX;
volatile int64_t x312 = INT64_MAX;
volatile int64_t x313 = -36669219257349LL;
uint8_t x314 = UINT8_MAX;
int64_t x321 = INT64_MIN;
static int16_t x324 = INT16_MIN;
uint32_t x327 = 849253U;
static int8_t x331 = INT8_MAX;
static volatile int32_t t82 = 33521;
int16_t x333 = INT16_MIN;
int16_t x334 = -1;
int32_t x336 = INT32_MAX;
int64_t x341 = -1LL;
volatile int64_t x348 = 617LL;
int8_t x349 = INT8_MIN;
int16_t x364 = INT16_MIN;
static uint64_t x367 = 260LLU;
int8_t x376 = 0;
static int32_t t92 = 22432795;
volatile int16_t x379 = -1;
int8_t x380 = INT8_MAX;
volatile int32_t t93 = -48631773;
int64_t x381 = -1664251520871LL;
int16_t x385 = -1;
uint64_t x387 = 49168LLU;
int8_t x388 = INT8_MAX;
static volatile int64_t x393 = -3915193536382407955LL;
volatile int32_t t97 = -1;
uint32_t x400 = 3403U;
int64_t x404 = -1LL;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	volatile int32_t x4 = -3007;
	int32_t t0 = -8;

	t0 = (((x1|x2)/x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 0;
	static volatile int64_t x6 = 251825139509746958LL;
	static int64_t x7 = INT64_MIN;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 15;

	t1 = (((x5|x6)/x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1188;
	int16_t x10 = INT16_MIN;
	int64_t x12 = 1793892572LL;
	volatile int32_t t2 = 2660598;

	t2 = (((x9|x10)/x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 1024245202957317475LL;
	static int16_t x14 = INT16_MIN;
	uint8_t x15 = UINT8_MAX;
	static uint64_t x16 = 3275910749LLU;

	t3 = (((x13|x14)/x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static uint64_t x18 = UINT64_MAX;
	volatile int32_t x19 = INT32_MAX;

	t4 = (((x17|x18)/x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -128;

	t5 = (((x21|x22)/x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x27 = -1483;
	uint64_t x28 = 2183901112654506341LLU;
	static volatile int32_t t6 = 671571;

	t6 = (((x25|x26)/x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x31 = -1;
	int32_t t7 = -28045;

	t7 = (((x29|x30)/x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 600664181LLU;
	volatile int32_t x34 = -1;
	int32_t t8 = 66406;

	t8 = (((x33|x34)/x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int64_t x38 = -1LL;
	volatile int64_t x39 = -33805818675706LL;
	int64_t x40 = INT64_MIN;
	int32_t t9 = 0;

	t9 = (((x37|x38)/x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 7463U;
	static int32_t x42 = INT32_MAX;
	uint16_t x43 = 366U;
	int8_t x44 = -1;

	t10 = (((x41|x42)/x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint16_t x46 = 400U;
	int16_t x47 = 212;
	int8_t x48 = 1;
	volatile int32_t t11 = -11981;

	t11 = (((x45|x46)/x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 47U;
	int16_t x50 = 3789;
	uint8_t x51 = 113U;
	int64_t x52 = INT64_MAX;
	static int32_t t12 = -1429;

	t12 = (((x49|x50)/x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1U;
	static int16_t x54 = 5;
	static int32_t x55 = -1;
	volatile int32_t t13 = 6383027;

	t13 = (((x53|x54)/x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -6LL;
	int16_t x58 = -3;
	static int32_t x59 = INT32_MAX;
	volatile uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = -8689443;

	t14 = (((x57|x58)/x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 894112;
	static uint64_t x62 = 5LLU;
	volatile uint64_t x63 = 73319513965277770LLU;
	volatile int8_t x64 = 1;
	int32_t t15 = 29815449;

	t15 = (((x61|x62)/x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x65 = 53LLU;
	volatile uint8_t x66 = 30U;
	int64_t x67 = INT64_MAX;
	int64_t x68 = -1LL;
	volatile int32_t t16 = -12886;

	t16 = (((x65|x66)/x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	volatile int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	int32_t x72 = INT32_MAX;
	int32_t t17 = -976461;

	t17 = (((x69|x70)/x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = UINT32_MAX;
	static uint16_t x74 = 1569U;
	uint8_t x75 = UINT8_MAX;
	int64_t x76 = -1LL;
	static volatile int32_t t18 = 14843327;

	t18 = (((x73|x74)/x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	int64_t x79 = -1LL;
	int32_t x80 = INT32_MAX;
	volatile int32_t t19 = -3;

	t19 = (((x77|x78)/x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x83 = INT16_MIN;
	volatile int64_t x84 = INT64_MIN;
	int32_t t20 = 9673;

	t20 = (((x81|x82)/x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	static int64_t x86 = 190118304498398067LL;
	static volatile uint16_t x87 = UINT16_MAX;
	static int16_t x88 = INT16_MAX;
	int32_t t21 = 1057896;

	t21 = (((x85|x86)/x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -35;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	int32_t t22 = -237324;

	t22 = (((x89|x90)/x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 13084916618LL;
	int16_t x94 = -1;
	int8_t x95 = 31;
	volatile int32_t t23 = 653805389;

	t23 = (((x93|x94)/x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int32_t x98 = 60741735;
	int16_t x99 = INT16_MIN;
	uint8_t x100 = 1U;
	static volatile int32_t t24 = 2994503;

	t24 = (((x97|x98)/x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x102 = INT8_MIN;
	static int16_t x103 = -1;
	int8_t x104 = INT8_MAX;
	int32_t t25 = 416140;

	t25 = (((x101|x102)/x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x105 = INT16_MIN;
	int16_t x106 = -7219;
	uint64_t x107 = 180122950LLU;
	int16_t x108 = INT16_MIN;

	t26 = (((x105|x106)/x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MIN;
	static uint64_t x111 = 38473324157406187LLU;
	uint8_t x112 = 11U;
	static int32_t t27 = 12;

	t27 = (((x109|x110)/x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	uint64_t x114 = 259644601633185560LLU;
	int32_t x116 = INT32_MAX;
	volatile int32_t t28 = -87;

	t28 = (((x113|x114)/x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = INT32_MAX;
	volatile int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int8_t x120 = 40;
	volatile int32_t t29 = -625476897;

	t29 = (((x117|x118)/x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MIN;
	int8_t x122 = -3;
	static int64_t x123 = INT64_MIN;
	int64_t x124 = INT64_MIN;
	static volatile int32_t t30 = -15450;

	t30 = (((x121|x122)/x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x126 = UINT16_MAX;
	static volatile int64_t x127 = -1LL;
	static uint32_t x128 = 3176414U;
	volatile int32_t t31 = 760657411;

	t31 = (((x125|x126)/x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -1;
	int32_t x130 = INT32_MAX;
	static int8_t x131 = INT8_MIN;
	int16_t x132 = 1089;

	t32 = (((x129|x130)/x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x135 = INT16_MIN;
	int32_t t33 = 6;

	t33 = (((x133|x134)/x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 4LL;
	int8_t x138 = INT8_MIN;
	static volatile uint8_t x139 = 5U;
	static volatile int32_t t34 = -573;

	t34 = (((x137|x138)/x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = 1;
	volatile uint64_t x142 = 0LLU;
	static int64_t x143 = INT64_MIN;
	int32_t x144 = -1;
	int32_t t35 = 0;

	t35 = (((x141|x142)/x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = -683611311;
	volatile uint16_t x146 = 0U;
	int64_t x147 = INT64_MIN;
	static volatile int32_t t36 = -5;

	t36 = (((x145|x146)/x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = INT16_MIN;
	static int64_t x150 = INT64_MAX;
	volatile int32_t x152 = -111;
	static volatile int32_t t37 = -6;

	t37 = (((x149|x150)/x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x153 = -1;
	int32_t x154 = -6;
	int32_t x155 = -1;
	uint8_t x156 = 2U;
	int32_t t38 = -2;

	t38 = (((x153|x154)/x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x158 = UINT16_MAX;
	static int16_t x159 = -1;
	static int8_t x160 = 9;
	static int32_t t39 = 2598;

	t39 = (((x157|x158)/x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x163 = -180266755963403549LL;
	volatile int64_t x164 = INT64_MIN;
	volatile int32_t t40 = 1;

	t40 = (((x161|x162)/x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	uint32_t x168 = 2146U;
	int32_t t41 = -1;

	t41 = (((x165|x166)/x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x169 = 6U;
	static uint32_t x170 = UINT32_MAX;
	uint16_t x172 = UINT16_MAX;
	volatile int32_t t42 = -262516272;

	t42 = (((x169|x170)/x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 6485U;
	int8_t x174 = 0;
	volatile int8_t x175 = INT8_MIN;
	int32_t x176 = 931508900;

	t43 = (((x173|x174)/x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = 11U;
	int32_t t44 = 59366104;

	t44 = (((x177|x178)/x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x181 = 8U;
	volatile int16_t x182 = INT16_MAX;
	uint64_t x183 = 92288872404340327LLU;
	volatile int32_t t45 = -5;

	t45 = (((x181|x182)/x183)==x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	int32_t t46 = -53011;

	t46 = (((x185|x186)/x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int64_t x191 = 15221489980119LL;
	int32_t x192 = -1;
	volatile int32_t t47 = -48533055;

	t47 = (((x189|x190)/x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 7;
	int8_t x194 = INT8_MIN;
	static int8_t x195 = -1;
	int64_t x196 = INT64_MIN;

	t48 = (((x193|x194)/x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	volatile int64_t x199 = 1149154566LL;
	int16_t x200 = 213;
	volatile int32_t t49 = 8;

	t49 = (((x197|x198)/x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 31971926221266LLU;
	int16_t x203 = 1103;
	int32_t x204 = INT32_MAX;
	volatile int32_t t50 = -2137;

	t50 = (((x201|x202)/x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	volatile int8_t x207 = INT8_MIN;
	static int8_t x208 = INT8_MAX;
	volatile int32_t t51 = 789737349;

	t51 = (((x205|x206)/x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x209 = UINT64_MAX;
	volatile int16_t x210 = INT16_MAX;
	int16_t x211 = -1;
	static int16_t x212 = INT16_MIN;

	t52 = (((x209|x210)/x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = INT64_MIN;
	uint16_t x214 = 188U;
	static uint16_t x215 = 1690U;
	uint32_t x216 = 14636490U;
	int32_t t53 = -369152;

	t53 = (((x213|x214)/x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	static uint64_t x218 = 95443514415LLU;
	int32_t x219 = 68;
	volatile int64_t x220 = INT64_MAX;
	volatile int32_t t54 = 733919;

	t54 = (((x217|x218)/x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = INT64_MIN;
	static int64_t x224 = 33864104685136LL;
	int32_t t55 = -1841;

	t55 = (((x221|x222)/x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = 456U;
	int8_t x227 = -1;
	uint32_t x228 = UINT32_MAX;
	int32_t t56 = 36947683;

	t56 = (((x225|x226)/x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MIN;
	int64_t x231 = INT64_MIN;
	int32_t t57 = -6884523;

	t57 = (((x229|x230)/x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -635903541216750LL;
	int8_t x234 = INT8_MIN;
	int8_t x235 = INT8_MAX;
	static int64_t x236 = INT64_MIN;
	int32_t t58 = -22914348;

	t58 = (((x233|x234)/x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 2056310U;
	int32_t x239 = 11590;
	int8_t x240 = -1;
	volatile int32_t t59 = -16187106;

	t59 = (((x237|x238)/x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 4039;
	int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	int16_t x244 = -1;

	t60 = (((x241|x242)/x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	int32_t x246 = -1;
	volatile int16_t x247 = INT16_MAX;
	static int64_t x248 = INT64_MIN;
	volatile int32_t t61 = 3419012;

	t61 = (((x245|x246)/x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = 3U;
	uint32_t x251 = 236189U;
	static uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 1228;

	t62 = (((x249|x250)/x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x253 = 35;
	static int16_t x254 = INT16_MAX;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MIN;

	t63 = (((x253|x254)/x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 36U;
	int8_t x258 = 0;
	static uint8_t x259 = UINT8_MAX;
	uint8_t x260 = 17U;

	t64 = (((x257|x258)/x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = 185931;
	static int8_t x262 = -1;
	static int16_t x263 = -776;
	int64_t x264 = INT64_MAX;
	int32_t t65 = -570707;

	t65 = (((x261|x262)/x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = UINT16_MAX;
	int32_t x267 = -1;
	static int32_t x268 = -1;
	static volatile int32_t t66 = 5022773;

	t66 = (((x265|x266)/x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x270 = INT16_MAX;
	volatile uint8_t x271 = UINT8_MAX;
	int32_t x272 = INT32_MIN;

	t67 = (((x269|x270)/x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 495506U;
	static int64_t x274 = INT64_MAX;
	volatile int32_t t68 = -4;

	t68 = (((x273|x274)/x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 6U;
	static int16_t x279 = -1;
	uint16_t x280 = 312U;
	int32_t t69 = 9;

	t69 = (((x277|x278)/x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = -1LL;
	int64_t x283 = INT64_MIN;
	int8_t x284 = -1;

	t70 = (((x281|x282)/x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = 217487914U;
	static volatile int64_t x286 = INT64_MIN;
	static uint64_t x287 = UINT64_MAX;
	int8_t x288 = -8;
	int32_t t71 = 246443193;

	t71 = (((x285|x286)/x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	int16_t x290 = 0;
	int8_t x291 = -1;
	int64_t x292 = 99597LL;
	volatile int32_t t72 = 6715;

	t72 = (((x289|x290)/x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x293 = 289028833173717LLU;
	uint32_t x294 = UINT32_MAX;
	static uint32_t x296 = UINT32_MAX;
	volatile int32_t t73 = -3243893;

	t73 = (((x293|x294)/x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x297 = 61U;
	int64_t x298 = -1LL;
	int64_t x299 = INT64_MIN;
	int16_t x300 = 99;
	int32_t t74 = 1;

	t74 = (((x297|x298)/x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = INT8_MAX;
	uint16_t x302 = 53U;
	uint16_t x303 = UINT16_MAX;
	int32_t t75 = 2032331;

	t75 = (((x301|x302)/x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 7U;
	int8_t x306 = -11;
	static int32_t x307 = -1;
	int32_t x308 = 51536;
	int32_t t76 = -680792;

	t76 = (((x305|x306)/x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile int64_t x310 = INT64_MIN;
	uint64_t x311 = UINT64_MAX;
	volatile int32_t t77 = 734;

	t77 = (((x309|x310)/x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x315 = -1;
	uint32_t x316 = UINT32_MAX;
	static volatile int32_t t78 = 5009045;

	t78 = (((x313|x314)/x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	static int32_t x318 = INT32_MIN;
	int8_t x319 = INT8_MAX;
	static volatile int64_t x320 = -1LL;
	int32_t t79 = 161;

	t79 = (((x317|x318)/x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x322 = 3627U;
	int16_t x323 = 437;
	int32_t t80 = 11523801;

	t80 = (((x321|x322)/x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	volatile int32_t x326 = 171234;
	static uint32_t x328 = UINT32_MAX;
	int32_t t81 = -9228;

	t81 = (((x325|x326)/x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	uint8_t x330 = UINT8_MAX;
	volatile int16_t x332 = INT16_MIN;

	t82 = (((x329|x330)/x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x335 = INT64_MIN;
	volatile int32_t t83 = -88823874;

	t83 = (((x333|x334)/x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 11U;
	uint8_t x338 = 0U;
	static int32_t x339 = INT32_MIN;
	static volatile int16_t x340 = INT16_MAX;
	int32_t t84 = -13000640;

	t84 = (((x337|x338)/x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x342 = 13U;
	volatile int64_t x343 = INT64_MIN;
	int16_t x344 = INT16_MIN;
	int32_t t85 = 10;

	t85 = (((x341|x342)/x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x345 = 2U;
	static volatile int32_t x346 = 18584837;
	int8_t x347 = -1;
	int32_t t86 = -4180113;

	t86 = (((x345|x346)/x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = -820;
	static int8_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	int32_t t87 = 2325372;

	t87 = (((x349|x350)/x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x357 = 1862270U;
	volatile int64_t x358 = 238522527531LL;
	uint64_t x359 = 23897LLU;
	int16_t x360 = -1321;
	int32_t t88 = 22953;

	t88 = (((x357|x358)/x359)==x360);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = -1;
	int64_t x362 = -1LL;
	static int16_t x363 = INT16_MIN;
	int32_t t89 = -2194566;

	t89 = (((x361|x362)/x363)==x364);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x365 = -882;
	int64_t x366 = -389LL;
	uint64_t x368 = 10313814162202LLU;
	int32_t t90 = -1784474;

	t90 = (((x365|x366)/x367)==x368);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x369 = -110947;
	uint8_t x370 = 1U;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t91 = 0;

	t91 = (((x369|x370)/x371)==x372);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x373 = INT16_MIN;
	static uint8_t x374 = UINT8_MAX;
	volatile int32_t x375 = INT32_MIN;

	t92 = (((x373|x374)/x375)==x376);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = INT8_MIN;
	uint16_t x378 = 2080U;

	t93 = (((x377|x378)/x379)==x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x382 = -636;
	int64_t x383 = 19480LL;
	static uint64_t x384 = 589976LLU;
	volatile int32_t t94 = -997;

	t94 = (((x381|x382)/x383)==x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x386 = 5U;
	int32_t t95 = 117604873;

	t95 = (((x385|x386)/x387)==x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = 1262U;
	volatile int8_t x390 = 62;
	int16_t x391 = -1;
	static int64_t x392 = INT64_MAX;
	static int32_t t96 = 11197122;

	t96 = (((x389|x390)/x391)==x392);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x394 = 0;
	int32_t x395 = 26112;
	uint16_t x396 = 3U;

	t97 = (((x393|x394)/x395)==x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = UINT8_MAX;
	uint32_t x399 = 4U;
	static volatile int32_t t98 = 483846;

	t98 = (((x397|x398)/x399)==x400);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x401 = UINT16_MAX;
	int8_t x402 = 0;
	volatile int16_t x403 = INT16_MIN;
	volatile int32_t t99 = -1;

	t99 = (((x401|x402)/x403)==x404);

	if (t99 != 1) { NG(); } else { ; }
	
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

