#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
uint8_t x10 = 13U;
int8_t x21 = INT8_MIN;
int16_t x25 = INT16_MAX;
uint8_t x26 = 2U;
volatile int16_t x41 = INT16_MAX;
uint8_t x42 = 111U;
volatile uint8_t x43 = UINT8_MAX;
uint16_t x47 = 0U;
int32_t x49 = 4911663;
volatile int32_t x52 = 4;
volatile uint32_t x53 = 2774U;
uint64_t x55 = 2229485LLU;
uint32_t x65 = 1239888842U;
static int16_t x69 = INT16_MIN;
volatile uint64_t t17 = 46331093538LLU;
int32_t x77 = -1;
static int8_t x90 = -1;
static int64_t x91 = 5311555LL;
static volatile int8_t x95 = 3;
int16_t x102 = INT16_MIN;
static uint32_t x108 = 74811303U;
int64_t t26 = -610364LL;
uint64_t x117 = UINT64_MAX;
int64_t x119 = -1LL;
int16_t x123 = INT16_MAX;
int16_t x124 = -1;
int16_t x126 = -1;
static int64_t x128 = 1898367LL;
volatile int64_t t29 = 229567931518280919LL;
int8_t x131 = INT8_MIN;
int8_t x138 = 30;
int16_t x142 = -633;
uint8_t x151 = UINT8_MAX;
static int16_t x152 = INT16_MAX;
int32_t t35 = 274012396;
int8_t x156 = INT8_MIN;
int32_t x162 = INT32_MAX;
int32_t t38 = 266889;
int8_t x172 = INT8_MAX;
int8_t x174 = -11;
int16_t x175 = INT16_MIN;
int32_t x176 = -1;
static volatile uint64_t x185 = 1890864546673LLU;
volatile int32_t x190 = 1;
int32_t x196 = INT32_MAX;
volatile int64_t x199 = INT64_MIN;
volatile uint64_t x204 = 219586LLU;
static int64_t x206 = INT64_MIN;
volatile int16_t x217 = -1;
int8_t x221 = INT8_MIN;
uint32_t x222 = 1U;
uint8_t x227 = 58U;
int8_t x228 = INT8_MIN;
static int8_t x229 = INT8_MAX;
volatile int64_t x231 = INT64_MIN;
volatile int32_t x241 = INT32_MIN;
static volatile uint8_t x245 = 3U;
int32_t x246 = INT32_MIN;
static volatile int64_t x249 = 2058278782326LL;
static int32_t x250 = INT32_MAX;
uint32_t x256 = UINT32_MAX;
int32_t t62 = 1817343;
uint16_t x265 = 14U;
int8_t x270 = INT8_MIN;
int16_t x271 = -55;
volatile int16_t x287 = -1;
int32_t t70 = -7170827;
int8_t x302 = INT8_MIN;
int8_t x303 = INT8_MIN;
static int8_t x305 = INT8_MAX;
int16_t x306 = INT16_MIN;
uint8_t x310 = UINT8_MAX;
int64_t t76 = 3011618LL;
static uint32_t x321 = UINT32_MAX;
volatile int8_t x331 = INT8_MIN;
uint16_t x335 = 306U;
volatile uint8_t x341 = UINT8_MAX;
int16_t x346 = INT16_MIN;
int8_t x348 = INT8_MAX;
int8_t x349 = INT8_MIN;
volatile int32_t t86 = -1;
int8_t x358 = 1;
int16_t x360 = 83;
uint16_t x361 = 4U;
volatile int32_t x363 = -1;
int32_t x366 = INT32_MIN;
int16_t x377 = INT16_MIN;
volatile uint32_t x383 = 467343U;
static volatile int16_t x385 = 239;
volatile int32_t t94 = 177612834;
uint64_t x395 = 248450420156039LLU;
volatile int32_t t95 = 0;
int32_t x400 = INT32_MAX;
static volatile int16_t x401 = 481;
static uint16_t x405 = 944U;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	volatile int64_t x2 = 20LL;
	int32_t x3 = INT32_MAX;
	int32_t t0 = -860520;

	t0 = ((x1<(x2&x3))%x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 0U;
	uint8_t x6 = 2U;
	int32_t x7 = -224177136;
	static uint8_t x8 = 20U;
	int32_t t1 = 6196;

	t1 = ((x5<(x6&x7))%x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint8_t x11 = 104U;
	int64_t x12 = -1LL;
	int64_t t2 = -11422049998LL;

	t2 = ((x9<(x10&x11))%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 5082309;
	static int32_t x18 = INT32_MAX;
	uint32_t x19 = 119222209U;
	volatile int64_t x20 = -86330LL;
	volatile int64_t t3 = 9323LL;

	t3 = ((x17<(x18&x19))%x20);

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = UINT32_MAX;
	volatile uint8_t x23 = 17U;
	static int64_t x24 = -429052680LL;
	volatile int64_t t4 = 576654232785124LL;

	t4 = ((x21<(x22&x23))%x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x27 = INT32_MIN;
	static int64_t x28 = INT64_MAX;
	static int64_t t5 = 758694036LL;

	t5 = ((x25<(x26&x27))%x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = -24111222933736875LL;
	static int16_t x30 = 25;
	int8_t x31 = INT8_MIN;
	static volatile uint64_t x32 = UINT64_MAX;
	volatile uint64_t t6 = 26382514LLU;

	t6 = ((x29<(x30&x31))%x32);

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = UINT8_MAX;
	int32_t x34 = INT32_MAX;
	static int16_t x35 = INT16_MIN;
	uint8_t x36 = UINT8_MAX;
	int32_t t7 = -7246;

	t7 = ((x33<(x34&x35))%x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = -131LL;
	uint32_t x38 = 5396340U;
	int32_t x39 = -1;
	int64_t x40 = -1LL;
	int64_t t8 = 993520409LL;

	t8 = ((x37<(x38&x39))%x40);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x44 = 10042588851773LL;
	int64_t t9 = -29LL;

	t9 = ((x41<(x42&x43))%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	static uint8_t x46 = UINT8_MAX;
	uint32_t x48 = 23449U;
	uint32_t t10 = 10650U;

	t10 = ((x45<(x46&x47))%x48);

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x50 = -1LL;
	volatile int16_t x51 = -1;
	volatile int32_t t11 = -1;

	t11 = ((x49<(x50&x51))%x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x54 = 162243465057LL;
	uint64_t x56 = 1298157933471086141LLU;
	uint64_t t12 = 271425LLU;

	t12 = ((x53<(x54&x55))%x56);

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = -1LL;
	uint32_t x59 = 4U;
	volatile int16_t x60 = INT16_MIN;
	static volatile int32_t t13 = -2141361;

	t13 = ((x57<(x58&x59))%x60);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 26U;
	int8_t x62 = -1;
	int32_t x63 = INT32_MIN;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = 3479;

	t14 = ((x61<(x62&x63))%x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x66 = -1LL;
	static volatile uint64_t x67 = 3875LLU;
	uint64_t x68 = UINT64_MAX;
	volatile uint64_t t15 = 30529162629LLU;

	t15 = ((x65<(x66&x67))%x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x70 = INT8_MIN;
	uint16_t x71 = UINT16_MAX;
	int32_t x72 = -35701111;
	volatile int32_t t16 = 64516928;

	t16 = ((x69<(x70&x71))%x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 55399743LLU;
	static uint8_t x74 = 24U;
	uint16_t x75 = 22067U;
	static volatile uint64_t x76 = 16794845808619LLU;

	t17 = ((x73<(x74&x75))%x76);

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x78 = INT64_MIN;
	volatile int16_t x79 = INT16_MAX;
	int16_t x80 = INT16_MIN;
	volatile int32_t t18 = 8567;

	t18 = ((x77<(x78&x79))%x80);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = 77U;
	static int8_t x82 = INT8_MAX;
	int64_t x83 = 1443123236656LL;
	int32_t x84 = INT32_MAX;
	volatile int32_t t19 = 0;

	t19 = ((x81<(x82&x83))%x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 18115U;
	uint8_t x92 = 12U;
	int32_t t20 = 1101731;

	t20 = ((x89<(x90&x91))%x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	static volatile int32_t x94 = -2707101;
	static int8_t x96 = INT8_MAX;
	int32_t t21 = -608771;

	t21 = ((x93<(x94&x95))%x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x97 = -1;
	static int32_t x98 = 429151477;
	int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MAX;
	static volatile int64_t t22 = 474677216329169LL;

	t22 = ((x97<(x98&x99))%x100);

	if (t22 != 1LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x101 = -1;
	static int32_t x103 = INT32_MAX;
	int32_t x104 = -1;
	static int32_t t23 = -2179293;

	t23 = ((x101<(x102&x103))%x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = UINT32_MAX;
	static int8_t x106 = -4;
	int32_t x107 = -1;
	volatile uint32_t t24 = 25U;

	t24 = ((x105<(x106&x107))%x108);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x109 = -1;
	uint32_t x110 = 11221633U;
	int8_t x111 = INT8_MAX;
	static volatile uint8_t x112 = UINT8_MAX;
	volatile int32_t t25 = -206425915;

	t25 = ((x109<(x110&x111))%x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = 0U;
	int32_t x114 = 0;
	static int16_t x115 = INT16_MIN;
	int64_t x116 = INT64_MAX;

	t26 = ((x113<(x114&x115))%x116);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x118 = INT64_MIN;
	int8_t x120 = -1;
	int32_t t27 = 25761;

	t27 = ((x117<(x118&x119))%x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x121 = -1;
	int16_t x122 = INT16_MIN;
	volatile int32_t t28 = 60168;

	t28 = ((x121<(x122&x123))%x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x125 = 0;
	int16_t x127 = INT16_MAX;

	t29 = ((x125<(x126&x127))%x128);

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x129 = 9658396847493569LLU;
	volatile int32_t x130 = -854813;
	static int32_t x132 = INT32_MAX;
	static int32_t t30 = -2029292;

	t30 = ((x129<(x130&x131))%x132);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = -1;
	static volatile int16_t x134 = -488;
	int8_t x135 = INT8_MIN;
	int32_t x136 = INT32_MAX;
	volatile int32_t t31 = -3;

	t31 = ((x133<(x134&x135))%x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x137 = 117U;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = UINT8_MAX;
	int32_t t32 = -7744331;

	t32 = ((x137<(x138&x139))%x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 63U;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = UINT32_MAX;
	uint32_t t33 = 6791U;

	t33 = ((x141<(x142&x143))%x144);

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x145 = 3U;
	static int32_t x146 = -1;
	static uint8_t x147 = UINT8_MAX;
	int16_t x148 = INT16_MAX;
	int32_t t34 = -814659;

	t34 = ((x145<(x146&x147))%x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 25U;
	static int8_t x150 = INT8_MIN;

	t35 = ((x149<(x150&x151))%x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 896U;
	uint16_t x154 = 23U;
	uint32_t x155 = 2427U;
	volatile int32_t t36 = 4740812;

	t36 = ((x153<(x154&x155))%x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = 2043U;
	volatile int32_t x158 = INT32_MIN;
	int16_t x159 = -14;
	int64_t x160 = 952656683LL;
	int64_t t37 = 2791319872380900LL;

	t37 = ((x157<(x158&x159))%x160);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	volatile uint8_t x164 = 1U;

	t38 = ((x161<(x162&x163))%x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = INT64_MAX;
	static int32_t x166 = INT32_MIN;
	uint64_t x167 = 62471993LLU;
	int8_t x168 = INT8_MIN;
	volatile int32_t t39 = 6644440;

	t39 = ((x165<(x166&x167))%x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = -1;
	int64_t x170 = INT64_MAX;
	int64_t x171 = INT64_MIN;
	int32_t t40 = 370143615;

	t40 = ((x169<(x170&x171))%x172);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = 589;
	int32_t t41 = -31723;

	t41 = ((x173<(x174&x175))%x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MAX;
	static int32_t x178 = INT32_MAX;
	static uint64_t x179 = 8882250559181851LLU;
	volatile uint32_t x180 = UINT32_MAX;
	static volatile uint32_t t42 = 2491599U;

	t42 = ((x177<(x178&x179))%x180);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	static volatile int32_t x182 = -1;
	int32_t x183 = -29508;
	static int32_t x184 = -105;
	volatile int32_t t43 = 459892;

	t43 = ((x181<(x182&x183))%x184);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x186 = UINT8_MAX;
	static int8_t x187 = INT8_MAX;
	uint32_t x188 = UINT32_MAX;
	static uint32_t t44 = 1532857U;

	t44 = ((x185<(x186&x187))%x188);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = 1;
	int64_t x191 = 59316025121LL;
	int32_t x192 = INT32_MIN;
	int32_t t45 = 61809475;

	t45 = ((x189<(x190&x191))%x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = INT64_MIN;
	int32_t x194 = 7619;
	static uint32_t x195 = UINT32_MAX;
	int32_t t46 = 268479601;

	t46 = ((x193<(x194&x195))%x196);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x197 = 78U;
	static uint16_t x198 = 10566U;
	volatile int32_t x200 = -547962;
	volatile int32_t t47 = 3698580;

	t47 = ((x197<(x198&x199))%x200);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x201 = -1LL;
	uint8_t x202 = UINT8_MAX;
	int16_t x203 = INT16_MIN;
	static uint64_t t48 = 2782218799597237559LLU;

	t48 = ((x201<(x202&x203))%x204);

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x205 = 8840741059493556LLU;
	uint8_t x207 = UINT8_MAX;
	volatile uint16_t x208 = 126U;
	int32_t t49 = 53;

	t49 = ((x205<(x206&x207))%x208);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x209 = UINT64_MAX;
	static volatile int64_t x210 = INT64_MIN;
	int8_t x211 = INT8_MIN;
	static volatile int8_t x212 = INT8_MIN;
	int32_t t50 = 123462302;

	t50 = ((x209<(x210&x211))%x212);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x213 = INT16_MAX;
	int64_t x214 = INT64_MIN;
	volatile int16_t x215 = INT16_MIN;
	int16_t x216 = -499;
	static volatile int32_t t51 = 801;

	t51 = ((x213<(x214&x215))%x216);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x218 = INT8_MIN;
	int16_t x219 = -1;
	uint64_t x220 = 122889LLU;
	volatile uint64_t t52 = 1135617937LLU;

	t52 = ((x217<(x218&x219))%x220);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x223 = -1;
	uint32_t x224 = UINT32_MAX;
	static uint32_t t53 = 27U;

	t53 = ((x221<(x222&x223))%x224);

	if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = 1811819;
	uint8_t x226 = 24U;
	volatile int32_t t54 = 53063435;

	t54 = ((x225<(x226&x227))%x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x230 = 590847918;
	int16_t x232 = INT16_MIN;
	int32_t t55 = -1117415;

	t55 = ((x229<(x230&x231))%x232);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MAX;
	uint32_t x234 = 3277370U;
	static uint64_t x235 = UINT64_MAX;
	int8_t x236 = -1;
	int32_t t56 = 10631;

	t56 = ((x233<(x234&x235))%x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x237 = INT32_MIN;
	int16_t x238 = 56;
	int16_t x239 = INT16_MAX;
	int16_t x240 = INT16_MAX;
	int32_t t57 = 53387805;

	t57 = ((x237<(x238&x239))%x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x242 = INT64_MIN;
	int16_t x243 = -1;
	int8_t x244 = INT8_MAX;
	static int32_t t58 = -1;

	t58 = ((x241<(x242&x243))%x244);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x247 = INT32_MIN;
	int8_t x248 = INT8_MIN;
	int32_t t59 = -815;

	t59 = ((x245<(x246&x247))%x248);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x251 = INT16_MIN;
	int32_t x252 = -1;
	int32_t t60 = -92;

	t60 = ((x249<(x250&x251))%x252);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x253 = 1038349237427628209LLU;
	static uint64_t x254 = 2LLU;
	static int32_t x255 = INT32_MAX;
	volatile uint32_t t61 = 89U;

	t61 = ((x253<(x254&x255))%x256);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x257 = INT8_MIN;
	static int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MIN;
	uint8_t x260 = UINT8_MAX;

	t62 = ((x257<(x258&x259))%x260);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x261 = 234133486653721774LLU;
	uint32_t x262 = 1U;
	uint64_t x263 = 48963532LLU;
	int64_t x264 = -115024855578035LL;
	volatile int64_t t63 = 687069875892775LL;

	t63 = ((x261<(x262&x263))%x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x266 = 2U;
	int8_t x267 = INT8_MAX;
	int8_t x268 = 6;
	int32_t t64 = 1;

	t64 = ((x265<(x266&x267))%x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MAX;
	static int16_t x272 = -2171;
	static int32_t t65 = 800360210;

	t65 = ((x269<(x270&x271))%x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = 93959297U;
	int32_t x275 = -1;
	uint32_t x276 = 82U;
	static volatile uint32_t t66 = 86U;

	t66 = ((x273<(x274&x275))%x276);

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = 31;
	int8_t x278 = 1;
	int64_t x279 = INT64_MAX;
	static int64_t x280 = INT64_MIN;
	static volatile int64_t t67 = 140707985501LL;

	t67 = ((x277<(x278&x279))%x280);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x281 = 118LLU;
	uint64_t x282 = 451600LLU;
	int64_t x283 = -1LL;
	int8_t x284 = 1;
	volatile int32_t t68 = 49;

	t68 = ((x281<(x282&x283))%x284);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x285 = INT64_MIN;
	int64_t x286 = -1LL;
	uint64_t x288 = 3LLU;
	volatile uint64_t t69 = 4202149013516629LLU;

	t69 = ((x285<(x286&x287))%x288);

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = INT32_MIN;
	int32_t x290 = INT32_MIN;
	int32_t x291 = -888849;
	static int8_t x292 = -1;

	t70 = ((x289<(x290&x291))%x292);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x293 = INT32_MIN;
	int16_t x294 = INT16_MAX;
	static uint64_t x295 = 1LLU;
	uint16_t x296 = 2U;
	volatile int32_t t71 = 325;

	t71 = ((x293<(x294&x295))%x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x297 = UINT16_MAX;
	volatile uint32_t x298 = 247420816U;
	volatile int32_t x299 = INT32_MIN;
	static int16_t x300 = 2747;
	volatile int32_t t72 = -35071;

	t72 = ((x297<(x298&x299))%x300);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = INT8_MIN;
	int64_t x304 = INT64_MAX;
	int64_t t73 = 1376466262112673LL;

	t73 = ((x301<(x302&x303))%x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x307 = INT8_MIN;
	int8_t x308 = -1;
	static int32_t t74 = -222073136;

	t74 = ((x305<(x306&x307))%x308);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x309 = UINT16_MAX;
	uint64_t x311 = 6585813LLU;
	uint16_t x312 = 561U;
	static int32_t t75 = 3775;

	t75 = ((x309<(x310&x311))%x312);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x313 = 61U;
	static int8_t x314 = -1;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MIN;

	t76 = ((x313<(x314&x315))%x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -1;
	uint32_t x318 = 95313U;
	static int64_t x319 = INT64_MAX;
	uint16_t x320 = UINT16_MAX;
	int32_t t77 = 12;

	t77 = ((x317<(x318&x319))%x320);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x322 = -1;
	int32_t x323 = INT32_MIN;
	static volatile int16_t x324 = INT16_MIN;
	static int32_t t78 = 6;

	t78 = ((x321<(x322&x323))%x324);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = -64;
	static uint64_t x326 = 253LLU;
	int16_t x327 = -1839;
	volatile int64_t x328 = INT64_MAX;
	int64_t t79 = 0LL;

	t79 = ((x325<(x326&x327))%x328);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint32_t x329 = UINT32_MAX;
	int8_t x330 = INT8_MIN;
	volatile int32_t x332 = -43776057;
	int32_t t80 = 259416486;

	t80 = ((x329<(x330&x331))%x332);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x333 = INT64_MIN;
	volatile int32_t x334 = INT32_MAX;
	uint32_t x336 = UINT32_MAX;
	volatile uint32_t t81 = 1261778U;

	t81 = ((x333<(x334&x335))%x336);

	if (t81 != 1U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x337 = -1;
	uint16_t x338 = 1U;
	uint8_t x339 = 3U;
	int64_t x340 = INT64_MIN;
	int64_t t82 = -410477LL;

	t82 = ((x337<(x338&x339))%x340);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint16_t x342 = UINT16_MAX;
	int32_t x343 = INT32_MIN;
	static uint32_t x344 = 263752535U;
	volatile uint32_t t83 = 16704842U;

	t83 = ((x341<(x342&x343))%x344);

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x345 = 175404165649025LLU;
	static uint16_t x347 = 6U;
	volatile int32_t t84 = 369918109;

	t84 = ((x345<(x346&x347))%x348);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x350 = -1LL;
	int64_t x351 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t85 = -24835334;

	t85 = ((x349<(x350&x351))%x352);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = 22012704115646LL;
	uint32_t x355 = 8U;
	int16_t x356 = -1;

	t86 = ((x353<(x354&x355))%x356);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x357 = INT64_MAX;
	volatile int8_t x359 = -1;
	static int32_t t87 = 271418067;

	t87 = ((x357<(x358&x359))%x360);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x362 = -1;
	volatile int64_t x364 = INT64_MAX;
	volatile int64_t t88 = 93929LL;

	t88 = ((x361<(x362&x363))%x364);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint16_t x365 = 4863U;
	int64_t x367 = -1177210451023322200LL;
	int8_t x368 = -1;
	volatile int32_t t89 = 11674;

	t89 = ((x365<(x366&x367))%x368);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x369 = INT64_MIN;
	uint16_t x370 = UINT16_MAX;
	static uint8_t x371 = UINT8_MAX;
	static volatile int32_t x372 = -1725461;
	volatile int32_t t90 = -20663;

	t90 = ((x369<(x370&x371))%x372);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x378 = INT32_MIN;
	int16_t x379 = 1634;
	uint16_t x380 = UINT16_MAX;
	int32_t t91 = -13042;

	t91 = ((x377<(x378&x379))%x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x381 = 4U;
	int32_t x382 = -1;
	volatile uint16_t x384 = 22U;
	volatile int32_t t92 = -2279;

	t92 = ((x381<(x382&x383))%x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x386 = 111U;
	uint16_t x387 = 516U;
	int64_t x388 = -17304118712LL;
	static int64_t t93 = -11126LL;

	t93 = ((x385<(x386&x387))%x388);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = -143106776149071452LL;
	int64_t x390 = 269456941446100826LL;
	static uint64_t x391 = 66125222688LLU;
	uint8_t x392 = UINT8_MAX;

	t94 = ((x389<(x390&x391))%x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x393 = INT16_MIN;
	int16_t x394 = INT16_MAX;
	static int8_t x396 = INT8_MAX;

	t95 = ((x393<(x394&x395))%x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x397 = INT32_MIN;
	volatile uint16_t x398 = 13330U;
	volatile int16_t x399 = -1;
	int32_t t96 = -505023446;

	t96 = ((x397<(x398&x399))%x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x402 = UINT8_MAX;
	uint16_t x403 = 16037U;
	int32_t x404 = -247735897;
	volatile int32_t t97 = 3323;

	t97 = ((x401<(x402&x403))%x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	int32_t x408 = -75511523;
	volatile int32_t t98 = 15738;

	t98 = ((x405<(x406&x407))%x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = UINT64_MAX;
	volatile uint16_t x410 = UINT16_MAX;
	int8_t x411 = INT8_MIN;
	static uint64_t x412 = UINT64_MAX;
	uint64_t t99 = 288LLU;

	t99 = ((x409<(x410&x411))%x412);

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

