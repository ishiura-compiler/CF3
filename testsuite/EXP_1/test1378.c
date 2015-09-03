#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x1 = UINT32_MAX;
int16_t x7 = INT16_MAX;
int32_t x10 = 10;
int64_t x15 = -1LL;
volatile uint16_t x17 = UINT16_MAX;
int16_t x21 = -1;
uint16_t x22 = 0U;
static int16_t x27 = -1;
int8_t x47 = -19;
int32_t t11 = 542;
int16_t x54 = INT16_MIN;
int32_t x57 = -1;
volatile int16_t x65 = INT16_MIN;
int8_t x71 = INT8_MAX;
static uint32_t x75 = UINT32_MAX;
int16_t x76 = INT16_MIN;
static int16_t x87 = -1;
volatile uint64_t t20 = 72074744267266420LLU;
volatile int64_t x93 = -1LL;
int8_t x94 = INT8_MIN;
static volatile int64_t t21 = -18936329490929LL;
volatile int64_t x104 = INT64_MAX;
int64_t t22 = -214580018351903LL;
int16_t x108 = -1;
volatile int32_t t24 = -22009;
uint16_t x114 = 148U;
int32_t x115 = -444547;
volatile int64_t t25 = 81360241307LL;
static uint8_t x119 = 37U;
static volatile int32_t t26 = 7995886;
volatile uint8_t x121 = 10U;
int8_t x126 = INT8_MIN;
volatile int64_t t28 = 1167899882370LL;
static int16_t x139 = -802;
volatile int32_t t31 = -467583;
int16_t x147 = -4493;
int64_t t34 = 26631630973LL;
int8_t x157 = INT8_MIN;
static uint32_t x158 = 371U;
static uint8_t x160 = 26U;
volatile uint32_t t37 = 8110611U;
volatile uint32_t x166 = UINT32_MAX;
int16_t x169 = INT16_MIN;
int16_t x178 = -7922;
int16_t x179 = -150;
static volatile uint64_t t41 = 639945893971173LLU;
int16_t x185 = 29;
int16_t x190 = INT16_MIN;
int64_t x193 = INT64_MIN;
int64_t x199 = 67838LL;
int8_t x201 = -6;
int64_t x203 = -1LL;
uint64_t t48 = 287412LLU;
static int8_t x213 = -1;
volatile int32_t t50 = -271009;
uint32_t t51 = 0U;
int32_t t52 = 13104888;
static int8_t x231 = -1;
int32_t x233 = INT32_MIN;
static uint16_t x234 = 5U;
uint64_t x237 = 191173968LLU;
int8_t x238 = INT8_MIN;
int64_t x240 = -7364545907LL;
volatile int8_t x245 = INT8_MIN;
uint8_t x247 = 4U;
int32_t x248 = INT32_MAX;
volatile int16_t x249 = INT16_MIN;
int8_t x250 = INT8_MAX;
int64_t t57 = 81644625LL;
int8_t x254 = INT8_MIN;
int8_t x255 = INT8_MIN;
static uint16_t x256 = 47U;
volatile int16_t x258 = INT16_MIN;
int16_t x272 = -1770;
volatile uint32_t t63 = 1792444015U;
int16_t x278 = -229;
int8_t x279 = INT8_MIN;
volatile int16_t x285 = -507;
volatile int16_t x307 = INT16_MIN;
uint64_t x314 = UINT64_MAX;
int8_t x315 = 6;
static int32_t t70 = 966068017;
int8_t x320 = INT8_MIN;
uint64_t x323 = UINT64_MAX;
static int16_t x347 = -1;
volatile int32_t t76 = 729;
int16_t x351 = 259;
uint8_t x353 = 25U;
volatile int32_t x370 = INT32_MIN;
volatile int16_t x371 = -11;
static uint64_t x373 = 701494LLU;
uint8_t x377 = UINT8_MAX;
int16_t x385 = -1;
volatile uint64_t x386 = 13LLU;
int8_t x394 = -10;
volatile int32_t x395 = -1;
volatile int64_t x407 = -1LL;
volatile uint64_t x410 = 30615448LLU;
uint16_t x411 = UINT16_MAX;
uint32_t x413 = 755U;
int32_t x420 = INT32_MAX;
uint64_t t92 = 13781204207633736LLU;
uint16_t x425 = 782U;
static uint8_t x426 = 0U;
uint32_t x429 = UINT32_MAX;
static uint16_t x432 = UINT16_MAX;
volatile int32_t x433 = INT32_MIN;
volatile int8_t x434 = -3;
int8_t x436 = -1;
static volatile int64_t x441 = -1LL;
int8_t x443 = 0;
volatile uint64_t t98 = UINT64_MAX;


void f0(void) {
	volatile uint32_t x2 = 60443U;
	uint32_t x3 = 1846207780U;
	volatile int64_t x4 = INT64_MAX;
	volatile int64_t t0 = 44851062LL;

	t0 = (((x1<x2)-x3)^x4);

	if (t0 != 9223372034406016291LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 503LL;
	int16_t x6 = INT16_MIN;
	int16_t x8 = INT16_MAX;
	volatile int32_t t1 = 120;

	t1 = (((x5<x6)-x7)^x8);

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = INT16_MIN;
	int16_t x11 = -2;
	static int32_t x12 = -54402580;
	volatile int32_t t2 = -1542525;

	t2 = (((x9<x10)-x11)^x12);

	if (t2 != -54402577) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	volatile int64_t x14 = INT64_MAX;
	volatile uint32_t x16 = 11U;
	int64_t t3 = -51LL;

	t3 = (((x13<x14)-x15)^x16);

	if (t3 != 9LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = 111820117315457LL;
	int64_t x19 = -92722083890LL;
	volatile int8_t x20 = -1;
	volatile int64_t t4 = -4211547108140463LL;

	t4 = (((x17<x18)-x19)^x20);

	if (t4 != -92722083892LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = -1;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 66385858;

	t5 = (((x21<x22)-x23)^x24);

	if (t5 != -2147483646) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 27633U;
	int64_t x26 = INT64_MAX;
	int32_t x28 = 417243131;
	int32_t t6 = -28130;

	t6 = (((x25<x26)-x27)^x28);

	if (t6 != 417243129) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = UINT16_MAX;
	int8_t x30 = 3;
	uint16_t x31 = 8U;
	static int16_t x32 = INT16_MAX;
	static int32_t t7 = 103;

	t7 = (((x29<x30)-x31)^x32);

	if (t7 != -32761) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static int8_t x34 = INT8_MIN;
	int8_t x35 = -1;
	uint8_t x36 = UINT8_MAX;
	int32_t t8 = -185989;

	t8 = (((x33<x34)-x35)^x36);

	if (t8 != 253) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -7;
	static int8_t x38 = -1;
	volatile int64_t x39 = -3875025178LL;
	int8_t x40 = INT8_MAX;
	static int64_t t9 = 144LL;

	t9 = (((x37<x38)-x39)^x40);

	if (t9 != 3875025252LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -11;
	uint8_t x42 = 29U;
	volatile int8_t x43 = INT8_MIN;
	uint8_t x44 = 116U;
	volatile int32_t t10 = -8;

	t10 = (((x41<x42)-x43)^x44);

	if (t10 != 245) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -10;
	volatile int32_t x46 = 11;
	int8_t x48 = INT8_MIN;

	t11 = (((x45<x46)-x47)^x48);

	if (t11 != -108) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MIN;
	volatile int8_t x50 = 0;
	static uint32_t x51 = UINT32_MAX;
	uint32_t x52 = 1325219480U;
	volatile uint32_t t12 = 14581U;

	t12 = (((x49<x50)-x51)^x52);

	if (t12 != 1325219482U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t13 = -12181669;

	t13 = (((x53<x54)-x55)^x56);

	if (t13 != 254) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x58 = 33U;
	static uint16_t x59 = 2U;
	volatile int8_t x60 = 16;
	volatile int32_t t14 = -1;

	t14 = (((x57<x58)-x59)^x60);

	if (t14 != -17) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 7;
	volatile int64_t x62 = INT64_MAX;
	int8_t x63 = 1;
	volatile uint16_t x64 = 15U;
	volatile int32_t t15 = -1543;

	t15 = (((x61<x62)-x63)^x64);

	if (t15 != 15) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	int8_t x67 = 13;
	static int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 20310782;

	t16 = (((x65<x66)-x67)^x68);

	if (t16 != 2147483636) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;
	int64_t x70 = INT64_MIN;
	uint32_t x72 = UINT32_MAX;
	uint32_t t17 = 40858995U;

	t17 = (((x69<x70)-x71)^x72);

	if (t17 != 126U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = 37;
	uint16_t x74 = UINT16_MAX;
	volatile uint32_t t18 = 10239008U;

	t18 = (((x73<x74)-x75)^x76);

	if (t18 != 4294934530U) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 13625163709666682LLU;
	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = 23384696994939603LLU;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t19 = 1865532832LLU;

	t19 = (((x77<x78)-x79)^x80);

	if (t19 != 23384696994939602LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	int8_t x86 = INT8_MAX;
	uint64_t x88 = 33859507621LLU;

	t20 = (((x85<x86)-x87)^x88);

	if (t20 != 33859507620LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x95 = -1LL;
	int32_t x96 = -636;

	t21 = (((x93<x94)-x95)^x96);

	if (t21 != -635LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x101 = INT16_MIN;
	uint32_t x102 = 148U;
	volatile int8_t x103 = -1;

	t22 = (((x101<x102)-x103)^x104);

	if (t22 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = 27U;
	uint64_t x106 = 26930LLU;
	int64_t x107 = -1LL;
	static volatile int64_t t23 = -7666895139093831LL;

	t23 = (((x105<x106)-x107)^x108);

	if (t23 != -3LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x109 = UINT16_MAX;
	static int64_t x110 = INT64_MAX;
	uint16_t x111 = 15U;
	static volatile int16_t x112 = 15;

	t24 = (((x109<x110)-x111)^x112);

	if (t24 != -3) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = -1LL;
	int64_t x116 = INT64_MAX;

	t25 = (((x113<x114)-x115)^x116);

	if (t25 != 9223372036854331259LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -3722570925084LL;
	volatile int32_t x118 = INT32_MIN;
	uint16_t x120 = 49U;

	t26 = (((x117<x118)-x119)^x120);

	if (t26 != -19) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x122 = INT16_MIN;
	static volatile int64_t x123 = INT64_MAX;
	uint64_t x124 = 601356LLU;
	uint64_t t27 = 527LLU;

	t27 = (((x121<x122)-x123)^x124);

	if (t27 != 9223372036855377165LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MIN;
	int64_t x127 = 12759303505076054LL;
	static int32_t x128 = INT32_MIN;

	t28 = (((x125<x126)-x127)^x128);

	if (t28 != 12759302666166443LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x129 = UINT8_MAX;
	volatile int16_t x130 = -1;
	int32_t x131 = -81790;
	uint8_t x132 = 1U;
	static int32_t t29 = -85650;

	t29 = (((x129<x130)-x131)^x132);

	if (t29 != 81791) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x133 = -1LL;
	uint64_t x134 = 50444LLU;
	static uint32_t x135 = 237790054U;
	int8_t x136 = INT8_MIN;
	static volatile uint32_t t30 = 30U;

	t30 = (((x133<x134)-x135)^x136);

	if (t30 != 237789978U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x137 = UINT32_MAX;
	uint64_t x138 = 238108555047780LLU;
	uint8_t x140 = 0U;

	t31 = (((x137<x138)-x139)^x140);

	if (t31 != 803) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x141 = INT16_MAX;
	static int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	uint8_t x144 = 0U;
	static volatile uint64_t t32 = 105913927414462648LLU;

	t32 = (((x141<x142)-x143)^x144);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	volatile int16_t x148 = 228;
	static int32_t t33 = -1378;

	t33 = (((x145<x146)-x147)^x148);

	if (t33 != 4458) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	volatile int64_t x150 = -69585346408LL;
	int64_t x151 = -1LL;
	static int16_t x152 = INT16_MAX;

	t34 = (((x149<x150)-x151)^x152);

	if (t34 != 32766LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = -1LL;
	static int16_t x154 = INT16_MIN;
	int64_t x155 = 690084397398LL;
	int64_t x156 = -1LL;
	volatile int64_t t35 = 1LL;

	t35 = (((x153<x154)-x155)^x156);

	if (t35 != 690084397397LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x159 = -1;
	volatile int32_t t36 = -4345589;

	t36 = (((x157<x158)-x159)^x160);

	if (t36 != 27) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x161 = INT16_MIN;
	static uint8_t x162 = 13U;
	volatile int16_t x163 = -1;
	volatile uint32_t x164 = 9946U;

	t37 = (((x161<x162)-x163)^x164);

	if (t37 != 9944U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int8_t x167 = INT8_MIN;
	volatile int8_t x168 = 8;
	volatile int32_t t38 = -163822;

	t38 = (((x165<x166)-x167)^x168);

	if (t38 != 136) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x170 = INT16_MAX;
	volatile uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;
	uint64_t t39 = 67855763648LLU;

	t39 = (((x169<x170)-x171)^x172);

	if (t39 != 4294967293LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x173 = -617397623918066832LL;
	int8_t x174 = -52;
	volatile int16_t x175 = -1;
	int32_t x176 = INT32_MAX;
	static int32_t t40 = -47190;

	t40 = (((x173<x174)-x175)^x176);

	if (t40 != 2147483645) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x177 = INT64_MIN;
	static volatile uint64_t x180 = UINT64_MAX;

	t41 = (((x177<x178)-x179)^x180);

	if (t41 != 18446744073709551464LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x181 = INT16_MAX;
	int64_t x182 = -79049219315LL;
	int16_t x183 = 7;
	volatile int32_t x184 = INT32_MAX;
	int32_t t42 = 37930;

	t42 = (((x181<x182)-x183)^x184);

	if (t42 != -2147483642) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x186 = INT32_MIN;
	static int8_t x187 = INT8_MAX;
	uint8_t x188 = 3U;
	int32_t t43 = -15853921;

	t43 = (((x185<x186)-x187)^x188);

	if (t43 != -126) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 856U;
	static volatile int16_t x191 = INT16_MIN;
	volatile uint16_t x192 = UINT16_MAX;
	volatile int32_t t44 = 3075;

	t44 = (((x189<x190)-x191)^x192);

	if (t44 != 32766) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x194 = INT8_MIN;
	int8_t x195 = -1;
	uint16_t x196 = 84U;
	static int32_t t45 = -2972;

	t45 = (((x193<x194)-x195)^x196);

	if (t45 != 86) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MAX;
	uint32_t x198 = 428U;
	int64_t x200 = INT64_MAX;
	int64_t t46 = -113386271LL;

	t46 = (((x197<x198)-x199)^x200);

	if (t46 != -9223372036854707971LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = -30934913720LL;
	int8_t x204 = 3;
	int64_t t47 = 195103080089336LL;

	t47 = (((x201<x202)-x203)^x204);

	if (t47 != 2LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x209 = 3LL;
	int8_t x210 = INT8_MAX;
	uint64_t x211 = UINT64_MAX;
	static int32_t x212 = 5785;

	t48 = (((x209<x210)-x211)^x212);

	if (t48 != 5787LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x214 = -1;
	uint64_t x215 = 71450285488136681LLU;
	volatile int32_t x216 = -316;
	uint64_t t49 = 1519460436586330LLU;

	t49 = (((x213<x214)-x215)^x216);

	if (t49 != 71450285488136403LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 10477U;
	uint64_t x218 = 11761808085703LLU;
	int8_t x219 = INT8_MIN;
	int16_t x220 = -1;

	t50 = (((x217<x218)-x219)^x220);

	if (t50 != -130) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = 0U;
	int8_t x222 = 0;
	volatile uint32_t x223 = UINT32_MAX;
	int32_t x224 = INT32_MIN;

	t51 = (((x221<x222)-x223)^x224);

	if (t51 != 2147483649U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 184U;
	volatile int32_t x226 = INT32_MAX;
	static int32_t x227 = -506;
	int8_t x228 = INT8_MAX;

	t52 = (((x225<x226)-x227)^x228);

	if (t52 != 388) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x229 = INT64_MAX;
	static int8_t x230 = INT8_MAX;
	volatile int64_t x232 = INT64_MAX;
	volatile int64_t t53 = -1657072359LL;

	t53 = (((x229<x230)-x231)^x232);

	if (t53 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x235 = INT64_MAX;
	uint8_t x236 = 26U;
	int64_t t54 = -17701376223039229LL;

	t54 = (((x233<x234)-x235)^x236);

	if (t54 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x239 = 539660090LLU;
	volatile uint64_t t55 = 4278248435246LLU;

	t55 = (((x237<x238)-x239)^x240);

	if (t55 != 6826000970LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x246 = 10U;
	volatile int32_t t56 = 31787525;

	t56 = (((x245<x246)-x247)^x248);

	if (t56 != -2147483646) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x251 = 8505406382LL;
	int32_t x252 = INT32_MIN;

	t57 = (((x249<x250)-x251)^x252);

	if (t57 != 6526979155LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x253 = INT32_MIN;
	volatile int32_t t58 = -890214437;

	t58 = (((x253<x254)-x255)^x256);

	if (t58 != 174) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x257 = 1103376450432434LLU;
	static volatile int8_t x259 = INT8_MAX;
	static int64_t x260 = 359624LL;
	static int64_t t59 = -3092LL;

	t59 = (((x257<x258)-x259)^x260);

	if (t59 != -359606LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x261 = UINT32_MAX;
	static uint32_t x262 = 22005615U;
	static uint64_t x263 = 118056LLU;
	int8_t x264 = INT8_MIN;
	volatile uint64_t t60 = 21653LLU;

	t60 = (((x261<x262)-x263)^x264);

	if (t60 != 118104LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = 2;
	volatile int64_t x268 = -1LL;
	volatile int64_t t61 = 261LL;

	t61 = (((x265<x266)-x267)^x268);

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x269 = -766LL;
	uint64_t x270 = 204384243LLU;
	int16_t x271 = -1;
	int32_t t62 = 1376304;

	t62 = (((x269<x270)-x271)^x272);

	if (t62 != -1769) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = -1;
	int64_t x274 = 10937037995285563LL;
	volatile uint8_t x275 = 124U;
	volatile uint32_t x276 = 1008568U;

	t63 = (((x273<x274)-x275)^x276);

	if (t63 != 4293958717U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = 624U;
	int8_t x280 = -1;
	volatile int32_t t64 = -2493397;

	t64 = (((x277<x278)-x279)^x280);

	if (t64 != -130) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x286 = 99742U;
	uint16_t x287 = 13U;
	uint32_t x288 = 147064107U;
	volatile uint32_t t65 = 2087956U;

	t65 = (((x285<x286)-x287)^x288);

	if (t65 != 4147903192U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = -1;
	int32_t x290 = -27177837;
	volatile int32_t x291 = INT32_MAX;
	static int32_t x292 = 470;
	volatile int32_t t66 = -560;

	t66 = (((x289<x290)-x291)^x292);

	if (t66 != -2147483177) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x297 = 16973093874LL;
	int16_t x298 = -1;
	int64_t x299 = -1LL;
	int64_t x300 = 25859741LL;
	volatile int64_t t67 = -589108728LL;

	t67 = (((x297<x298)-x299)^x300);

	if (t67 != 25859740LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x301 = INT32_MAX;
	int64_t x302 = INT64_MIN;
	static uint64_t x303 = UINT64_MAX;
	int8_t x304 = INT8_MIN;
	volatile uint64_t t68 = 11174554321786LLU;

	t68 = (((x301<x302)-x303)^x304);

	if (t68 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MIN;
	volatile int32_t x306 = -1;
	uint64_t x308 = UINT64_MAX;
	uint64_t t69 = 1LLU;

	t69 = (((x305<x306)-x307)^x308);

	if (t69 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x313 = INT64_MIN;
	uint8_t x316 = 5U;

	t70 = (((x313<x314)-x315)^x316);

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MIN;
	uint8_t x318 = 2U;
	volatile int8_t x319 = INT8_MIN;
	int32_t t71 = -3908091;

	t71 = (((x317<x318)-x319)^x320);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x321 = -1LL;
	uint16_t x322 = UINT16_MAX;
	static int16_t x324 = INT16_MIN;
	volatile uint64_t t72 = 246926976LLU;

	t72 = (((x321<x322)-x323)^x324);

	if (t72 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x329 = 1625U;
	int64_t x330 = INT64_MAX;
	uint32_t x331 = 114320005U;
	int16_t x332 = INT16_MIN;
	uint32_t t73 = 27117U;

	t73 = (((x329<x330)-x331)^x332);

	if (t73 != 114302332U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x337 = 229;
	static uint32_t x338 = UINT32_MAX;
	int32_t x339 = -150951;
	uint32_t x340 = 373U;
	static uint32_t t74 = 187727U;

	t74 = (((x337<x338)-x339)^x340);

	if (t74 != 150749U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = INT16_MIN;
	int32_t x342 = -1;
	uint16_t x343 = UINT16_MAX;
	static uint32_t x344 = 57U;
	uint32_t t75 = 66542402U;

	t75 = (((x341<x342)-x343)^x344);

	if (t75 != 4294901819U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x345 = UINT64_MAX;
	uint32_t x346 = 15680567U;
	int16_t x348 = INT16_MIN;

	t76 = (((x345<x346)-x347)^x348);

	if (t76 != -32767) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x349 = INT16_MIN;
	uint16_t x350 = 2U;
	static int64_t x352 = INT64_MIN;
	int64_t t77 = 95254553750982LL;

	t77 = (((x349<x350)-x351)^x352);

	if (t77 != 9223372036854775550LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x354 = INT64_MAX;
	volatile uint32_t x355 = 16783U;
	static int16_t x356 = -1;
	volatile uint32_t t78 = 127894850U;

	t78 = (((x353<x354)-x355)^x356);

	if (t78 != 16781U) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = UINT64_MAX;
	int64_t x358 = -4402LL;
	static volatile uint64_t x359 = 119753158LLU;
	uint64_t x360 = 2737208601533LLU;
	uint64_t t79 = 1425990LLU;

	t79 = (((x357<x358)-x359)^x360);

	if (t79 != 18446741336582528391LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x365 = 63790651673LLU;
	static uint16_t x366 = 116U;
	uint64_t x367 = 112628943800788LLU;
	int8_t x368 = INT8_MAX;
	volatile uint64_t t80 = 640004280074223LLU;

	t80 = (((x365<x366)-x367)^x368);

	if (t80 != 18446631444765750867LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = INT64_MIN;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t81 = 11U;

	t81 = (((x369<x370)-x371)^x372);

	if (t81 != 4294967283U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x374 = UINT8_MAX;
	uint64_t x375 = 104939LLU;
	int16_t x376 = INT16_MIN;
	static uint64_t t82 = 28140404369591LLU;

	t82 = (((x373<x374)-x375)^x376);

	if (t82 != 124437LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x378 = -7970;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	static volatile int32_t t83 = -1;

	t83 = (((x377<x378)-x379)^x380);

	if (t83 != -129) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x387 = -26;
	int8_t x388 = -1;
	int32_t t84 = 30834113;

	t84 = (((x385<x386)-x387)^x388);

	if (t84 != -27) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x389 = 1;
	int32_t x390 = INT32_MAX;
	static uint8_t x391 = UINT8_MAX;
	static uint8_t x392 = 121U;
	int32_t t85 = -48;

	t85 = (((x389<x390)-x391)^x392);

	if (t85 != -133) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x393 = 34LL;
	int32_t x396 = INT32_MIN;
	int32_t t86 = 4104;

	t86 = (((x393<x394)-x395)^x396);

	if (t86 != -2147483647) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x397 = -1;
	int16_t x398 = INT16_MAX;
	int16_t x399 = INT16_MIN;
	uint32_t x400 = 3231314U;
	volatile uint32_t t87 = 1163U;

	t87 = (((x397<x398)-x399)^x400);

	if (t87 != 3264083U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = -1;
	volatile int16_t x402 = -1;
	uint8_t x403 = 0U;
	static uint16_t x404 = 27796U;
	volatile int32_t t88 = -2988;

	t88 = (((x401<x402)-x403)^x404);

	if (t88 != 27796) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x405 = -3;
	static volatile int64_t x406 = -131983LL;
	int16_t x408 = INT16_MIN;
	volatile int64_t t89 = -6004381752858573LL;

	t89 = (((x405<x406)-x407)^x408);

	if (t89 != -32767LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MIN;
	uint32_t x412 = UINT32_MAX;
	volatile uint32_t t90 = 4U;

	t90 = (((x409<x410)-x411)^x412);

	if (t90 != 65534U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x414 = -1LL;
	static volatile uint32_t x415 = 1150339U;
	static volatile int8_t x416 = 34;
	uint32_t t91 = 199312942U;

	t91 = (((x413<x414)-x415)^x416);

	if (t91 != 4293816927U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = INT64_MAX;
	int8_t x418 = -3;
	uint64_t x419 = 362LLU;

	t92 = (((x417<x418)-x419)^x420);

	if (t92 != 18446744071562068329LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x421 = UINT16_MAX;
	int64_t x422 = -1644243233763736LL;
	uint64_t x423 = 8948LLU;
	uint32_t x424 = UINT32_MAX;
	uint64_t t93 = 10734062222310891LLU;

	t93 = (((x421<x422)-x423)^x424);

	if (t93 != 18446744069414593267LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x427 = 1U;
	volatile int64_t x428 = -335LL;
	static int64_t t94 = 1191242787608822745LL;

	t94 = (((x425<x426)-x427)^x428);

	if (t94 != 334LL) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x430 = 200;
	volatile int32_t x431 = 58166;
	int32_t t95 = 186;

	t95 = (((x429<x430)-x431)^x432);

	if (t95 != -7371) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x435 = -1LL;
	volatile int64_t t96 = 12LL;

	t96 = (((x433<x434)-x435)^x436);

	if (t96 != -3LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x437 = 13U;
	int16_t x438 = 63;
	int8_t x439 = -1;
	uint16_t x440 = 7501U;
	static int32_t t97 = 1715523;

	t97 = (((x437<x438)-x439)^x440);

	if (t97 != 7503) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x442 = -1;
	uint64_t x444 = UINT64_MAX;

	t98 = (((x441<x442)-x443)^x444);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x445 = INT16_MAX;
	int8_t x446 = -1;
	static volatile int16_t x447 = 7287;
	uint64_t x448 = 10328575LLU;
	volatile uint64_t t99 = 35327LLU;

	t99 = (((x445<x446)-x447)^x448);

	if (t99 != 18446744073699228278LLU) { NG(); } else { ; }
	
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

