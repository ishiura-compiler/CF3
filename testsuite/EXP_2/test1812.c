#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -5114439;
int8_t x9 = INT8_MIN;
int8_t x10 = 32;
uint64_t x11 = 7608621075934LLU;
int16_t x21 = INT16_MIN;
static int16_t x23 = INT16_MAX;
static uint8_t x25 = 8U;
volatile int8_t x33 = INT8_MAX;
int8_t x36 = INT8_MAX;
int32_t x39 = INT32_MAX;
volatile int32_t t9 = 3378;
volatile int16_t x53 = INT16_MIN;
volatile int64_t x55 = -1LL;
int64_t x59 = INT64_MIN;
int16_t x68 = INT16_MAX;
int32_t t18 = -297579171;
static volatile int32_t x99 = -1;
uint16_t x104 = 3U;
int16_t x106 = -1595;
int64_t x111 = INT64_MIN;
volatile int32_t t24 = 14;
int64_t x123 = -1LL;
int64_t t27 = 58940LL;
uint16_t x130 = 2857U;
static uint32_t x131 = 125U;
static int8_t x133 = -1;
volatile uint64_t x134 = UINT64_MAX;
uint64_t x135 = UINT64_MAX;
int8_t x136 = INT8_MIN;
uint16_t x139 = UINT16_MAX;
volatile int32_t t34 = -108;
volatile uint16_t x158 = 62U;
uint16_t x165 = 7511U;
static int16_t x168 = INT16_MIN;
volatile int64_t x173 = -7342876170LL;
static uint8_t x180 = 44U;
int64_t x181 = -39303096507993LL;
volatile int64_t t42 = -27LL;
static int8_t x188 = INT8_MIN;
int32_t x198 = INT32_MAX;
int32_t x199 = INT32_MIN;
static volatile uint16_t x204 = 3U;
static int32_t t47 = -44;
volatile int32_t t48 = 396406802;
int32_t t50 = 1967;
uint32_t x223 = 1035201056U;
uint16_t x230 = 7U;
int64_t t54 = -4268075271324LL;
int64_t x242 = INT64_MAX;
int16_t x243 = -1;
uint16_t x247 = 7724U;
int64_t x250 = INT64_MIN;
volatile int32_t t59 = 1454;
volatile int32_t x254 = -537574;
int64_t x255 = -1LL;
volatile int16_t x256 = INT16_MAX;
static int16_t x271 = 380;
int8_t x272 = INT8_MIN;
int16_t x273 = INT16_MIN;
int8_t x277 = -13;
uint64_t x278 = 4906387197117LLU;
int32_t t67 = 833;
int32_t x295 = INT32_MIN;
int16_t x302 = INT16_MIN;
static int32_t x314 = 18;
int32_t x319 = 14;
uint8_t x322 = 0U;
volatile int8_t x327 = INT8_MIN;
static uint8_t x336 = UINT8_MAX;
uint8_t x344 = UINT8_MAX;
int32_t t82 = 34502059;
volatile int32_t t83 = 1;
int32_t x351 = -1;
volatile int8_t x352 = INT8_MAX;
static volatile int32_t t84 = 373633457;
static uint8_t x357 = UINT8_MAX;
int16_t x358 = INT16_MIN;
int64_t x365 = -109585516833893487LL;
uint64_t x367 = 222661325101168865LLU;
volatile int8_t x371 = -1;
volatile int8_t x372 = 5;
int8_t x376 = 1;
uint64_t x377 = UINT64_MAX;
static int64_t t91 = -725201770230LL;
int64_t x382 = 255LL;
int64_t x384 = -6042771LL;
int32_t x386 = -1;
volatile int16_t x387 = INT16_MIN;
uint32_t x392 = 226U;
static volatile uint32_t t94 = 2393597U;
static volatile uint64_t t97 = 18216219908775514LLU;
int8_t x407 = INT8_MAX;
uint64_t x410 = 83487756LLU;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static int8_t x2 = 1;
	int16_t x3 = -1;
	int16_t x4 = -1;

	t0 = ((x1<=(x2&x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = INT32_MIN;
	static int32_t x7 = -3;
	int16_t x8 = INT16_MAX;
	int32_t t1 = 877;

	t1 = ((x5<=(x6&x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x12 = INT8_MIN;
	volatile int32_t t2 = 0;

	t2 = ((x9<=(x10&x11))%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 4U;
	int16_t x14 = -1;
	int16_t x15 = 0;
	uint8_t x16 = 99U;
	int32_t t3 = -1795;

	t3 = ((x13<=(x14&x15))%x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 0LL;
	uint8_t x18 = 19U;
	int32_t x19 = 229589;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 81;

	t4 = ((x17<=(x18&x19))%x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 0;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -4192;

	t5 = ((x21<=(x22&x23))%x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 4494406LLU;
	int16_t x27 = INT16_MIN;
	static int16_t x28 = INT16_MIN;
	static int32_t t6 = -40842;

	t6 = ((x25<=(x26&x27))%x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = 5;
	int8_t x30 = 0;
	uint64_t x31 = 48706375912052335LLU;
	uint64_t x32 = 1528LLU;
	uint64_t t7 = 478461386333LLU;

	t7 = ((x29<=(x30&x31))%x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x34 = -30;
	int64_t x35 = INT64_MIN;
	static volatile int32_t t8 = -119;

	t8 = ((x33<=(x34&x35))%x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MAX;
	volatile uint16_t x38 = UINT16_MAX;
	int8_t x40 = INT8_MAX;

	t9 = ((x37<=(x38&x39))%x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = UINT8_MAX;
	volatile int32_t x46 = INT32_MIN;
	int16_t x47 = -122;
	int8_t x48 = -29;
	static int32_t t10 = -964;

	t10 = ((x45<=(x46&x47))%x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x49 = 41U;
	uint8_t x50 = 3U;
	int8_t x51 = -1;
	static uint16_t x52 = 32722U;
	int32_t t11 = 1513992;

	t11 = ((x49<=(x50&x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x54 = 744191938;
	int32_t x56 = -1;
	int32_t t12 = -114376;

	t12 = ((x53<=(x54&x55))%x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x57 = 14U;
	volatile uint16_t x58 = UINT16_MAX;
	uint8_t x60 = 2U;
	int32_t t13 = -1331;

	t13 = ((x57<=(x58&x59))%x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	volatile uint8_t x62 = 14U;
	volatile int16_t x63 = INT16_MAX;
	uint64_t x64 = 19792642478225036LLU;
	volatile uint64_t t14 = 15075728881088LLU;

	t14 = ((x61<=(x62&x63))%x64);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 15135U;
	int8_t x66 = INT8_MIN;
	int16_t x67 = INT16_MAX;
	int32_t t15 = -2983953;

	t15 = ((x65<=(x66&x67))%x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = INT8_MIN;
	volatile uint32_t x74 = 931U;
	uint16_t x75 = UINT16_MAX;
	uint32_t x76 = UINT32_MAX;
	volatile uint32_t t16 = 127783549U;

	t16 = ((x73<=(x74&x75))%x76);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	static int16_t x83 = 3036;
	volatile int8_t x84 = 3;
	int32_t t17 = 581967877;

	t17 = ((x81<=(x82&x83))%x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -105925;
	volatile int32_t x86 = -1;
	static uint8_t x87 = UINT8_MAX;
	int8_t x88 = INT8_MAX;

	t18 = ((x85<=(x86&x87))%x88);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MIN;
	static int64_t x90 = INT64_MAX;
	volatile int8_t x91 = 1;
	volatile int16_t x92 = INT16_MIN;
	volatile int32_t t19 = -72;

	t19 = ((x89<=(x90&x91))%x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MAX;
	int32_t x95 = -59943538;
	static volatile int16_t x96 = INT16_MIN;
	int32_t t20 = -19278520;

	t20 = ((x93<=(x94&x95))%x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = INT8_MAX;
	uint64_t x98 = UINT64_MAX;
	volatile int8_t x100 = -1;
	static int32_t t21 = -3067;

	t21 = ((x97<=(x98&x99))%x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = -1;
	int64_t x102 = -224133LL;
	static volatile int32_t x103 = -1399595;
	static volatile int32_t t22 = -2712;

	t22 = ((x101<=(x102&x103))%x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = INT8_MAX;
	int16_t x107 = 4410;
	int8_t x108 = -1;
	volatile int32_t t23 = 5388461;

	t23 = ((x105<=(x106&x107))%x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = -1LL;
	uint32_t x110 = 407U;
	int8_t x112 = 39;

	t24 = ((x109<=(x110&x111))%x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	int8_t x114 = -1;
	static int64_t x115 = -1LL;
	static int32_t x116 = -1;
	volatile int32_t t25 = 253693;

	t25 = ((x113<=(x114&x115))%x116);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x117 = 2331U;
	int8_t x118 = INT8_MIN;
	uint8_t x119 = UINT8_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t26 = 109244531LLU;

	t26 = ((x117<=(x118&x119))%x120);

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x121 = INT32_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x124 = -1LL;

	t27 = ((x121<=(x122&x123))%x124);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x125 = 3U;
	int32_t x126 = INT32_MAX;
	static int64_t x127 = -1563LL;
	uint64_t x128 = 2095997415741LLU;
	uint64_t t28 = 942409LLU;

	t28 = ((x125<=(x126&x127))%x128);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 24U;
	int64_t x132 = -1LL;
	int64_t t29 = -48374LL;

	t29 = ((x129<=(x130&x131))%x132);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t t30 = 6699;

	t30 = ((x133<=(x134&x135))%x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 0U;
	int8_t x138 = INT8_MAX;
	static int32_t x140 = 60;
	int32_t t31 = 1;

	t31 = ((x137<=(x138&x139))%x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = -1LL;
	static uint64_t x142 = 1096LLU;
	uint32_t x143 = UINT32_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t32 = 1;

	t32 = ((x141<=(x142&x143))%x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MIN;
	volatile uint64_t x146 = UINT64_MAX;
	volatile uint16_t x147 = 53U;
	int64_t x148 = INT64_MIN;
	volatile int64_t t33 = 63610572LL;

	t33 = ((x145<=(x146&x147))%x148);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x149 = UINT64_MAX;
	int32_t x150 = INT32_MIN;
	int8_t x151 = -12;
	int32_t x152 = -8;

	t34 = ((x149<=(x150&x151))%x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	static uint16_t x154 = UINT16_MAX;
	int32_t x155 = -12;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t35 = 8209297390611LLU;

	t35 = ((x153<=(x154&x155))%x156);

	if (t35 != 1LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x157 = INT32_MAX;
	static volatile int16_t x159 = INT16_MIN;
	static int64_t x160 = INT64_MAX;
	volatile int64_t t36 = -22841443LL;

	t36 = ((x157<=(x158&x159))%x160);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x161 = 0U;
	int8_t x162 = INT8_MAX;
	int32_t x163 = INT32_MIN;
	uint16_t x164 = 671U;
	volatile int32_t t37 = 20;

	t37 = ((x161<=(x162&x163))%x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x166 = 82LL;
	int16_t x167 = INT16_MIN;
	int32_t t38 = -84529678;

	t38 = ((x165<=(x166&x167))%x168);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x169 = 261265LLU;
	int64_t x170 = -1LL;
	int32_t x171 = -3;
	volatile int64_t x172 = INT64_MAX;
	volatile int64_t t39 = -6934LL;

	t39 = ((x169<=(x170&x171))%x172);

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x174 = -705;
	uint16_t x175 = 6071U;
	static int8_t x176 = -28;
	volatile int32_t t40 = -70230;

	t40 = ((x173<=(x174&x175))%x176);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x177 = 297169625364924LL;
	int16_t x178 = 26;
	int64_t x179 = INT64_MAX;
	int32_t t41 = -718282463;

	t41 = ((x177<=(x178&x179))%x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x182 = UINT8_MAX;
	static volatile int32_t x183 = -289411141;
	static int64_t x184 = -1LL;

	t42 = ((x181<=(x182&x183))%x184);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = 23918881LLU;
	int32_t x187 = -1;
	volatile int32_t t43 = 27;

	t43 = ((x185<=(x186&x187))%x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = 9;
	volatile uint16_t x190 = 262U;
	static volatile int16_t x191 = INT16_MIN;
	int16_t x192 = 7148;
	int32_t t44 = 75854;

	t44 = ((x189<=(x190&x191))%x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x193 = 16733320LLU;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = -1;
	int8_t x196 = -1;
	int32_t t45 = -4864;

	t45 = ((x193<=(x194&x195))%x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x197 = 1;
	int8_t x200 = -1;
	int32_t t46 = 0;

	t46 = ((x197<=(x198&x199))%x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x201 = 347U;
	uint64_t x202 = 9468444417LLU;
	uint16_t x203 = 334U;

	t47 = ((x201<=(x202&x203))%x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MIN;
	uint8_t x206 = 13U;
	uint32_t x207 = 595U;
	static int32_t x208 = 354392173;

	t48 = ((x205<=(x206&x207))%x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 451;
	volatile uint8_t x210 = 1U;
	static volatile int8_t x211 = 11;
	uint32_t x212 = 1U;
	static volatile uint32_t t49 = 691080097U;

	t49 = ((x209<=(x210&x211))%x212);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x213 = 50U;
	static volatile int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	static int8_t x216 = -23;

	t50 = ((x213<=(x214&x215))%x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x217 = 5653685LLU;
	volatile int64_t x218 = 68LL;
	static int8_t x219 = INT8_MIN;
	uint16_t x220 = 3406U;
	static volatile int32_t t51 = 61;

	t51 = ((x217<=(x218&x219))%x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x221 = 9U;
	volatile int32_t x222 = INT32_MIN;
	volatile uint32_t x224 = 1496459873U;
	static volatile uint32_t t52 = 5630764U;

	t52 = ((x221<=(x222&x223))%x224);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x225 = -1LL;
	volatile uint64_t x226 = 19151016LLU;
	int32_t x227 = INT32_MAX;
	int8_t x228 = 1;
	volatile int32_t t53 = 2913;

	t53 = ((x225<=(x226&x227))%x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = 5421U;
	int16_t x231 = 16206;
	int64_t x232 = 3840545667300108LL;

	t54 = ((x229<=(x230&x231))%x232);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = UINT64_MAX;
	static int64_t x234 = INT64_MIN;
	volatile int64_t x235 = -8775952978212LL;
	uint32_t x236 = 20U;
	static uint32_t t55 = 10515731U;

	t55 = ((x233<=(x234&x235))%x236);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 88062011530094623LLU;
	uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 9U;
	int64_t x240 = INT64_MIN;
	int64_t t56 = -1072048683261079LL;

	t56 = ((x237<=(x238&x239))%x240);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x241 = 276U;
	static int8_t x244 = -1;
	volatile int32_t t57 = 762;

	t57 = ((x241<=(x242&x243))%x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 14658U;
	static uint8_t x246 = UINT8_MAX;
	volatile int8_t x248 = INT8_MAX;
	volatile int32_t t58 = -1734419;

	t58 = ((x245<=(x246&x247))%x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x249 = INT64_MAX;
	volatile int16_t x251 = INT16_MIN;
	int8_t x252 = -1;

	t59 = ((x249<=(x250&x251))%x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = -1;
	volatile int32_t t60 = -557;

	t60 = ((x253<=(x254&x255))%x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x257 = 256035329U;
	uint16_t x258 = UINT16_MAX;
	int16_t x259 = 1128;
	int64_t x260 = -1LL;
	int64_t t61 = -55965453LL;

	t61 = ((x257<=(x258&x259))%x260);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = 4010;
	int64_t x262 = INT64_MIN;
	uint16_t x263 = 16020U;
	int8_t x264 = 1;
	int32_t t62 = 585232534;

	t62 = ((x261<=(x262&x263))%x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = -1LL;
	int64_t x266 = INT64_MIN;
	int64_t x267 = INT64_MIN;
	int32_t x268 = INT32_MIN;
	volatile int32_t t63 = -7068;

	t63 = ((x265<=(x266&x267))%x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = UINT8_MAX;
	int16_t x270 = INT16_MIN;
	int32_t t64 = 0;

	t64 = ((x269<=(x270&x271))%x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x274 = INT64_MAX;
	uint32_t x275 = 336221U;
	volatile int8_t x276 = INT8_MAX;
	volatile int32_t t65 = -11582340;

	t65 = ((x273<=(x274&x275))%x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 18501U;
	volatile int32_t t66 = 0;

	t66 = ((x277<=(x278&x279))%x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x281 = -1LL;
	static int32_t x282 = INT32_MIN;
	uint32_t x283 = UINT32_MAX;
	int16_t x284 = -1;

	t67 = ((x281<=(x282&x283))%x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = -3222025LL;
	static volatile uint16_t x286 = 31131U;
	int8_t x287 = INT8_MAX;
	int16_t x288 = -1;
	static int32_t t68 = 14377;

	t68 = ((x285<=(x286&x287))%x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = INT16_MAX;
	int32_t x290 = -1;
	static uint8_t x291 = 10U;
	uint16_t x292 = UINT16_MAX;
	static volatile int32_t t69 = -4921;

	t69 = ((x289<=(x290&x291))%x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	int8_t x294 = INT8_MIN;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t70 = 239035U;

	t70 = ((x293<=(x294&x295))%x296);

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = -1LL;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = INT64_MAX;
	static int16_t x300 = 5806;
	int32_t t71 = -416;

	t71 = ((x297<=(x298&x299))%x300);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 30;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t72 = -28;

	t72 = ((x301<=(x302&x303))%x304);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 1538U;
	int64_t x306 = -1LL;
	int32_t x307 = INT32_MIN;
	static volatile int8_t x308 = INT8_MIN;
	static volatile int32_t t73 = 49849;

	t73 = ((x305<=(x306&x307))%x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x309 = INT64_MIN;
	volatile int8_t x310 = INT8_MIN;
	uint8_t x311 = 15U;
	volatile uint32_t x312 = 866U;
	uint32_t t74 = 1610U;

	t74 = ((x309<=(x310&x311))%x312);

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x313 = -4349;
	int8_t x315 = INT8_MIN;
	uint32_t x316 = 14583522U;
	uint32_t t75 = 548U;

	t75 = ((x313<=(x314&x315))%x316);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x317 = -1LL;
	static int32_t x318 = -1;
	int8_t x320 = 3;
	volatile int32_t t76 = -4423226;

	t76 = ((x317<=(x318&x319))%x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x321 = 16246LLU;
	static volatile int32_t x323 = -2;
	uint16_t x324 = 15U;
	static int32_t t77 = 663334;

	t77 = ((x321<=(x322&x323))%x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = 36055513;
	int32_t x326 = INT32_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t78 = 25068538548435896LL;

	t78 = ((x325<=(x326&x327))%x328);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x329 = UINT16_MAX;
	volatile int64_t x330 = INT64_MAX;
	volatile int64_t x331 = -1LL;
	static int32_t x332 = INT32_MAX;
	volatile int32_t t79 = -89775482;

	t79 = ((x329<=(x330&x331))%x332);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = INT32_MIN;
	uint32_t x334 = UINT32_MAX;
	static int8_t x335 = INT8_MAX;
	static int32_t t80 = 12;

	t80 = ((x333<=(x334&x335))%x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x337 = UINT16_MAX;
	int32_t x338 = -1;
	uint32_t x339 = UINT32_MAX;
	volatile int64_t x340 = 69279332374224663LL;
	volatile int64_t t81 = 5LL;

	t81 = ((x337<=(x338&x339))%x340);

	if (t81 != 1LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x341 = -1;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = 14;

	t82 = ((x341<=(x342&x343))%x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x345 = -29;
	int32_t x346 = INT32_MAX;
	static int8_t x347 = INT8_MIN;
	int8_t x348 = 37;

	t83 = ((x345<=(x346&x347))%x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 45U;
	volatile uint64_t x350 = UINT64_MAX;

	t84 = ((x349<=(x350&x351))%x352);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = INT64_MIN;
	static volatile uint16_t x354 = 1U;
	static int32_t x355 = -1158622;
	int16_t x356 = INT16_MIN;
	volatile int32_t t85 = 19;

	t85 = ((x353<=(x354&x355))%x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x359 = 7;
	int8_t x360 = INT8_MIN;
	volatile int32_t t86 = 6584;

	t86 = ((x357<=(x358&x359))%x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x361 = UINT32_MAX;
	int16_t x362 = 39;
	uint32_t x363 = UINT32_MAX;
	uint16_t x364 = 1U;
	volatile int32_t t87 = -658182;

	t87 = ((x361<=(x362&x363))%x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x366 = 141LLU;
	volatile int32_t x368 = 451900;
	int32_t t88 = -2080133;

	t88 = ((x365<=(x366&x367))%x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	int32_t t89 = 1881398;

	t89 = ((x369<=(x370&x371))%x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x373 = INT32_MIN;
	int16_t x374 = 184;
	uint64_t x375 = 30816LLU;
	volatile int32_t t90 = 268;

	t90 = ((x373<=(x374&x375))%x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x378 = UINT8_MAX;
	volatile uint32_t x379 = 27U;
	int64_t x380 = 14254640577351LL;

	t91 = ((x377<=(x378&x379))%x380);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x381 = 201254;
	int16_t x383 = INT16_MIN;
	volatile int64_t t92 = 6824787126LL;

	t92 = ((x381<=(x382&x383))%x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x385 = 73U;
	uint16_t x388 = 16189U;
	static int32_t t93 = 97;

	t93 = ((x385<=(x386&x387))%x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MIN;
	static uint8_t x390 = UINT8_MAX;
	static uint8_t x391 = 0U;

	t94 = ((x389<=(x390&x391))%x392);

	if (t94 != 1U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x393 = 1;
	uint64_t x394 = UINT64_MAX;
	int32_t x395 = -1825997;
	int64_t x396 = 22994594LL;
	volatile int64_t t95 = 8957664LL;

	t95 = ((x393<=(x394&x395))%x396);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x397 = UINT8_MAX;
	int16_t x398 = 393;
	static uint64_t x399 = 3LLU;
	volatile int8_t x400 = -1;
	volatile int32_t t96 = 36;

	t96 = ((x397<=(x398&x399))%x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = 3U;
	int32_t x403 = -2491;
	volatile uint64_t x404 = 13LLU;

	t97 = ((x401<=(x402&x403))%x404);

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	int16_t x406 = INT16_MIN;
	static volatile int64_t x408 = -384135236677546LL;
	volatile int64_t t98 = -228LL;

	t98 = ((x405<=(x406&x407))%x408);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x409 = 45LLU;
	volatile int8_t x411 = INT8_MIN;
	uint16_t x412 = 4470U;
	volatile int32_t t99 = -393;

	t99 = ((x409<=(x410&x411))%x412);

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

