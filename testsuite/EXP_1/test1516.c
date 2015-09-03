#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
int16_t x4 = 4;
int8_t x7 = 0;
volatile int8_t x8 = -1;
int16_t x10 = 399;
int32_t x14 = INT32_MIN;
int64_t x15 = INT64_MIN;
uint64_t x24 = 485057411126729LLU;
int8_t x34 = INT8_MIN;
uint8_t x40 = 30U;
uint8_t x42 = 2U;
int16_t x44 = -1;
volatile int16_t x51 = -1;
int16_t x55 = INT16_MIN;
static int32_t x57 = INT32_MIN;
uint16_t x67 = 1U;
static uint16_t x68 = UINT16_MAX;
static volatile int32_t t16 = -220378423;
int32_t x72 = -1;
int8_t x75 = -4;
uint64_t x77 = 223873472107576LLU;
static int16_t x84 = -1;
volatile int32_t t20 = -1034575716;
volatile uint64_t x87 = UINT64_MAX;
volatile int64_t x91 = -353659394098116LL;
int32_t x96 = INT32_MIN;
volatile int8_t x97 = INT8_MIN;
uint32_t x103 = UINT32_MAX;
int32_t x106 = INT32_MAX;
int32_t x109 = INT32_MIN;
int8_t x116 = -1;
uint32_t x117 = 47U;
int16_t x122 = INT16_MIN;
static int32_t x123 = INT32_MIN;
uint64_t x126 = UINT64_MAX;
static uint32_t x128 = 2U;
volatile int32_t t33 = -17;
int16_t x141 = INT16_MIN;
static int32_t t36 = 64588811;
int64_t x154 = 100187192177LL;
int64_t x163 = -4349458430LL;
int8_t x167 = -5;
int16_t x169 = INT16_MIN;
volatile int32_t t42 = 163077225;
uint16_t x173 = 8190U;
static int32_t x174 = 4130;
static int64_t x175 = INT64_MIN;
uint32_t x188 = UINT32_MAX;
int32_t x192 = INT32_MIN;
uint8_t x197 = 11U;
uint16_t x201 = UINT16_MAX;
static volatile int32_t t50 = -287890586;
int16_t x205 = -1;
static uint64_t x214 = 166011979LLU;
uint32_t x219 = UINT32_MAX;
static int32_t t56 = -256770270;
int16_t x233 = -12091;
static volatile int32_t x234 = INT32_MIN;
volatile int16_t x240 = INT16_MIN;
static uint64_t x242 = 11203010LLU;
int16_t x244 = INT16_MIN;
static int8_t x254 = INT8_MIN;
int32_t x255 = 75486;
int8_t x258 = INT8_MIN;
int64_t x264 = INT64_MIN;
int32_t t66 = 31499213;
int64_t x275 = INT64_MAX;
int8_t x276 = INT8_MAX;
int64_t x278 = INT64_MAX;
int32_t t69 = -583;
int64_t x281 = INT64_MIN;
int64_t x292 = -20716070198LL;
static volatile uint64_t x300 = 9742242337LLU;
static volatile int32_t t74 = -1844;
int32_t x302 = -502570054;
int32_t t75 = 168941633;
static volatile int64_t x306 = INT64_MIN;
static uint16_t x307 = 2U;
int32_t t76 = -2;
int64_t x312 = INT64_MAX;
int64_t x319 = 0LL;
uint64_t x324 = 10255355044LLU;
volatile int32_t t80 = -1275133;
uint8_t x329 = UINT8_MAX;
volatile int32_t x332 = -1;
int8_t x336 = -47;
int32_t t84 = -273818768;
static int16_t x341 = 6375;
volatile int64_t x342 = INT64_MAX;
volatile uint64_t x346 = 186957LLU;
int32_t x351 = 6853;
volatile int32_t t90 = 1;
int16_t x366 = 19;
int16_t x367 = -1;
static uint32_t x372 = UINT32_MAX;
volatile int32_t t92 = -120;
int64_t x384 = 5LL;
static int32_t t95 = -37148428;
int16_t x387 = -1;
int32_t x393 = -1;
int32_t t98 = 318;
volatile int32_t x398 = INT32_MAX;
static int64_t x400 = 2042395123LL;


void f0(void) {
	volatile uint32_t x1 = UINT32_MAX;
	int8_t x2 = INT8_MAX;
	static volatile int32_t t0 = -33520528;

	t0 = (((x1<x2)^x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MAX;
	static int16_t x6 = -2;
	volatile int32_t t1 = -4778337;

	t1 = (((x5<x6)^x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint64_t x11 = 2LLU;
	volatile int64_t x12 = -82697LL;
	volatile int32_t t2 = 3532;

	t2 = (((x9<x10)^x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 2U;
	volatile int8_t x16 = INT8_MIN;
	static int32_t t3 = -160379;

	t3 = (((x13<x14)^x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	volatile int16_t x18 = 13150;
	uint64_t x19 = 239228972099454535LLU;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = 25;

	t4 = (((x17<x18)^x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint32_t x22 = 158401U;
	uint8_t x23 = 0U;
	int32_t t5 = 5;

	t5 = (((x21<x22)^x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MIN;
	int8_t x28 = -1;
	static int32_t t6 = 22640;

	t6 = (((x25<x26)^x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 5911U;
	static int16_t x30 = -1;
	volatile int32_t x31 = -326;
	uint16_t x32 = UINT16_MAX;
	static volatile int32_t t7 = -1;

	t7 = (((x29<x30)^x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 6605834U;
	volatile uint64_t x35 = 15242179169LLU;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = -26;

	t8 = (((x33<x34)^x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = -8;
	uint8_t x38 = 100U;
	volatile uint8_t x39 = UINT8_MAX;
	volatile int32_t t9 = -813;

	t9 = (((x37<x38)^x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int64_t x43 = -57497295185145LL;
	int32_t t10 = 36;

	t10 = (((x41<x42)^x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	uint32_t x46 = 2U;
	volatile int8_t x47 = INT8_MIN;
	volatile int8_t x48 = INT8_MAX;
	volatile int32_t t11 = 69236;

	t11 = (((x45<x46)^x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	volatile uint64_t x50 = 19894236LLU;
	uint64_t x52 = UINT64_MAX;
	volatile int32_t t12 = 865728163;

	t12 = (((x49<x50)^x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = 1;
	static volatile uint64_t x54 = UINT64_MAX;
	volatile int16_t x56 = 1000;
	static volatile int32_t t13 = -1;

	t13 = (((x53<x54)^x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = 1027178283U;
	static int64_t x59 = INT64_MAX;
	int16_t x60 = -1;
	volatile int32_t t14 = 1115;

	t14 = (((x57<x58)^x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 36507U;
	int32_t x62 = INT32_MIN;
	static volatile uint8_t x63 = 13U;
	volatile uint8_t x64 = UINT8_MAX;
	static volatile int32_t t15 = 54;

	t15 = (((x61<x62)^x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	uint16_t x66 = 113U;

	t16 = (((x65<x66)^x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	static int32_t x70 = INT32_MIN;
	int16_t x71 = INT16_MIN;
	volatile int32_t t17 = -302844560;

	t17 = (((x69<x70)^x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 258303682419510LL;
	uint64_t x74 = UINT64_MAX;
	static int64_t x76 = -86655281543LL;
	volatile int32_t t18 = -1;

	t18 = (((x73<x74)^x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = 7;
	int32_t x79 = 625653;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = 0;

	t19 = (((x77<x78)^x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = UINT16_MAX;
	int8_t x83 = -4;

	t20 = (((x81<x82)^x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	uint64_t x86 = 48LLU;
	volatile int64_t x88 = -1LL;
	volatile int32_t t21 = -212;

	t21 = (((x85<x86)^x87)==x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = 1U;
	int8_t x90 = -1;
	uint8_t x92 = 0U;
	static int32_t t22 = -11;

	t22 = (((x89<x90)^x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile int16_t x94 = 25;
	int64_t x95 = -1LL;
	volatile int32_t t23 = -6714158;

	t23 = (((x93<x94)^x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;
	static uint16_t x99 = 5279U;
	int16_t x100 = -247;
	volatile int32_t t24 = 12271;

	t24 = (((x97<x98)^x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -1LL;
	static uint32_t x102 = 142215U;
	uint8_t x104 = 5U;
	int32_t t25 = 1;

	t25 = (((x101<x102)^x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	volatile uint64_t x107 = 6LLU;
	static int64_t x108 = -1LL;
	int32_t t26 = -1773929;

	t26 = (((x105<x106)^x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = 290450LL;
	int16_t x111 = 3656;
	int32_t x112 = INT32_MIN;
	int32_t t27 = -466253;

	t27 = (((x109<x110)^x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x113 = UINT32_MAX;
	uint8_t x114 = 77U;
	static int8_t x115 = INT8_MIN;
	volatile int32_t t28 = 774534;

	t28 = (((x113<x114)^x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x118 = 15554051768656LLU;
	int8_t x119 = 24;
	static uint64_t x120 = 14LLU;
	int32_t t29 = 1;

	t29 = (((x117<x118)^x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	uint64_t x124 = 23047179826LLU;
	volatile int32_t t30 = -15394;

	t30 = (((x121<x122)^x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x125 = 119U;
	static uint32_t x127 = 2705865U;
	int32_t t31 = 253658011;

	t31 = (((x125<x126)^x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -509545941933LL;
	int32_t x130 = INT32_MAX;
	uint64_t x131 = UINT64_MAX;
	int64_t x132 = INT64_MIN;
	int32_t t32 = 362;

	t32 = (((x129<x130)^x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static volatile int32_t x134 = INT32_MAX;
	volatile int32_t x135 = -61710349;
	int16_t x136 = INT16_MIN;

	t33 = (((x133<x134)^x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile int16_t x138 = INT16_MIN;
	uint32_t x139 = 659184778U;
	static volatile int32_t x140 = INT32_MIN;
	volatile int32_t t34 = 1751333;

	t34 = (((x137<x138)^x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 22U;
	int8_t x143 = -1;
	uint8_t x144 = 21U;
	int32_t t35 = -451681;

	t35 = (((x141<x142)^x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = -24;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = -1;
	volatile int64_t x148 = 3385487532LL;

	t36 = (((x145<x146)^x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MAX;
	uint8_t x150 = 6U;
	int32_t x151 = -1;
	int32_t x152 = INT32_MIN;
	volatile int32_t t37 = 1528296;

	t37 = (((x149<x150)^x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x153 = UINT32_MAX;
	static uint32_t x155 = 31518U;
	uint8_t x156 = 14U;
	int32_t t38 = 111227;

	t38 = (((x153<x154)^x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = UINT16_MAX;
	uint8_t x158 = 1U;
	int64_t x159 = -593129LL;
	volatile int16_t x160 = INT16_MIN;
	int32_t t39 = 23267;

	t39 = (((x157<x158)^x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 51282905LL;
	int32_t x162 = INT32_MAX;
	int16_t x164 = -14902;
	volatile int32_t t40 = -306288965;

	t40 = (((x161<x162)^x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = INT32_MIN;
	static int16_t x166 = 5235;
	int16_t x168 = -1;
	volatile int32_t t41 = -48036;

	t41 = (((x165<x166)^x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MIN;
	int8_t x172 = INT8_MIN;

	t42 = (((x169<x170)^x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x176 = INT16_MIN;
	int32_t t43 = -52;

	t43 = (((x173<x174)^x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	static int64_t x178 = INT64_MAX;
	volatile uint32_t x179 = 30266764U;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -101841971;

	t44 = (((x177<x178)^x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	static int32_t x182 = -1;
	int16_t x183 = 4;
	volatile uint16_t x184 = 606U;
	int32_t t45 = 60;

	t45 = (((x181<x182)^x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -6160505252LL;
	int8_t x186 = 20;
	int64_t x187 = INT64_MIN;
	volatile int32_t t46 = 0;

	t46 = (((x185<x186)^x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 6;
	uint64_t x190 = 8546151943772LLU;
	static int32_t x191 = -1;
	static int32_t t47 = -100608737;

	t47 = (((x189<x190)^x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int8_t x193 = 11;
	volatile int32_t x194 = INT32_MIN;
	static int8_t x195 = INT8_MIN;
	uint64_t x196 = UINT64_MAX;
	int32_t t48 = -5876700;

	t48 = (((x193<x194)^x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = 1984317;
	int8_t x200 = 25;
	int32_t t49 = 728495;

	t49 = (((x197<x198)^x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x202 = 80U;
	uint64_t x203 = 3762199136LLU;
	volatile int32_t x204 = INT32_MIN;

	t50 = (((x201<x202)^x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = -1;
	volatile uint16_t x207 = 46U;
	int64_t x208 = -74772038577413776LL;
	volatile int32_t t51 = 47;

	t51 = (((x205<x206)^x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	uint16_t x210 = 0U;
	static volatile uint16_t x211 = 88U;
	volatile uint8_t x212 = 9U;
	int32_t t52 = -146179;

	t52 = (((x209<x210)^x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static volatile uint16_t x215 = 506U;
	int32_t x216 = -436526;
	volatile int32_t t53 = 246059617;

	t53 = (((x213<x214)^x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	uint16_t x218 = 112U;
	uint16_t x220 = 135U;
	int32_t t54 = -228;

	t54 = (((x217<x218)^x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 65905664U;
	int16_t x222 = -1;
	static uint32_t x223 = UINT32_MAX;
	static volatile int64_t x224 = -1LL;
	volatile int32_t t55 = 407;

	t55 = (((x221<x222)^x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x225 = INT8_MIN;
	static volatile int64_t x226 = INT64_MIN;
	uint16_t x227 = 142U;
	volatile uint16_t x228 = 58U;

	t56 = (((x225<x226)^x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x229 = INT64_MIN;
	static int32_t x230 = -1;
	static int8_t x231 = -1;
	int8_t x232 = 28;
	int32_t t57 = 15418776;

	t57 = (((x229<x230)^x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x235 = -1;
	int16_t x236 = -3196;
	volatile int32_t t58 = -844;

	t58 = (((x233<x234)^x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MAX;
	volatile int64_t x238 = -1LL;
	int32_t x239 = 2323;
	static volatile int32_t t59 = -793351672;

	t59 = (((x237<x238)^x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int8_t x243 = INT8_MAX;
	volatile int32_t t60 = -442513822;

	t60 = (((x241<x242)^x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = 13;
	int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MIN;
	volatile int32_t x248 = 27;
	int32_t t61 = 586;

	t61 = (((x245<x246)^x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MIN;
	static int16_t x250 = INT16_MAX;
	int64_t x251 = -446054LL;
	static volatile uint8_t x252 = UINT8_MAX;
	int32_t t62 = 1;

	t62 = (((x249<x250)^x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 40570315084LLU;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = 6263097;

	t63 = (((x253<x254)^x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	static int16_t x259 = INT16_MIN;
	int8_t x260 = INT8_MAX;
	volatile int32_t t64 = 88966050;

	t64 = (((x257<x258)^x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	volatile int16_t x262 = -1;
	uint64_t x263 = 304494476078496LLU;
	volatile int32_t t65 = 458045183;

	t65 = (((x261<x262)^x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 119U;
	int16_t x266 = -1;
	volatile int32_t x267 = 466314179;
	int32_t x268 = INT32_MIN;

	t66 = (((x265<x266)^x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 0LLU;
	volatile int32_t x270 = -2;
	int16_t x271 = -1;
	uint16_t x272 = UINT16_MAX;
	static volatile int32_t t67 = 5034130;

	t67 = (((x269<x270)^x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MAX;
	volatile int8_t x274 = -1;
	static volatile int32_t t68 = 397859610;

	t68 = (((x273<x274)^x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x277 = 12U;
	int64_t x279 = 122497722LL;
	int8_t x280 = -1;

	t69 = (((x277<x278)^x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x282 = 3;
	int32_t x283 = INT32_MIN;
	int32_t x284 = INT32_MAX;
	volatile int32_t t70 = -3;

	t70 = (((x281<x282)^x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = INT64_MAX;
	int32_t x286 = INT32_MIN;
	int16_t x287 = 15;
	static volatile uint32_t x288 = UINT32_MAX;
	volatile int32_t t71 = -1;

	t71 = (((x285<x286)^x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1LL;
	static int64_t x290 = INT64_MAX;
	int8_t x291 = -30;
	volatile int32_t t72 = -364568;

	t72 = (((x289<x290)^x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 956U;
	volatile uint8_t x294 = UINT8_MAX;
	volatile uint32_t x295 = UINT32_MAX;
	int64_t x296 = INT64_MIN;
	volatile int32_t t73 = -3127752;

	t73 = (((x293<x294)^x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = 48;
	static volatile int16_t x298 = INT16_MIN;
	uint32_t x299 = 1952168032U;

	t74 = (((x297<x298)^x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	volatile uint64_t x303 = UINT64_MAX;
	int32_t x304 = -4;

	t75 = (((x301<x302)^x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	uint8_t x308 = UINT8_MAX;

	t76 = (((x305<x306)^x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x309 = UINT16_MAX;
	static uint64_t x310 = UINT64_MAX;
	volatile int64_t x311 = INT64_MIN;
	int32_t t77 = -5;

	t77 = (((x309<x310)^x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x313 = 15208679769929501LLU;
	int8_t x314 = INT8_MIN;
	volatile uint64_t x315 = 290388LLU;
	uint64_t x316 = 5352322315341386407LLU;
	int32_t t78 = 73;

	t78 = (((x313<x314)^x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 53U;
	int8_t x318 = INT8_MAX;
	int64_t x320 = INT64_MIN;
	static int32_t t79 = 8;

	t79 = (((x317<x318)^x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	uint8_t x322 = UINT8_MAX;
	int32_t x323 = INT32_MAX;

	t80 = (((x321<x322)^x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x325 = UINT64_MAX;
	volatile uint16_t x326 = 3U;
	int64_t x327 = 11790182LL;
	volatile uint64_t x328 = UINT64_MAX;
	int32_t t81 = -30;

	t81 = (((x325<x326)^x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x330 = INT32_MIN;
	volatile int16_t x331 = -1;
	volatile int32_t t82 = 423445;

	t82 = (((x329<x330)^x331)==x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = 0;
	volatile uint8_t x334 = 22U;
	volatile int32_t x335 = INT32_MAX;
	volatile int32_t t83 = 385;

	t83 = (((x333<x334)^x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x337 = 35840124928993253LLU;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	int16_t x340 = 4049;

	t84 = (((x337<x338)^x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	static volatile int32_t t85 = -1;

	t85 = (((x341<x342)^x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	static volatile int8_t x347 = 51;
	int8_t x348 = 17;
	volatile int32_t t86 = 1;

	t86 = (((x345<x346)^x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1890633LL;
	int32_t x350 = -224;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -279892;

	t87 = (((x349<x350)^x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 149181091329242149LLU;
	int64_t x354 = -1781LL;
	volatile uint16_t x355 = 32U;
	int32_t x356 = -1;
	volatile int32_t t88 = 83702;

	t88 = (((x353<x354)^x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = -378094538133849LL;
	uint8_t x358 = UINT8_MAX;
	int16_t x359 = INT16_MIN;
	int32_t x360 = -8;
	volatile int32_t t89 = -18252005;

	t89 = (((x357<x358)^x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = -1;
	volatile int8_t x362 = 11;
	uint64_t x363 = UINT64_MAX;
	volatile uint32_t x364 = 13614119U;

	t90 = (((x361<x362)^x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -42;
	static int8_t x368 = INT8_MIN;
	static int32_t t91 = -743;

	t91 = (((x365<x366)^x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = 4U;
	static uint16_t x370 = 24770U;
	uint16_t x371 = 5U;

	t92 = (((x369<x370)^x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -555996795598100LL;
	int8_t x374 = INT8_MAX;
	static volatile int8_t x375 = INT8_MAX;
	int32_t x376 = INT32_MIN;
	static int32_t t93 = 146467;

	t93 = (((x373<x374)^x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = 1;
	uint32_t x378 = UINT32_MAX;
	int64_t x379 = INT64_MIN;
	uint32_t x380 = 102040355U;
	volatile int32_t t94 = 229587857;

	t94 = (((x377<x378)^x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	int64_t x382 = INT64_MIN;
	int16_t x383 = INT16_MAX;

	t95 = (((x381<x382)^x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MIN;
	int32_t x386 = 0;
	uint8_t x388 = UINT8_MAX;
	static int32_t t96 = 226891;

	t96 = (((x385<x386)^x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = -37;
	int32_t x390 = -1;
	uint32_t x391 = 80U;
	int16_t x392 = INT16_MIN;
	volatile int32_t t97 = 0;

	t97 = (((x389<x390)^x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MIN;
	uint32_t x395 = 8051579U;
	int64_t x396 = -1LL;

	t98 = (((x393<x394)^x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	static int64_t x399 = INT64_MIN;
	volatile int32_t t99 = -39792900;

	t99 = (((x397<x398)^x399)==x400);

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

