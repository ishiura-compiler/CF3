#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x3 = 54;
static volatile uint64_t x7 = UINT64_MAX;
uint64_t t1 = 19158209036001129LLU;
static int16_t x14 = INT16_MIN;
int64_t x18 = -1LL;
int16_t x19 = INT16_MAX;
static int8_t x29 = -1;
int32_t x30 = -1;
int16_t x35 = -61;
volatile int16_t x37 = -16;
uint8_t x41 = 0U;
volatile int64_t t10 = -825942168006121901LL;
uint16_t x67 = 1U;
volatile uint32_t t14 = 0U;
int32_t x72 = -1;
uint32_t x74 = UINT32_MAX;
volatile uint64_t x75 = 11296737LLU;
uint16_t x80 = 1240U;
volatile int64_t t17 = -1LL;
int64_t x82 = -385LL;
int64_t x85 = -831736277713LL;
volatile int64_t t19 = -9924396LL;
static int64_t x94 = -268342925713385LL;
static uint16_t x102 = 1U;
static uint32_t x104 = UINT32_MAX;
int64_t x108 = -1LL;
volatile int32_t x126 = INT32_MAX;
int32_t x134 = -1;
int32_t x140 = INT32_MAX;
static int64_t x142 = INT64_MIN;
volatile uint32_t x147 = 152967487U;
volatile uint32_t t32 = 217435570U;
static int16_t x153 = INT16_MIN;
int8_t x154 = INT8_MIN;
static int16_t x156 = -4267;
int16_t x161 = 0;
int64_t x162 = INT64_MIN;
int32_t x166 = INT32_MAX;
int16_t x175 = INT16_MIN;
volatile uint64_t t40 = 235LLU;
int64_t x182 = -5LL;
int64_t x195 = -1LL;
int16_t x197 = -2;
static int16_t x205 = -430;
int8_t x207 = INT8_MAX;
int32_t x211 = -1;
uint32_t x217 = 2216U;
uint64_t x218 = 62LLU;
static uint8_t x228 = 4U;
uint64_t t52 = 7880158808512770206LLU;
static int8_t x237 = 1;
int16_t x238 = INT16_MAX;
int64_t x242 = -1LL;
int32_t x251 = INT32_MAX;
int64_t x252 = 2LL;
int64_t x253 = 561422115621413LL;
int64_t t58 = 1928413929905LL;
static int32_t x257 = INT32_MIN;
int16_t x260 = INT16_MIN;
int8_t x262 = -26;
uint16_t x268 = 8380U;
static int64_t x272 = INT64_MAX;
int64_t t63 = 38196681137758827LL;
uint16_t x282 = 1104U;
int8_t x283 = -1;
int8_t x292 = INT8_MIN;
int8_t x296 = 31;
uint8_t x301 = 78U;
int64_t x303 = INT64_MAX;
volatile int32_t x306 = INT32_MAX;
int64_t t71 = 59292281831LL;
int8_t x321 = 11;
static volatile int16_t x329 = -512;
static int64_t x330 = INT64_MIN;
int32_t x332 = 406795;
int16_t x335 = -1;
int64_t t77 = -1LL;
volatile uint16_t x343 = 3229U;
int8_t x346 = -1;
volatile int64_t t80 = -7202272526390280LL;
int8_t x349 = 14;
int64_t x369 = 946LL;
uint32_t x371 = UINT32_MAX;
volatile int64_t t85 = 1466051329LL;
static int64_t x376 = INT64_MIN;
int64_t x377 = -1LL;
uint64_t t87 = 15LLU;
int64_t x397 = -1LL;
static int16_t x400 = INT16_MIN;
int64_t t92 = 454540481LL;
int64_t t93 = 305123050354631470LL;
int64_t x411 = INT64_MIN;
uint64_t x415 = 3398045668495LLU;
int8_t x416 = -11;
static int8_t x419 = -1;
uint64_t t97 = 445558989720771LLU;
volatile int32_t x426 = -1;
static int8_t x427 = INT8_MIN;
volatile int64_t t99 = -273LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	static uint16_t x2 = 1490U;
	int8_t x4 = INT8_MAX;
	int64_t t0 = -260872387134225LL;

	t0 = (((x1%x2)+x3)|x4);

	if (t0 != -385LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = UINT32_MAX;
	int64_t x6 = INT64_MIN;
	static int32_t x8 = INT32_MIN;

	t1 = (((x5%x6)+x7)|x8);

	if (t1 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 39;
	uint8_t x10 = 20U;
	int64_t x11 = -1LL;
	int8_t x12 = INT8_MAX;
	int64_t t2 = -4444199LL;

	t2 = (((x9%x10)+x11)|x12);

	if (t2 != 127LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1443;
	int8_t x15 = INT8_MIN;
	static int64_t x16 = INT64_MAX;
	int64_t t3 = 913637209432154998LL;

	t3 = (((x13%x14)+x15)|x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 2U;
	volatile int32_t x20 = INT32_MIN;
	int64_t t4 = 0LL;

	t4 = (((x17%x18)+x19)|x20);

	if (t4 != -2147450881LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	static int64_t x22 = -1LL;
	uint8_t x23 = UINT8_MAX;
	static int64_t x24 = INT64_MIN;
	int64_t t5 = -5LL;

	t5 = (((x21%x22)+x23)|x24);

	if (t5 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 47877540;
	int32_t x26 = -103222824;
	volatile int64_t x27 = 0LL;
	int32_t x28 = 13;
	volatile int64_t t6 = -109LL;

	t6 = (((x25%x26)+x27)|x28);

	if (t6 != 47877549LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MAX;
	static uint64_t x32 = 17448045124681210LLU;
	uint64_t t7 = 16103293121332660LLU;

	t7 = (((x29%x30)+x31)|x32);

	if (t7 != 17448045124681215LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x34 = INT16_MAX;
	int32_t x36 = INT32_MIN;
	int64_t t8 = 118517708111LL;

	t8 = (((x33%x34)+x35)|x36);

	if (t8 != -62LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 40U;
	static int16_t x40 = -1784;
	static volatile int64_t t9 = -135471123LL;

	t9 = (((x37%x38)+x39)|x40);

	if (t9 != -1768LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x42 = INT8_MIN;
	volatile int16_t x43 = -1;
	int64_t x44 = INT64_MAX;

	t10 = (((x41%x42)+x43)|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x49 = INT16_MIN;
	volatile int64_t x50 = -1LL;
	volatile uint16_t x51 = 379U;
	int32_t x52 = -2257;
	static int64_t t11 = -21322LL;

	t11 = (((x49%x50)+x51)|x52);

	if (t11 != -2177LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = UINT32_MAX;
	volatile uint16_t x58 = 5513U;
	uint8_t x59 = 15U;
	int16_t x60 = INT16_MIN;
	uint32_t t12 = 0U;

	t12 = (((x57%x58)+x59)|x60);

	if (t12 != 4294938545U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 392262370U;
	static volatile int64_t x62 = 192757LL;
	int8_t x63 = 0;
	volatile int8_t x64 = -1;
	volatile int64_t t13 = -20005420LL;

	t13 = (((x61%x62)+x63)|x64);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MAX;
	static int32_t x66 = 510343436;
	uint32_t x68 = 48U;

	t14 = (((x65%x66)+x67)|x68);

	if (t14 != 176U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 3U;
	uint8_t x70 = 1U;
	uint64_t x71 = 334427193634LLU;
	static volatile uint64_t t15 = UINT64_MAX;

	t15 = (((x69%x70)+x71)|x72);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	static int8_t x76 = INT8_MIN;
	volatile uint64_t t16 = 93149LLU;

	t16 = (((x73%x74)+x75)|x76);

	if (t16 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = -1LL;
	volatile int16_t x78 = 2739;
	static int16_t x79 = INT16_MIN;

	t17 = (((x77%x78)+x79)|x80);

	if (t17 != -32769LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = -1;
	volatile int32_t x83 = INT32_MIN;
	int8_t x84 = -1;
	volatile int64_t t18 = -10920947179LL;

	t18 = (((x81%x82)+x83)|x84);

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x86 = 400165954344582065LL;
	static int8_t x87 = INT8_MIN;
	int16_t x88 = -1;

	t19 = (((x85%x86)+x87)|x88);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int32_t x90 = INT32_MIN;
	uint8_t x91 = 1U;
	static volatile uint32_t x92 = UINT32_MAX;
	uint32_t t20 = UINT32_MAX;

	t20 = (((x89%x90)+x91)|x92);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x93 = INT32_MIN;
	uint32_t x95 = 1U;
	static int8_t x96 = INT8_MAX;
	volatile int64_t t21 = 1LL;

	t21 = (((x93%x94)+x95)|x96);

	if (t21 != -2147483521LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x97 = -14205145424244104LL;
	static uint16_t x98 = UINT16_MAX;
	uint32_t x99 = 30007U;
	static int32_t x100 = INT32_MIN;
	int64_t t22 = -778788LL;

	t22 = (((x97%x98)+x99)|x100);

	if (t22 != -2147473155LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	uint64_t x103 = UINT64_MAX;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (((x101%x102)+x103)|x104);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = UINT64_MAX;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MIN;
	uint64_t t24 = UINT64_MAX;

	t24 = (((x105%x106)+x107)|x108);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	int8_t x115 = -1;
	volatile int64_t x116 = INT64_MIN;
	int64_t t25 = 100890845926LL;

	t25 = (((x113%x114)+x115)|x116);

	if (t25 != -2LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int16_t x118 = INT16_MIN;
	static volatile uint16_t x119 = 6U;
	static int8_t x120 = INT8_MIN;
	uint32_t t26 = 10359U;

	t26 = (((x117%x118)+x119)|x120);

	if (t26 != 4294967173U) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x121 = UINT32_MAX;
	int8_t x122 = INT8_MIN;
	int8_t x123 = -3;
	int8_t x124 = 6;
	uint32_t t27 = 18754131U;

	t27 = (((x121%x122)+x123)|x124);

	if (t27 != 126U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -1;
	uint8_t x127 = 0U;
	int32_t x128 = INT32_MAX;
	volatile int32_t t28 = -4982;

	t28 = (((x125%x126)+x127)|x128);

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x133 = INT64_MAX;
	int32_t x135 = -1;
	uint16_t x136 = 20983U;
	volatile int64_t t29 = 1309776LL;

	t29 = (((x133%x134)+x135)|x136);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t t30 = 32859169111267559LLU;

	t30 = (((x137%x138)+x139)|x140);

	if (t30 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -1;
	int32_t x143 = -11494339;
	static int16_t x144 = 10;
	int64_t t31 = 4584474350900LL;

	t31 = (((x141%x142)+x143)|x144);

	if (t31 != -11494338LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x145 = UINT32_MAX;
	int8_t x146 = 4;
	int8_t x148 = -5;

	t32 = (((x145%x146)+x147)|x148);

	if (t32 != 4294967291U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = -33400866LL;
	uint16_t x151 = UINT16_MAX;
	int64_t x152 = -1523133281508853LL;
	volatile int64_t t33 = -676726045009004LL;

	t33 = (((x149%x150)+x151)|x152);

	if (t33 != -3179765LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x155 = -1LL;
	volatile int64_t t34 = -155622825805552023LL;

	t34 = (((x153%x154)+x155)|x156);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x157 = 10;
	uint64_t x158 = 20860175046388LLU;
	volatile uint16_t x159 = 183U;
	int32_t x160 = INT32_MIN;
	uint64_t t35 = 432800500987LLU;

	t35 = (((x157%x158)+x159)|x160);

	if (t35 != 18446744071562068161LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x163 = 112U;
	static int32_t x164 = INT32_MIN;
	int64_t t36 = -4937724175LL;

	t36 = (((x161%x162)+x163)|x164);

	if (t36 != -2147483536LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x165 = UINT64_MAX;
	int64_t x167 = INT64_MIN;
	uint32_t x168 = UINT32_MAX;
	uint64_t t37 = 403838659229LLU;

	t37 = (((x165%x166)+x167)|x168);

	if (t37 != 9223372041149743103LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x169 = INT32_MAX;
	int8_t x170 = INT8_MIN;
	volatile uint16_t x171 = UINT16_MAX;
	volatile uint64_t x172 = 50LLU;
	static uint64_t t38 = 117780014LLU;

	t38 = (((x169%x170)+x171)|x172);

	if (t38 != 65662LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x173 = INT64_MAX;
	static int64_t x174 = 21397866496527LL;
	uint16_t x176 = 4U;
	int64_t t39 = 884LL;

	t39 = (((x173%x174)+x175)|x176);

	if (t39 != 14264325248436LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -1;
	uint64_t x178 = 964290LLU;
	uint32_t x179 = 380U;
	uint16_t x180 = 1U;

	t40 = (((x177%x178)+x179)|x180);

	if (t40 != 821165LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x181 = UINT32_MAX;
	int16_t x183 = 40;
	static volatile uint64_t x184 = 41780926LLU;
	volatile uint64_t t41 = 181716434487LLU;

	t41 = (((x181%x182)+x183)|x184);

	if (t41 != 41780926LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -3249060LL;
	static volatile int32_t x186 = -1;
	int32_t x187 = -1;
	int64_t x188 = -1LL;
	int64_t t42 = -11762988701774LL;

	t42 = (((x185%x186)+x187)|x188);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x189 = 3982535884894820LLU;
	int8_t x190 = -14;
	uint16_t x191 = UINT16_MAX;
	int64_t x192 = -106LL;
	static volatile uint64_t t43 = 4371424390022799LLU;

	t43 = (((x189%x190)+x191)|x192);

	if (t43 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x193 = -1;
	static int64_t x194 = INT64_MAX;
	static int64_t x196 = -1LL;
	int64_t t44 = 2210618363498LL;

	t44 = (((x193%x194)+x195)|x196);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 79742LLU;
	static int16_t x200 = 3062;
	volatile uint64_t t45 = 56668782343581LLU;

	t45 = (((x197%x198)+x199)|x200);

	if (t45 != 81918LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = -12;
	int8_t x202 = INT8_MIN;
	int16_t x203 = 3;
	int16_t x204 = INT16_MIN;
	volatile int32_t t46 = 0;

	t46 = (((x201%x202)+x203)|x204);

	if (t46 != -9) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x206 = INT8_MIN;
	uint64_t x208 = 14LLU;
	uint64_t t47 = 1925406335912811118LLU;

	t47 = (((x205%x206)+x207)|x208);

	if (t47 != 95LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x209 = 23U;
	static uint8_t x210 = UINT8_MAX;
	int64_t x212 = INT64_MIN;
	volatile int64_t t48 = 554404386298LL;

	t48 = (((x209%x210)+x211)|x212);

	if (t48 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MAX;
	int64_t x214 = -1LL;
	int16_t x215 = INT16_MAX;
	volatile uint64_t x216 = UINT64_MAX;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (((x213%x214)+x215)|x216);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x219 = -1;
	static int16_t x220 = 28;
	uint64_t t50 = 919050298LLU;

	t50 = (((x217%x218)+x219)|x220);

	if (t50 != 61LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = UINT32_MAX;
	static uint64_t x222 = UINT64_MAX;
	static volatile int16_t x223 = -1;
	int16_t x224 = -71;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (((x221%x222)+x223)|x224);

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -1000;
	static uint64_t x226 = 12862LLU;
	static volatile uint8_t x227 = 2U;

	t52 = (((x225%x226)+x227)|x228);

	if (t52 != 9100LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x233 = -1;
	int64_t x234 = INT64_MIN;
	uint64_t x235 = UINT64_MAX;
	static int64_t x236 = 2LL;
	uint64_t t53 = 0LLU;

	t53 = (((x233%x234)+x235)|x236);

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x239 = 3091U;
	static uint8_t x240 = 3U;
	volatile int32_t t54 = -38;

	t54 = (((x237%x238)+x239)|x240);

	if (t54 != 3095) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = 2749142;
	uint32_t x243 = UINT32_MAX;
	int64_t x244 = INT64_MIN;
	int64_t t55 = -1LL;

	t55 = (((x241%x242)+x243)|x244);

	if (t55 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x245 = -3;
	static volatile int32_t x246 = INT32_MIN;
	int16_t x247 = -7919;
	volatile int16_t x248 = INT16_MAX;
	static volatile int32_t t56 = 7;

	t56 = (((x245%x246)+x247)|x248);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x249 = -1;
	volatile uint32_t x250 = 385U;
	int64_t t57 = 13LL;

	t57 = (((x249%x250)+x251)|x252);

	if (t57 != 2147483727LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x254 = -1LL;
	static uint16_t x255 = 1442U;
	int32_t x256 = -1;

	t58 = (((x253%x254)+x255)|x256);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int16_t x258 = 59;
	int16_t x259 = INT16_MAX;
	volatile int32_t t59 = -54052233;

	t59 = (((x257%x258)+x259)|x260);

	if (t59 != -56) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x261 = INT16_MAX;
	static int8_t x263 = INT8_MAX;
	int64_t x264 = INT64_MAX;
	static volatile int64_t t60 = INT64_MAX;

	t60 = (((x261%x262)+x263)|x264);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x265 = 0U;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	int64_t t61 = 457246LL;

	t61 = (((x265%x266)+x267)|x268);

	if (t61 != -24388LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = UINT8_MAX;
	static int64_t x270 = -1LL;
	static int16_t x271 = -426;
	volatile int64_t t62 = -27653LL;

	t62 = (((x269%x270)+x271)|x272);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = 3012;
	int64_t x278 = 4582576467719737358LL;
	volatile int8_t x279 = -1;
	uint8_t x280 = 20U;

	t63 = (((x277%x278)+x279)|x280);

	if (t63 != 3031LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x281 = 0U;
	int8_t x284 = 3;
	volatile int32_t t64 = 140395070;

	t64 = (((x281%x282)+x283)|x284);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x285 = -5285;
	uint32_t x286 = 3812U;
	static volatile uint16_t x287 = 0U;
	int8_t x288 = INT8_MIN;
	static uint32_t t65 = 46849285U;

	t65 = (((x285%x286)+x287)|x288);

	if (t65 != 4294967199U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x289 = INT64_MIN;
	static int32_t x290 = -37;
	int32_t x291 = -1304194;
	static volatile int64_t t66 = -452557847934876LL;

	t66 = (((x289%x290)+x291)|x292);

	if (t66 != -8LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = INT32_MAX;
	uint32_t x294 = UINT32_MAX;
	volatile int8_t x295 = 9;
	uint32_t t67 = 94634274U;

	t67 = (((x293%x294)+x295)|x296);

	if (t67 != 2147483679U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	uint8_t x298 = 47U;
	volatile int16_t x299 = -6;
	uint8_t x300 = 33U;
	int32_t t68 = 2241782;

	t68 = (((x297%x298)+x299)|x300);

	if (t68 != -7) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x302 = -1;
	int64_t x304 = -1LL;
	int64_t t69 = 114039337128446LL;

	t69 = (((x301%x302)+x303)|x304);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x305 = 1884U;
	int32_t x307 = -1;
	volatile uint32_t x308 = 58U;
	static volatile uint32_t t70 = 121U;

	t70 = (((x305%x306)+x307)|x308);

	if (t70 != 1915U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = -29;
	int64_t x310 = INT64_MIN;
	static volatile int64_t x311 = -1559814926996LL;
	uint16_t x312 = 3887U;

	t71 = (((x309%x310)+x311)|x312);

	if (t71 != -1559814926481LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 267U;
	volatile uint8_t x314 = UINT8_MAX;
	volatile int64_t x315 = -4298727903087152895LL;
	int16_t x316 = INT16_MIN;
	int64_t t72 = 5895837LL;

	t72 = (((x313%x314)+x315)|x316);

	if (t72 != -20211LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MIN;
	static volatile int32_t x318 = INT32_MIN;
	volatile uint64_t x319 = 789580361868202LLU;
	uint8_t x320 = 3U;
	volatile uint64_t t73 = 2780505LLU;

	t73 = (((x317%x318)+x319)|x320);

	if (t73 != 789580361868203LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x322 = INT32_MAX;
	uint8_t x323 = UINT8_MAX;
	volatile uint8_t x324 = UINT8_MAX;
	volatile int32_t t74 = -6864742;

	t74 = (((x321%x322)+x323)|x324);

	if (t74 != 511) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	static int8_t x326 = INT8_MIN;
	uint64_t x327 = 101997197207274282LLU;
	volatile uint16_t x328 = 0U;
	volatile uint64_t t75 = 15404914216840359LLU;

	t75 = (((x325%x326)+x327)|x328);

	if (t75 != 101997197207274282LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x331 = -1;
	volatile int64_t t76 = 864694217357200LL;

	t76 = (((x329%x330)+x331)|x332);

	if (t76 != -513LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x333 = 389700303567LL;
	uint32_t x334 = 1U;
	static volatile uint32_t x336 = UINT32_MAX;

	t77 = (((x333%x334)+x335)|x336);

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x337 = 48565U;
	static int64_t x338 = -1586LL;
	static volatile int16_t x339 = 14650;
	volatile int8_t x340 = -1;
	int64_t t78 = -204LL;

	t78 = (((x337%x338)+x339)|x340);

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x341 = -1;
	int32_t x342 = INT32_MAX;
	uint64_t x344 = 1646LLU;
	volatile uint64_t t79 = 31258586898326120LLU;

	t79 = (((x341%x342)+x343)|x344);

	if (t79 != 3838LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 6U;
	int64_t x347 = -125253901567166840LL;
	int16_t x348 = INT16_MAX;

	t80 = (((x345%x346)+x347)|x348);

	if (t80 != -125253901567164417LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x350 = UINT32_MAX;
	static int8_t x351 = INT8_MIN;
	uint64_t x352 = 106LLU;
	uint64_t t81 = 81344515071562LLU;

	t81 = (((x349%x350)+x351)|x352);

	if (t81 != 4294967278LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x357 = 25U;
	static int64_t x358 = INT64_MAX;
	int64_t x359 = 13215LL;
	static int16_t x360 = INT16_MAX;
	volatile int64_t t82 = 119LL;

	t82 = (((x357%x358)+x359)|x360);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x361 = INT16_MIN;
	volatile uint8_t x362 = 20U;
	uint16_t x363 = 609U;
	static uint16_t x364 = 23U;
	int32_t t83 = -1888660;

	t83 = (((x361%x362)+x363)|x364);

	if (t83 != 607) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = -448055724055LL;
	static uint64_t x366 = 3LLU;
	static int8_t x367 = -1;
	int8_t x368 = INT8_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (((x365%x366)+x367)|x368);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x370 = INT16_MAX;
	uint32_t x372 = 7724848U;

	t85 = (((x369%x370)+x371)|x372);

	if (t85 != 4302692273LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x373 = -16495874262660191LL;
	int8_t x374 = INT8_MIN;
	static uint16_t x375 = UINT16_MAX;
	volatile int64_t t86 = -881017163LL;

	t86 = (((x373%x374)+x375)|x376);

	if (t86 != -9223372036854710368LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x378 = -1LL;
	static uint64_t x379 = 5632256LLU;
	int16_t x380 = INT16_MAX;

	t87 = (((x377%x378)+x379)|x380);

	if (t87 != 5636095LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x381 = INT32_MAX;
	int32_t x382 = 9481543;
	int16_t x383 = 0;
	uint16_t x384 = 113U;
	int32_t t88 = -160785002;

	t88 = (((x381%x382)+x383)|x384);

	if (t88 != 4654961) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x385 = 79U;
	uint8_t x386 = UINT8_MAX;
	static volatile int16_t x387 = INT16_MIN;
	uint16_t x388 = UINT16_MAX;
	int32_t t89 = 2907857;

	t89 = (((x385%x386)+x387)|x388);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = INT64_MIN;
	volatile int64_t x390 = INT64_MIN;
	uint64_t x391 = 11325LLU;
	int64_t x392 = INT64_MIN;
	uint64_t t90 = 370LLU;

	t90 = (((x389%x390)+x391)|x392);

	if (t90 != 9223372036854787133LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = 0;
	static volatile int16_t x394 = -1004;
	int64_t x395 = 797416087336741365LL;
	int32_t x396 = INT32_MAX;
	volatile int64_t t91 = 41LL;

	t91 = (((x393%x394)+x395)|x396);

	if (t91 != 797416087875485695LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x398 = -1;
	volatile int8_t x399 = INT8_MIN;

	t92 = (((x397%x398)+x399)|x400);

	if (t92 != -128LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x401 = INT16_MIN;
	int16_t x402 = INT16_MIN;
	int64_t x403 = -3LL;
	int8_t x404 = INT8_MIN;

	t93 = (((x401%x402)+x403)|x404);

	if (t93 != -3LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x405 = 7655U;
	static int32_t x406 = -42;
	static int16_t x407 = INT16_MAX;
	int8_t x408 = 0;
	volatile int32_t t94 = -1932634;

	t94 = (((x405%x406)+x407)|x408);

	if (t94 != 32778) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = 1;
	uint32_t x410 = UINT32_MAX;
	int32_t x412 = INT32_MAX;
	volatile int64_t t95 = -20144279596745LL;

	t95 = (((x409%x410)+x411)|x412);

	if (t95 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x413 = INT8_MIN;
	static volatile int16_t x414 = 107;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (((x413%x414)+x415)|x416);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x417 = INT8_MIN;
	uint64_t x418 = 10035263323LLU;
	uint32_t x420 = 494237U;

	t97 = (((x417%x418)+x419)|x420);

	if (t97 != 3840933821LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = INT32_MAX;
	volatile int64_t x422 = -2788812215LL;
	uint8_t x423 = 4U;
	volatile int16_t x424 = INT16_MIN;
	static volatile int64_t t98 = -2636044332223737LL;

	t98 = (((x421%x422)+x423)|x424);

	if (t98 != -32765LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x425 = -1;
	int64_t x428 = 43LL;

	t99 = (((x425%x426)+x427)|x428);

	if (t99 != -85LL) { NG(); } else { ; }
	
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

