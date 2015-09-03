#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 6375U;
uint16_t x12 = 1U;
int64_t x13 = -1LL;
int16_t x15 = INT16_MIN;
static volatile int16_t x16 = INT16_MIN;
int32_t t3 = -130872;
int32_t x22 = INT32_MIN;
int64_t x25 = -26233LL;
volatile int8_t x28 = INT8_MAX;
int32_t t6 = 430;
int64_t x29 = INT64_MIN;
static uint16_t x32 = 0U;
int8_t x38 = INT8_MIN;
int64_t x39 = 15964079570040LL;
volatile int32_t t9 = 19085;
static volatile int32_t x42 = 169734;
int32_t x45 = INT32_MAX;
volatile int32_t t11 = 43325331;
static int64_t x52 = 137LL;
uint32_t x53 = 1374805790U;
uint64_t x54 = UINT64_MAX;
volatile int8_t x56 = -3;
volatile uint32_t x60 = 899397U;
int32_t x64 = INT32_MAX;
volatile int32_t t15 = -45608;
int32_t x67 = -1;
int16_t x70 = -1;
uint8_t x78 = 2U;
int32_t t18 = 141795;
static uint64_t x81 = UINT64_MAX;
int8_t x83 = 2;
volatile uint8_t x87 = 12U;
static volatile int32_t t20 = 15974;
int16_t x95 = INT16_MIN;
int16_t x104 = -385;
int32_t x105 = 625439;
int32_t x110 = -37565255;
int64_t x113 = INT64_MIN;
volatile uint32_t x117 = 1731584309U;
volatile uint32_t x123 = 496383U;
int64_t x126 = -1LL;
int16_t x129 = INT16_MIN;
int8_t x131 = -1;
static volatile uint8_t x132 = 3U;
int16_t x133 = -239;
int8_t x136 = INT8_MIN;
volatile int64_t x146 = INT64_MIN;
static uint64_t x151 = 2749778LLU;
volatile int32_t t36 = 6723;
static int8_t x155 = INT8_MIN;
int32_t t37 = 100534;
uint32_t x165 = 44138U;
int32_t x168 = -1;
uint16_t x171 = UINT16_MAX;
volatile int32_t t43 = -6701224;
uint64_t x183 = 2LLU;
volatile int64_t x185 = 50690LL;
volatile int8_t x200 = -1;
volatile int32_t t48 = -24854344;
uint16_t x210 = UINT16_MAX;
int16_t x215 = -44;
uint16_t x219 = 69U;
int32_t t53 = -585;
int8_t x226 = INT8_MIN;
volatile int32_t x227 = INT32_MIN;
int32_t x228 = 4078;
static int32_t t55 = -200157;
static volatile int32_t t56 = -12484839;
uint8_t x240 = 0U;
static int32_t t58 = -722876;
int8_t x241 = 15;
int64_t x242 = -21934976543LL;
volatile uint8_t x250 = UINT8_MAX;
uint32_t x251 = 7200U;
int8_t x265 = INT8_MAX;
volatile int16_t x267 = -1;
int32_t x268 = -506;
int8_t x274 = 1;
int64_t x276 = INT64_MAX;
volatile uint16_t x278 = 2001U;
volatile int16_t x280 = INT16_MIN;
volatile uint8_t x286 = 24U;
static volatile int16_t x287 = -1;
volatile uint16_t x289 = UINT16_MAX;
int16_t x292 = INT16_MIN;
volatile int32_t x293 = 21870596;
uint64_t x295 = 1519171133LLU;
static int32_t x296 = -1;
uint32_t x308 = 114695U;
static uint64_t x314 = UINT64_MAX;
int8_t x317 = INT8_MIN;
volatile int8_t x320 = INT8_MIN;
int32_t t78 = 1785184;
int64_t x327 = INT64_MAX;
uint16_t x332 = UINT16_MAX;
static int16_t x349 = INT16_MAX;
int16_t x359 = -1;
int32_t t88 = 4;
int32_t t89 = -61;
int16_t x391 = INT16_MAX;
volatile int8_t x396 = INT8_MIN;
int16_t x397 = INT16_MIN;
uint8_t x399 = UINT8_MAX;
static int32_t x402 = INT32_MIN;
uint16_t x408 = UINT16_MAX;
int32_t x409 = INT32_MIN;
int8_t x410 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = -1681144;

	t0 = ((x1%x2)<=(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	int64_t x6 = -16217468418068LL;
	int16_t x7 = INT16_MIN;
	static int8_t x8 = INT8_MIN;
	static int32_t t1 = 0;

	t1 = ((x5%x6)<=(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 2U;
	int8_t x10 = INT8_MAX;
	int8_t x11 = -38;
	static int32_t t2 = -230301;

	t2 = ((x9%x10)<=(x11^x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x14 = INT64_MIN;

	t3 = ((x13%x14)<=(x15^x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = -1555;
	int8_t x18 = 1;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = UINT16_MAX;
	static int32_t t4 = -24658;

	t4 = ((x17%x18)<=(x19^x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	volatile int8_t x23 = INT8_MIN;
	uint32_t x24 = 771884829U;
	int32_t t5 = -3478;

	t5 = ((x21%x22)<=(x23^x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x26 = -28;
	static int16_t x27 = INT16_MAX;

	t6 = ((x25%x26)<=(x27^x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = UINT32_MAX;
	uint64_t x31 = 12096LLU;
	static int32_t t7 = 10534471;

	t7 = ((x29%x30)<=(x31^x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -460;
	int32_t x34 = 50;
	int16_t x35 = -4;
	static int8_t x36 = INT8_MAX;
	static volatile int32_t t8 = -29;

	t8 = ((x33%x34)<=(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -1;
	uint64_t x40 = 10368601651687LLU;

	t9 = ((x37%x38)<=(x39^x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 15889U;
	int8_t x43 = INT8_MAX;
	volatile int8_t x44 = -1;
	int32_t t10 = 13803;

	t10 = ((x41%x42)<=(x43^x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x46 = 12;
	int32_t x47 = -507519064;
	static uint32_t x48 = UINT32_MAX;

	t11 = ((x45%x46)<=(x47^x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MAX;
	volatile int32_t t12 = 170903;

	t12 = ((x49%x50)<=(x51^x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x55 = -1;
	static volatile int32_t t13 = 23;

	t13 = ((x53%x54)<=(x55^x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = 9;
	int32_t x58 = -1;
	uint64_t x59 = UINT64_MAX;
	int32_t t14 = -14872400;

	t14 = ((x57%x58)<=(x59^x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int16_t x62 = INT16_MIN;
	int32_t x63 = INT32_MIN;

	t15 = ((x61%x62)<=(x63^x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 8552214U;
	int8_t x66 = INT8_MIN;
	int8_t x68 = INT8_MAX;
	static int32_t t16 = 348;

	t16 = ((x65%x66)<=(x67^x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x69 = INT8_MAX;
	static uint32_t x71 = 493U;
	int64_t x72 = -1LL;
	static int32_t t17 = -2;

	t17 = ((x69%x70)<=(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = 2620651103280267LL;
	uint8_t x79 = 1U;
	uint16_t x80 = 107U;

	t18 = ((x77%x78)<=(x79^x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x82 = 75986U;
	volatile int64_t x84 = INT64_MAX;
	volatile int32_t t19 = 2;

	t19 = ((x81%x82)<=(x83^x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x85 = INT16_MIN;
	int16_t x86 = INT16_MIN;
	int16_t x88 = -116;

	t20 = ((x85%x86)<=(x87^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x89 = 3996U;
	uint8_t x90 = UINT8_MAX;
	uint32_t x91 = UINT32_MAX;
	int8_t x92 = -59;
	int32_t t21 = 819;

	t21 = ((x89%x90)<=(x91^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 0U;
	int64_t x94 = -10604434727863841LL;
	int32_t x96 = INT32_MAX;
	int32_t t22 = 25;

	t22 = ((x93%x94)<=(x95^x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MIN;
	static int8_t x98 = -30;
	int64_t x99 = INT64_MAX;
	uint32_t x100 = 30U;
	static int32_t t23 = 283673417;

	t23 = ((x97%x98)<=(x99^x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -29716;
	int16_t x102 = INT16_MAX;
	volatile uint8_t x103 = UINT8_MAX;
	static int32_t t24 = -227696201;

	t24 = ((x101%x102)<=(x103^x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x106 = 4U;
	int16_t x107 = INT16_MAX;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t25 = 540926;

	t25 = ((x105%x106)<=(x107^x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x109 = -1LL;
	uint8_t x111 = 1U;
	int64_t x112 = 35429893865077436LL;
	static int32_t t26 = -1485;

	t26 = ((x109%x110)<=(x111^x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x114 = INT8_MIN;
	static int8_t x115 = 1;
	int8_t x116 = -1;
	int32_t t27 = -4;

	t27 = ((x113%x114)<=(x115^x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x118 = -1;
	uint16_t x119 = 2U;
	uint32_t x120 = UINT32_MAX;
	int32_t t28 = 132;

	t28 = ((x117%x118)<=(x119^x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x121 = -1LL;
	static uint32_t x122 = 28489232U;
	static int16_t x124 = INT16_MAX;
	int32_t t29 = 126065;

	t29 = ((x121%x122)<=(x123^x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 5281LLU;
	uint16_t x127 = 19U;
	uint64_t x128 = UINT64_MAX;
	int32_t t30 = -6447241;

	t30 = ((x125%x126)<=(x127^x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x130 = INT32_MAX;
	volatile int32_t t31 = 27;

	t31 = ((x129%x130)<=(x131^x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x134 = INT32_MIN;
	uint16_t x135 = 7U;
	volatile int32_t t32 = 406379282;

	t32 = ((x133%x134)<=(x135^x136));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint64_t x137 = 272429LLU;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 22U;
	volatile uint32_t x140 = 250U;
	int32_t t33 = -1547;

	t33 = ((x137%x138)<=(x139^x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MAX;
	volatile int64_t x142 = -1LL;
	uint64_t x143 = 34067767594505LLU;
	int16_t x144 = -1020;
	int32_t t34 = -145;

	t34 = ((x141%x142)<=(x143^x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x145 = -103798;
	int64_t x147 = -801933583784213LL;
	int8_t x148 = INT8_MIN;
	volatile int32_t t35 = 7;

	t35 = ((x145%x146)<=(x147^x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x149 = 1;
	static uint16_t x150 = UINT16_MAX;
	int64_t x152 = INT64_MAX;

	t36 = ((x149%x150)<=(x151^x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = -1;
	int32_t x156 = INT32_MIN;

	t37 = ((x153%x154)<=(x155^x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x157 = UINT64_MAX;
	int8_t x158 = -1;
	static int8_t x159 = INT8_MIN;
	volatile uint64_t x160 = 2015035881LLU;
	int32_t t38 = -1498885;

	t38 = ((x157%x158)<=(x159^x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = -28435434451092LL;
	int16_t x163 = INT16_MIN;
	uint16_t x164 = 0U;
	int32_t t39 = 26995336;

	t39 = ((x161%x162)<=(x163^x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x166 = UINT16_MAX;
	static int64_t x167 = INT64_MIN;
	int32_t t40 = 993548;

	t40 = ((x165%x166)<=(x167^x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x169 = INT16_MIN;
	uint8_t x170 = 3U;
	int64_t x172 = -23820709350266894LL;
	volatile int32_t t41 = -6;

	t41 = ((x169%x170)<=(x171^x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = UINT64_MAX;
	volatile int64_t x174 = -1LL;
	int64_t x175 = INT64_MAX;
	int64_t x176 = INT64_MIN;
	volatile int32_t t42 = -1;

	t42 = ((x173%x174)<=(x175^x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 2U;
	static int32_t x178 = INT32_MIN;
	static int16_t x179 = INT16_MAX;
	volatile int16_t x180 = INT16_MAX;

	t43 = ((x177%x178)<=(x179^x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MAX;
	uint16_t x182 = 3U;
	volatile int32_t x184 = INT32_MAX;
	int32_t t44 = -1;

	t44 = ((x181%x182)<=(x183^x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	int8_t x188 = 61;
	volatile int32_t t45 = 65305;

	t45 = ((x185%x186)<=(x187^x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x189 = INT16_MAX;
	uint64_t x190 = 433820734548178LLU;
	int8_t x191 = -1;
	volatile int16_t x192 = 29;
	int32_t t46 = 599839;

	t46 = ((x189%x190)<=(x191^x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x193 = INT8_MIN;
	volatile int32_t x194 = -1;
	int8_t x195 = INT8_MAX;
	int64_t x196 = -1LL;
	int32_t t47 = 7800;

	t47 = ((x193%x194)<=(x195^x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MAX;
	static int32_t x199 = INT32_MIN;

	t48 = ((x197%x198)<=(x199^x200));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 11;
	uint64_t x202 = UINT64_MAX;
	static int32_t x203 = INT32_MIN;
	int16_t x204 = -4;
	volatile int32_t t49 = 2;

	t49 = ((x201%x202)<=(x203^x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x205 = INT8_MIN;
	static int32_t x206 = INT32_MIN;
	int32_t x207 = -1;
	static volatile uint16_t x208 = 6092U;
	volatile int32_t t50 = 3260;

	t50 = ((x205%x206)<=(x207^x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x209 = INT64_MIN;
	uint16_t x211 = 8836U;
	uint32_t x212 = UINT32_MAX;
	int32_t t51 = 242954243;

	t51 = ((x209%x210)<=(x211^x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x213 = UINT8_MAX;
	uint64_t x214 = UINT64_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t52 = -1019358;

	t52 = ((x213%x214)<=(x215^x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	volatile int8_t x220 = INT8_MAX;

	t53 = ((x217%x218)<=(x219^x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x221 = INT64_MAX;
	volatile int8_t x222 = 27;
	int64_t x223 = INT64_MIN;
	volatile int8_t x224 = INT8_MIN;
	int32_t t54 = 93433;

	t54 = ((x221%x222)<=(x223^x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = UINT16_MAX;

	t55 = ((x225%x226)<=(x227^x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x229 = UINT8_MAX;
	uint8_t x230 = UINT8_MAX;
	volatile int32_t x231 = 58989068;
	int64_t x232 = -25104LL;

	t56 = ((x229%x230)<=(x231^x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x233 = -1LL;
	uint64_t x234 = 1LLU;
	uint32_t x235 = 7U;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t57 = 3;

	t57 = ((x233%x234)<=(x235^x236));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x237 = 25248279265LLU;
	int16_t x238 = 3337;
	volatile int64_t x239 = INT64_MAX;

	t58 = ((x237%x238)<=(x239^x240));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x243 = 25923232615LL;
	int16_t x244 = -1;
	int32_t t59 = -2724961;

	t59 = ((x241%x242)<=(x243^x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x245 = UINT64_MAX;
	uint32_t x246 = 197U;
	int16_t x247 = 56;
	uint32_t x248 = UINT32_MAX;
	int32_t t60 = -5;

	t60 = ((x245%x246)<=(x247^x248));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = INT8_MIN;
	int32_t x252 = -1;
	int32_t t61 = 0;

	t61 = ((x249%x250)<=(x251^x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = INT32_MIN;
	static int64_t x254 = INT64_MAX;
	static uint8_t x255 = 14U;
	int16_t x256 = -1;
	static int32_t t62 = -668714403;

	t62 = ((x253%x254)<=(x255^x256));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x257 = 7;
	int8_t x258 = -7;
	uint16_t x259 = UINT16_MAX;
	static int64_t x260 = -1LL;
	volatile int32_t t63 = 53;

	t63 = ((x257%x258)<=(x259^x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = 24120LLU;
	int8_t x262 = -1;
	int64_t x263 = INT64_MIN;
	uint16_t x264 = 7768U;
	volatile int32_t t64 = 8162;

	t64 = ((x261%x262)<=(x263^x264));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x266 = 3;
	int32_t t65 = -7;

	t65 = ((x265%x266)<=(x267^x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x269 = 22636LL;
	int8_t x270 = -7;
	int16_t x271 = INT16_MIN;
	uint16_t x272 = UINT16_MAX;
	int32_t t66 = -35815;

	t66 = ((x269%x270)<=(x271^x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x273 = INT64_MIN;
	int8_t x275 = 1;
	static volatile int32_t t67 = -160565;

	t67 = ((x273%x274)<=(x275^x276));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = -63;
	uint16_t x279 = UINT16_MAX;
	volatile int32_t t68 = 0;

	t68 = ((x277%x278)<=(x279^x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static int8_t x282 = INT8_MIN;
	volatile uint64_t x283 = 52676LLU;
	int8_t x284 = INT8_MIN;
	volatile int32_t t69 = -2;

	t69 = ((x281%x282)<=(x283^x284));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x285 = 1U;
	uint32_t x288 = 1772904U;
	int32_t t70 = 121486;

	t70 = ((x285%x286)<=(x287^x288));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x290 = UINT16_MAX;
	int64_t x291 = INT64_MIN;
	volatile int32_t t71 = -1;

	t71 = ((x289%x290)<=(x291^x292));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x294 = INT64_MIN;
	int32_t t72 = -47670;

	t72 = ((x293%x294)<=(x295^x296));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x297 = -14798545658782119LL;
	uint32_t x298 = 534922287U;
	int32_t x299 = INT32_MAX;
	uint64_t x300 = 0LLU;
	int32_t t73 = 108985;

	t73 = ((x297%x298)<=(x299^x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = 0;
	static uint32_t x302 = UINT32_MAX;
	uint8_t x303 = 1U;
	uint32_t x304 = 66U;
	int32_t t74 = -79873837;

	t74 = ((x301%x302)<=(x303^x304));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	int32_t x307 = INT32_MAX;
	volatile int32_t t75 = 32164;

	t75 = ((x305%x306)<=(x307^x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x309 = 14;
	uint64_t x310 = 295121980LLU;
	int16_t x311 = INT16_MIN;
	int32_t x312 = -584989612;
	int32_t t76 = 554;

	t76 = ((x309%x310)<=(x311^x312));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x313 = INT64_MIN;
	int32_t x315 = INT32_MAX;
	uint16_t x316 = 45U;
	volatile int32_t t77 = -132962896;

	t77 = ((x313%x314)<=(x315^x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x318 = 55U;
	static uint32_t x319 = 24664U;

	t78 = ((x317%x318)<=(x319^x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = 3906626LLU;
	uint64_t x328 = 17LLU;
	static int32_t t79 = 53;

	t79 = ((x325%x326)<=(x327^x328));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x329 = 1135295771936343962LL;
	int32_t x330 = INT32_MIN;
	static int32_t x331 = INT32_MIN;
	static volatile int32_t t80 = -1;

	t80 = ((x329%x330)<=(x331^x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x333 = 13313;
	int8_t x334 = INT8_MIN;
	static volatile uint16_t x335 = 540U;
	volatile int32_t x336 = INT32_MAX;
	volatile int32_t t81 = 41173;

	t81 = ((x333%x334)<=(x335^x336));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = 4;
	int16_t x338 = 12;
	int8_t x339 = -1;
	volatile int8_t x340 = INT8_MAX;
	static volatile int32_t t82 = -15;

	t82 = ((x337%x338)<=(x339^x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = -1LL;
	int64_t x342 = 472400212719065386LL;
	volatile int32_t x343 = INT32_MIN;
	uint64_t x344 = 108563735706073LLU;
	volatile int32_t t83 = 15;

	t83 = ((x341%x342)<=(x343^x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = INT16_MAX;
	int64_t x346 = INT64_MAX;
	static volatile uint64_t x347 = 10778280537418LLU;
	int16_t x348 = INT16_MIN;
	volatile int32_t t84 = -2399;

	t84 = ((x345%x346)<=(x347^x348));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x350 = INT8_MAX;
	int64_t x351 = 817LL;
	volatile int32_t x352 = -9189289;
	int32_t t85 = 2;

	t85 = ((x349%x350)<=(x351^x352));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = -18;
	uint16_t x354 = 27444U;
	static uint32_t x355 = UINT32_MAX;
	uint32_t x356 = 1U;
	int32_t t86 = -347;

	t86 = ((x353%x354)<=(x355^x356));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x357 = -119;
	int8_t x358 = INT8_MIN;
	int32_t x360 = -4920;
	volatile int32_t t87 = 168121;

	t87 = ((x357%x358)<=(x359^x360));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x361 = 5U;
	static uint8_t x362 = 89U;
	uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MAX;

	t88 = ((x361%x362)<=(x363^x364));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x365 = 255303;
	int8_t x366 = INT8_MIN;
	int64_t x367 = INT64_MIN;
	int8_t x368 = INT8_MAX;

	t89 = ((x365%x366)<=(x367^x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = 0;
	uint64_t x370 = 12LLU;
	uint64_t x371 = 30713LLU;
	uint16_t x372 = 3625U;
	volatile int32_t t90 = 6;

	t90 = ((x369%x370)<=(x371^x372));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x377 = INT8_MIN;
	static uint16_t x378 = 3U;
	int8_t x379 = 1;
	uint16_t x380 = 191U;
	volatile int32_t t91 = -103610;

	t91 = ((x377%x378)<=(x379^x380));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x381 = UINT32_MAX;
	int32_t x382 = INT32_MIN;
	static uint16_t x383 = 1U;
	int16_t x384 = INT16_MIN;
	int32_t t92 = 69363665;

	t92 = ((x381%x382)<=(x383^x384));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x385 = INT32_MIN;
	int8_t x386 = -1;
	int32_t x387 = -1;
	volatile int8_t x388 = INT8_MIN;
	int32_t t93 = -420653;

	t93 = ((x385%x386)<=(x387^x388));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 1977U;
	int32_t x390 = -417540;
	volatile int32_t x392 = INT32_MAX;
	volatile int32_t t94 = -5610501;

	t94 = ((x389%x390)<=(x391^x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x393 = INT16_MIN;
	int8_t x394 = INT8_MAX;
	static int16_t x395 = INT16_MIN;
	volatile int32_t t95 = 101983;

	t95 = ((x393%x394)<=(x395^x396));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x398 = -1;
	int16_t x400 = INT16_MAX;
	static int32_t t96 = -1;

	t96 = ((x397%x398)<=(x399^x400));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x401 = INT32_MIN;
	static int16_t x403 = INT16_MIN;
	int16_t x404 = 7;
	int32_t t97 = 0;

	t97 = ((x401%x402)<=(x403^x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x405 = INT16_MIN;
	uint16_t x406 = 695U;
	static int32_t x407 = 55095961;
	static int32_t t98 = 5925;

	t98 = ((x405%x406)<=(x407^x408));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x411 = 100U;
	int16_t x412 = 6;
	int32_t t99 = 105665;

	t99 = ((x409%x410)<=(x411^x412));

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

