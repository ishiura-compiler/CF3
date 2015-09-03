#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x11 = INT64_MAX;
int64_t x15 = -6192903360835LL;
int64_t x17 = INT64_MAX;
uint16_t x27 = UINT16_MAX;
static volatile uint8_t x33 = 1U;
int8_t x43 = INT8_MAX;
volatile int32_t t9 = -71286152;
static int8_t x52 = -1;
static uint16_t x63 = 1854U;
volatile uint32_t t14 = 1343U;
int32_t x69 = 39994;
int32_t x74 = INT32_MIN;
static int64_t x76 = 0LL;
volatile int64_t t17 = -1570753LL;
static uint8_t x79 = 1U;
uint8_t x86 = UINT8_MAX;
uint8_t x89 = UINT8_MAX;
static uint64_t x95 = UINT64_MAX;
volatile int64_t x96 = -1673097325977LL;
uint8_t x97 = 1U;
volatile int64_t t25 = 0LL;
static uint8_t x111 = 3U;
static uint64_t t26 = 25071914333946209LLU;
uint8_t x114 = 38U;
uint8_t x117 = 1U;
int8_t x121 = -1;
uint16_t x123 = 1937U;
static int8_t x125 = -1;
uint32_t x126 = 290431U;
uint16_t x134 = 3U;
uint16_t x135 = 59U;
int32_t x140 = INT32_MIN;
static int32_t x144 = 202393277;
int64_t x147 = 86636LL;
int64_t x148 = INT64_MIN;
volatile int32_t x150 = -1;
int32_t x155 = INT32_MAX;
static volatile uint32_t x158 = 443U;
int32_t x159 = INT32_MIN;
int32_t x160 = -1;
static int64_t t41 = 513878861LL;
int8_t x173 = INT8_MAX;
int64_t x180 = -1LL;
uint16_t x184 = UINT16_MAX;
int8_t x187 = INT8_MIN;
int32_t x193 = -1;
int32_t x195 = -1;
uint8_t x209 = UINT8_MAX;
uint64_t t52 = 66084029LLU;
static int32_t x221 = INT32_MAX;
int8_t x223 = INT8_MIN;
static volatile uint64_t t53 = 20620747LLU;
int64_t t55 = -1380534LL;
int16_t x234 = INT16_MAX;
int64_t x240 = -140LL;
static int64_t t57 = -66831698694329674LL;
volatile int16_t x241 = INT16_MAX;
volatile int64_t x242 = 16852059040181LL;
volatile uint16_t x243 = 2802U;
volatile int64_t x244 = INT64_MAX;
volatile int64_t t58 = INT64_MAX;
volatile int32_t x249 = INT32_MIN;
volatile int32_t t64 = -901;
volatile int8_t x273 = INT8_MIN;
int8_t x277 = -1;
static volatile uint64_t x279 = UINT64_MAX;
int32_t x281 = INT32_MIN;
int64_t x284 = -1LL;
static volatile int64_t t67 = 537291894858LL;
static int32_t x285 = 5523741;
int32_t t69 = 4993;
volatile uint64_t x308 = UINT64_MAX;
volatile int32_t x316 = -116796;
static volatile int64_t t75 = 35820183747459646LL;
int16_t x322 = INT16_MIN;
uint16_t x324 = UINT16_MAX;
int8_t x326 = -1;
uint64_t x327 = UINT64_MAX;
volatile uint64_t t78 = 145097LLU;
int64_t x329 = -1LL;
volatile uint64_t t79 = 26588515LLU;
volatile int32_t x346 = 1837;
volatile uint32_t t83 = 10733032U;
uint64_t t84 = 4350157580671920265LLU;
volatile int8_t x363 = -1;
static uint32_t x366 = 14U;
volatile int64_t t88 = 7LL;
uint32_t x372 = 32692U;
int64_t x380 = INT64_MIN;
static uint64_t t92 = 44058443LLU;
volatile uint32_t x385 = 48U;
static int64_t x386 = INT64_MAX;
int8_t x390 = -13;
volatile int16_t x404 = -7762;
int16_t x405 = -1;
int64_t x409 = -2351231813LL;
static int32_t x411 = -1;
int64_t x413 = INT64_MIN;
int16_t x415 = -2681;
uint64_t t99 = 21833498711359LLU;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x2 = 3697U;
	uint8_t x3 = 1U;
	uint8_t x4 = 0U;
	static uint64_t t0 = 28269079LLU;

	t0 = (((x1%x2)/x3)|x4);

	if (t0 != 43LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 3842;
	volatile int16_t x6 = 15631;
	static volatile uint32_t x7 = UINT32_MAX;
	uint16_t x8 = UINT16_MAX;
	volatile uint32_t t1 = 190U;

	t1 = (((x5%x6)/x7)|x8);

	if (t1 != 65535U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -39;
	int8_t x10 = INT8_MIN;
	uint8_t x12 = UINT8_MAX;
	static int64_t t2 = -1174033212421LL;

	t2 = (((x9%x10)/x11)|x12);

	if (t2 != 255LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint8_t x14 = 15U;
	uint8_t x16 = 29U;
	static int64_t t3 = 3LL;

	t3 = (((x13%x14)/x15)|x16);

	if (t3 != 29LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = -1;
	int8_t x19 = 17;
	int16_t x20 = INT16_MIN;
	int64_t t4 = -208113459553442LL;

	t4 = (((x17%x18)/x19)|x20);

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 4186265;
	uint16_t x22 = 58U;
	volatile int8_t x23 = -1;
	static int16_t x24 = -1;
	volatile int32_t t5 = -2498;

	t5 = (((x21%x22)/x23)|x24);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 12U;
	static uint64_t x26 = 25222209230LLU;
	uint8_t x28 = 5U;
	uint64_t t6 = 209933601746LLU;

	t6 = (((x25%x26)/x27)|x28);

	if (t6 != 5LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x34 = -2750;
	volatile uint16_t x35 = 8U;
	int64_t x36 = INT64_MAX;
	volatile int64_t t7 = INT64_MAX;

	t7 = (((x33%x34)/x35)|x36);

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MIN;
	int16_t x38 = INT16_MAX;
	uint64_t x39 = 480963804388765LLU;
	volatile int32_t x40 = INT32_MIN;
	static volatile uint64_t t8 = 324249163LLU;

	t8 = (((x37%x38)/x39)|x40);

	if (t8 != 18446744071562106321LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int16_t x42 = INT16_MIN;
	int8_t x44 = -1;

	t9 = (((x41%x42)/x43)|x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -48;
	volatile uint8_t x46 = 76U;
	volatile int32_t x47 = INT32_MIN;
	uint16_t x48 = 12U;
	int32_t t10 = -9242;

	t10 = (((x45%x46)/x47)|x48);

	if (t10 != 12) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x49 = INT32_MIN;
	uint8_t x50 = UINT8_MAX;
	volatile uint16_t x51 = 79U;
	volatile int32_t t11 = 2985;

	t11 = (((x49%x50)/x51)|x52);

	if (t11 != -1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = INT64_MIN;
	volatile uint8_t x54 = 41U;
	int64_t x55 = INT64_MIN;
	int16_t x56 = INT16_MIN;
	int64_t t12 = -1984914LL;

	t12 = (((x53%x54)/x55)|x56);

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	uint64_t x58 = UINT64_MAX;
	uint16_t x59 = 551U;
	uint16_t x60 = UINT16_MAX;
	uint64_t t13 = 30194552449229750LLU;

	t13 = (((x57%x58)/x59)|x60);

	if (t13 != 16739332190306303LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint32_t x61 = 196131U;
	static int16_t x62 = INT16_MAX;
	uint32_t x64 = 98329958U;

	t14 = (((x61%x62)/x63)|x64);

	if (t14 != 98329975U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	volatile int32_t x66 = INT32_MIN;
	int16_t x67 = -1;
	int8_t x68 = -2;
	static int32_t t15 = -199048;

	t15 = (((x65%x66)/x67)|x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	int8_t x71 = -62;
	int8_t x72 = INT8_MAX;
	volatile int64_t t16 = 1053LL;

	t16 = (((x69%x70)/x71)|x72);

	if (t16 != -641LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 1U;
	int8_t x75 = -30;

	t17 = (((x73%x74)/x75)|x76);

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -410361831913424243LL;
	int64_t x78 = 76LL;
	volatile uint32_t x80 = 0U;
	static int64_t t18 = -7103510666LL;

	t18 = (((x77%x78)/x79)|x80);

	if (t18 != -39LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = INT8_MIN;
	static uint64_t x82 = UINT64_MAX;
	static int64_t x83 = INT64_MIN;
	static uint16_t x84 = 0U;
	uint64_t t19 = 794LLU;

	t19 = (((x81%x82)/x83)|x84);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x85 = -1;
	static volatile uint32_t x87 = 3U;
	int64_t x88 = INT64_MIN;
	int64_t t20 = -387898518073577LL;

	t20 = (((x85%x86)/x87)|x88);

	if (t20 != -9223372035423120043LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = UINT16_MAX;
	int16_t x91 = 1;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t21 = 6103;

	t21 = (((x89%x90)/x91)|x92);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 600U;
	uint64_t x94 = 22423LLU;
	volatile uint64_t t22 = 1811271935842984582LLU;

	t22 = (((x93%x94)/x95)|x96);

	if (t22 != 18446742400612225639LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x98 = UINT64_MAX;
	static int32_t x99 = 6977;
	static uint32_t x100 = 104U;
	uint64_t t23 = 21764009481LLU;

	t23 = (((x97%x98)/x99)|x100);

	if (t23 != 104LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	int64_t x102 = -956573030LL;
	int64_t x103 = INT64_MAX;
	int32_t x104 = INT32_MIN;
	int64_t t24 = 1897LL;

	t24 = (((x101%x102)/x103)|x104);

	if (t24 != -2147483648LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x105 = INT32_MIN;
	uint8_t x106 = 39U;
	int64_t x107 = -770LL;
	volatile uint16_t x108 = 115U;

	t25 = (((x105%x106)/x107)|x108);

	if (t25 != 115LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x109 = 45039650U;
	uint64_t x110 = 3359438019467626360LLU;
	static int32_t x112 = INT32_MIN;

	t26 = (((x109%x110)/x111)|x112);

	if (t26 != 18446744071577081184LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -490487750;
	int8_t x115 = -1;
	int32_t x116 = -1;
	volatile int32_t t27 = 7328;

	t27 = (((x113%x114)/x115)|x116);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x118 = UINT64_MAX;
	uint16_t x119 = 339U;
	uint8_t x120 = UINT8_MAX;
	uint64_t t28 = 31232989567LLU;

	t28 = (((x117%x118)/x119)|x120);

	if (t28 != 255LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x122 = INT8_MAX;
	int64_t x124 = -2LL;
	volatile int64_t t29 = 132LL;

	t29 = (((x121%x122)/x123)|x124);

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x127 = INT16_MIN;
	uint16_t x128 = 1U;
	volatile uint32_t t30 = 373706883U;

	t30 = (((x125%x126)/x127)|x128);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -68961LL;
	static int64_t x130 = INT64_MAX;
	static volatile int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MAX;
	int64_t t31 = 929LL;

	t31 = (((x129%x130)/x131)|x132);

	if (t31 != 2147483647LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = 544470211581008177LL;
	static int64_t x136 = 77554545037772000LL;
	int64_t t32 = -377977954032408LL;

	t32 = (((x133%x134)/x135)|x136);

	if (t32 != 77554545037772000LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	int64_t x138 = INT64_MIN;
	static uint32_t x139 = 3U;
	volatile int64_t t33 = -350481LL;

	t33 = (((x137%x138)/x139)|x140);

	if (t33 != -2147483563LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	int8_t x142 = -1;
	volatile int8_t x143 = -1;
	volatile int64_t t34 = 2561LL;

	t34 = (((x141%x142)/x143)|x144);

	if (t34 != 202393277LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = 84339344800LL;
	uint64_t x146 = 127690005174LLU;
	uint64_t t35 = 1LLU;

	t35 = (((x145%x146)/x147)|x148);

	if (t35 != 9223372036855749298LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x149 = 25U;
	volatile int8_t x151 = INT8_MIN;
	uint16_t x152 = UINT16_MAX;
	int32_t t36 = -1825020;

	t36 = (((x149%x150)/x151)|x152);

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	int64_t x154 = -74LL;
	uint64_t x156 = UINT64_MAX;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = (((x153%x154)/x155)|x156);

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = 0U;
	uint32_t t38 = UINT32_MAX;

	t38 = (((x157%x158)/x159)|x160);

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x161 = 128U;
	volatile int32_t x162 = 3149585;
	int32_t x163 = INT32_MIN;
	uint64_t x164 = UINT64_MAX;
	uint64_t t39 = UINT64_MAX;

	t39 = (((x161%x162)/x163)|x164);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x165 = 8U;
	volatile int16_t x166 = INT16_MAX;
	static int32_t x167 = -1;
	int32_t x168 = INT32_MIN;
	volatile int32_t t40 = -2502563;

	t40 = (((x165%x166)/x167)|x168);

	if (t40 != -8) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	static int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MIN;
	int64_t x172 = -1LL;

	t41 = (((x169%x170)/x171)|x172);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x174 = INT64_MIN;
	uint64_t x175 = 3129750LLU;
	int8_t x176 = INT8_MAX;
	volatile uint64_t t42 = 3993746115269230295LLU;

	t42 = (((x173%x174)/x175)|x176);

	if (t42 != 127LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = 3067922360241785LLU;
	static volatile uint64_t x178 = 19309484142428LLU;
	int16_t x179 = -3;
	volatile uint64_t t43 = UINT64_MAX;

	t43 = (((x177%x178)/x179)|x180);

	if (t43 != UINT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = -72;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = UINT32_MAX;
	volatile uint32_t t44 = 49U;

	t44 = (((x181%x182)/x183)|x184);

	if (t44 != 65535U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = 0;
	static int64_t x186 = -1LL;
	uint64_t x188 = 97562111852164715LLU;
	volatile uint64_t t45 = 363LLU;

	t45 = (((x185%x186)/x187)|x188);

	if (t45 != 97562111852164715LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = UINT32_MAX;
	int64_t x190 = -1LL;
	int16_t x191 = -18;
	uint64_t x192 = UINT64_MAX;
	uint64_t t46 = UINT64_MAX;

	t46 = (((x189%x190)/x191)|x192);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x194 = -1;
	uint16_t x196 = 0U;
	volatile int32_t t47 = -6589;

	t47 = (((x193%x194)/x195)|x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x197 = -1;
	int32_t x198 = 1073036644;
	static uint64_t x199 = UINT64_MAX;
	uint8_t x200 = UINT8_MAX;
	uint64_t t48 = 3869LLU;

	t48 = (((x197%x198)/x199)|x200);

	if (t48 != 255LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x201 = 15;
	int8_t x202 = -1;
	static uint16_t x203 = 6U;
	int64_t x204 = 3637LL;
	volatile int64_t t49 = -168LL;

	t49 = (((x201%x202)/x203)|x204);

	if (t49 != 3637LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 1LLU;
	int32_t x206 = INT32_MIN;
	static int64_t x207 = -1LL;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t50 = 7349213989313046LLU;

	t50 = (((x205%x206)/x207)|x208);

	if (t50 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x210 = INT16_MIN;
	int8_t x211 = INT8_MAX;
	int32_t x212 = 358;
	int32_t t51 = 2456125;

	t51 = (((x209%x210)/x211)|x212);

	if (t51 != 358) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = INT8_MAX;
	volatile uint64_t x214 = 11147775150LLU;
	int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MIN;

	t52 = (((x213%x214)/x215)|x216);

	if (t52 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x222 = 1463157LLU;
	static uint32_t x224 = 239U;

	t53 = (((x221%x222)/x223)|x224);

	if (t53 != 239LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MAX;
	int32_t x226 = INT32_MIN;
	volatile int32_t x227 = -1025829;
	int8_t x228 = INT8_MIN;
	static volatile int32_t t54 = 8;

	t54 = (((x225%x226)/x227)|x228);

	if (t54 != -45) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MAX;
	static int16_t x230 = -1;
	volatile int64_t x231 = -6695LL;
	int16_t x232 = INT16_MIN;

	t55 = (((x229%x230)/x231)|x232);

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x233 = 1405755U;
	static int64_t x235 = INT64_MIN;
	static int8_t x236 = 29;
	int64_t t56 = 37111130468LL;

	t56 = (((x233%x234)/x235)|x236);

	if (t56 != 29LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	int32_t x238 = 3;
	int64_t x239 = -1LL;

	t57 = (((x237%x238)/x239)|x240);

	if (t57 != -139LL) { NG(); } else { ; }
	
}

void f58(void) {


	t58 = (((x241%x242)/x243)|x244);

	if (t58 != INT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x245 = 1;
	static uint64_t x246 = 1495647268153254138LLU;
	uint8_t x247 = 20U;
	int16_t x248 = -1;
	static uint64_t t59 = UINT64_MAX;

	t59 = (((x245%x246)/x247)|x248);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = -25;
	int64_t x251 = INT64_MIN;
	volatile int32_t x252 = INT32_MIN;
	int64_t t60 = 1LL;

	t60 = (((x249%x250)/x251)|x252);

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -3051;
	int64_t x254 = -10595346743427LL;
	int64_t x255 = -3889287520LL;
	volatile int8_t x256 = INT8_MAX;
	volatile int64_t t61 = 48191425336848LL;

	t61 = (((x253%x254)/x255)|x256);

	if (t61 != 127LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = UINT32_MAX;
	int8_t x258 = -11;
	uint8_t x259 = 28U;
	int32_t x260 = -51;
	volatile uint32_t t62 = 1129U;

	t62 = (((x257%x258)/x259)|x260);

	if (t62 != 4294967245U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x261 = INT32_MIN;
	uint8_t x262 = 1U;
	int8_t x263 = -1;
	uint8_t x264 = UINT8_MAX;
	int32_t t63 = 104241;

	t63 = (((x261%x262)/x263)|x264);

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x265 = INT32_MIN;
	uint16_t x266 = 729U;
	int16_t x267 = 18;
	uint8_t x268 = 77U;

	t64 = (((x265%x266)/x267)|x268);

	if (t64 != -17) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x274 = 172LLU;
	int8_t x275 = INT8_MIN;
	int8_t x276 = INT8_MIN;
	uint64_t t65 = 83LLU;

	t65 = (((x273%x274)/x275)|x276);

	if (t65 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x278 = 4LLU;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t66 = 40LLU;

	t66 = (((x277%x278)/x279)|x280);

	if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = -1;
	int16_t x283 = 231;

	t67 = (((x281%x282)/x283)|x284);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x286 = UINT64_MAX;
	volatile uint8_t x287 = 96U;
	volatile int32_t x288 = INT32_MIN;
	static uint64_t t68 = 659310923858667434LLU;

	t68 = (((x285%x286)/x287)|x288);

	if (t68 != 18446744071562125506LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 11575U;
	int32_t x290 = 831998;
	int8_t x291 = -1;
	uint8_t x292 = UINT8_MAX;

	t69 = (((x289%x290)/x291)|x292);

	if (t69 != -11521) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = -1;
	int16_t x294 = INT16_MIN;
	uint64_t x295 = 4093024776382LLU;
	int16_t x296 = INT16_MIN;
	uint64_t t70 = 263872479068251LLU;

	t70 = (((x293%x294)/x295)|x296);

	if (t70 != 18446744073709536505LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x297 = 103006;
	volatile int32_t x298 = -1222669;
	int8_t x299 = -1;
	int64_t x300 = INT64_MIN;
	int64_t t71 = -12512110585733LL;

	t71 = (((x297%x298)/x299)|x300);

	if (t71 != -103006LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x301 = 1U;
	uint16_t x302 = 27U;
	int32_t x303 = INT32_MAX;
	static volatile uint8_t x304 = 2U;
	static volatile int32_t t72 = 59314;

	t72 = (((x301%x302)/x303)|x304);

	if (t72 != 2) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x305 = INT8_MAX;
	volatile int8_t x306 = -1;
	volatile int16_t x307 = 484;
	volatile uint64_t t73 = UINT64_MAX;

	t73 = (((x305%x306)/x307)|x308);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x309 = -696;
	uint8_t x310 = 10U;
	int64_t x311 = INT64_MIN;
	int8_t x312 = 3;
	volatile int64_t t74 = -13504189093031LL;

	t74 = (((x309%x310)/x311)|x312);

	if (t74 != 3LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x313 = -1;
	static int16_t x314 = INT16_MAX;
	int64_t x315 = INT64_MIN;

	t75 = (((x313%x314)/x315)|x316);

	if (t75 != -116796LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 88U;
	static volatile int16_t x318 = -1;
	int64_t x319 = -486LL;
	static int32_t x320 = INT32_MAX;
	volatile int64_t t76 = -518466LL;

	t76 = (((x317%x318)/x319)|x320);

	if (t76 != 2147483647LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x321 = INT64_MIN;
	int32_t x323 = INT32_MAX;
	volatile int64_t t77 = 804724011LL;

	t77 = (((x321%x322)/x323)|x324);

	if (t77 != 65535LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x325 = UINT16_MAX;
	static volatile int64_t x328 = INT64_MAX;

	t78 = (((x325%x326)/x327)|x328);

	if (t78 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x330 = 1208812586LLU;
	uint32_t x331 = 1964U;
	volatile uint8_t x332 = 24U;

	t79 = (((x329%x330)/x331)|x332);

	if (t79 != 324188LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x333 = 6;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = -211;
	uint8_t x336 = 0U;
	volatile int32_t t80 = 3;

	t80 = (((x333%x334)/x335)|x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x337 = -10;
	int64_t x338 = 2LL;
	uint64_t x339 = 277371LLU;
	int64_t x340 = INT64_MIN;
	uint64_t t81 = 85300LLU;

	t81 = (((x337%x338)/x339)|x340);

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MIN;
	static uint8_t x342 = 127U;
	volatile uint8_t x343 = UINT8_MAX;
	volatile int32_t x344 = 2021565;
	int32_t t82 = -123;

	t82 = (((x341%x342)/x343)|x344);

	if (t82 != 2021565) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x345 = 16709U;
	static int32_t x347 = INT32_MAX;
	uint32_t x348 = 370394303U;

	t83 = (((x345%x346)/x347)|x348);

	if (t83 != 370394303U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x349 = 721;
	static int32_t x350 = 1;
	int8_t x351 = -9;
	uint64_t x352 = 3904278830367343LLU;

	t84 = (((x349%x350)/x351)|x352);

	if (t84 != 3904278830367343LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x353 = 43136236531303LLU;
	static int8_t x354 = 12;
	static int64_t x355 = -1LL;
	uint32_t x356 = 3883U;
	uint64_t t85 = 117827856300003LLU;

	t85 = (((x353%x354)/x355)|x356);

	if (t85 != 3883LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MIN;
	static uint32_t x358 = UINT32_MAX;
	int32_t x359 = 7148812;
	uint8_t x360 = 0U;
	volatile uint32_t t86 = 1424520U;

	t86 = (((x357%x358)/x359)|x360);

	if (t86 != 300U) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MAX;
	static int32_t x364 = INT32_MAX;
	int32_t t87 = -13222;

	t87 = (((x361%x362)/x363)|x364);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x365 = 9;
	int64_t x367 = -1LL;
	int64_t x368 = INT64_MIN;

	t88 = (((x365%x366)/x367)|x368);

	if (t88 != -9LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = INT16_MIN;
	static int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	uint32_t t89 = 3929441U;

	t89 = (((x369%x370)/x371)|x372);

	if (t89 != 32692U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x373 = UINT32_MAX;
	volatile int8_t x374 = INT8_MAX;
	static int8_t x375 = INT8_MAX;
	volatile int8_t x376 = INT8_MIN;
	uint32_t t90 = 420348326U;

	t90 = (((x373%x374)/x375)|x376);

	if (t90 != 4294967168U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = -6;
	static int8_t x378 = INT8_MIN;
	uint16_t x379 = 30755U;
	static int64_t t91 = INT64_MIN;

	t91 = (((x377%x378)/x379)|x380);

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x381 = 26006LLU;
	int32_t x382 = INT32_MIN;
	int64_t x383 = -1LL;
	uint16_t x384 = 27U;

	t92 = (((x381%x382)/x383)|x384);

	if (t92 != 27LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x387 = -1;
	uint16_t x388 = 48U;
	static volatile int64_t t93 = -136015LL;

	t93 = (((x385%x386)/x387)|x388);

	if (t93 != -16LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = INT32_MAX;
	volatile int64_t x391 = INT64_MIN;
	volatile int16_t x392 = 44;
	static int64_t t94 = -33152647899469514LL;

	t94 = (((x389%x390)/x391)|x392);

	if (t94 != 44LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	volatile int64_t x398 = -1LL;
	int16_t x399 = -1;
	int32_t x400 = INT32_MIN;
	int64_t t95 = -3LL;

	t95 = (((x397%x398)/x399)|x400);

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = -47LL;
	volatile uint64_t x403 = 101779719466515LLU;
	static uint64_t t96 = 526453426641289LLU;

	t96 = (((x401%x402)/x403)|x404);

	if (t96 != 18446744073709544447LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x406 = 6299603;
	static volatile uint32_t x407 = 149558U;
	int32_t x408 = INT32_MIN;
	volatile uint32_t t97 = 219582U;

	t97 = (((x405%x406)/x407)|x408);

	if (t97 != 2147512365U) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x410 = INT16_MAX;
	static int64_t x412 = 115221580264179278LL;
	int64_t t98 = -1906944733120LL;

	t98 = (((x409%x410)/x411)|x412);

	if (t98 != 115221580264181727LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x414 = -1LL;
	uint64_t x416 = 4877204379862985187LLU;

	t99 = (((x413%x414)/x415)|x416);

	if (t99 != 4877204379862985187LLU) { NG(); } else { ; }
	
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

