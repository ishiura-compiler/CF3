#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t t0 = 127296121973260614LLU;
uint64_t x11 = UINT64_MAX;
uint64_t x20 = UINT64_MAX;
int8_t x27 = INT8_MIN;
int16_t x37 = INT16_MIN;
static volatile int16_t x51 = INT16_MIN;
volatile uint32_t t10 = 431U;
int8_t x60 = INT8_MIN;
int8_t x64 = 1;
int64_t t12 = 108574LL;
volatile uint8_t x70 = 7U;
volatile int64_t t14 = -255040586995LL;
static volatile int8_t x75 = INT8_MAX;
static volatile uint32_t x83 = UINT32_MAX;
static uint8_t x86 = 2U;
int64_t x87 = INT64_MAX;
static uint16_t x105 = UINT16_MAX;
int16_t x107 = INT16_MIN;
uint32_t x108 = 2656U;
uint8_t x110 = UINT8_MAX;
uint64_t t22 = 1925711498860369LLU;
int8_t x116 = INT8_MIN;
static int16_t x119 = INT16_MAX;
volatile uint64_t t26 = 475459167LLU;
uint8_t x132 = 3U;
int16_t x134 = INT16_MIN;
static int64_t x136 = -14509LL;
volatile int64_t x148 = -2LL;
static uint64_t t30 = 239568588LLU;
uint64_t x149 = 6320098382144LLU;
volatile int32_t x153 = -2291;
volatile uint32_t x155 = 54474U;
uint16_t x166 = 1U;
int8_t x167 = INT8_MAX;
int32_t x170 = INT32_MAX;
uint64_t x178 = 24444LLU;
int8_t x181 = INT8_MIN;
volatile uint8_t x184 = 29U;
static uint32_t t38 = 7196552U;
volatile int32_t x188 = INT32_MIN;
volatile uint64_t x189 = UINT64_MAX;
int16_t x191 = INT16_MIN;
uint64_t x192 = 1920937216306003332LLU;
int32_t x199 = -1;
static uint16_t x201 = 286U;
volatile int16_t x204 = -1;
int8_t x209 = -1;
int16_t x214 = -1;
int8_t x218 = 14;
int64_t x224 = INT64_MIN;
int64_t x226 = INT64_MIN;
volatile int8_t x233 = -1;
static uint8_t x238 = UINT8_MAX;
int8_t x239 = INT8_MAX;
int64_t t51 = 1722433535349449LL;
static uint32_t x247 = 12698U;
volatile int64_t t53 = 3190312LL;
uint32_t x250 = 147U;
int32_t x251 = 264841858;
static volatile uint32_t t54 = 0U;
volatile int32_t t55 = 63;
int32_t x258 = INT32_MAX;
volatile int8_t x263 = -1;
int8_t x264 = INT8_MAX;
int32_t x266 = 2936179;
volatile uint64_t t58 = 65071020064029LLU;
static volatile int16_t x269 = -350;
int32_t x276 = 88;
int32_t x278 = -12;
static uint64_t x288 = 847294LLU;
uint64_t t63 = 3383981586LLU;
int64_t x298 = INT64_MAX;
int8_t x299 = INT8_MIN;
int64_t t65 = 45765126079354439LL;
volatile int16_t x303 = -2;
volatile int32_t x313 = INT32_MIN;
int32_t x315 = 3746;
static uint16_t x317 = 20643U;
static int32_t x321 = -1;
static volatile uint16_t x324 = UINT16_MAX;
uint32_t t71 = 195829U;
int16_t x325 = -1;
uint16_t x329 = 23856U;
int64_t x330 = -475LL;
uint64_t x331 = 225675241LLU;
int8_t x342 = -2;
int64_t x345 = -3998782526457097047LL;
int8_t x346 = -53;
int8_t x357 = INT8_MAX;
static int8_t x365 = INT8_MAX;
int16_t x370 = INT16_MAX;
uint64_t x371 = 505256LLU;
volatile uint32_t x373 = UINT32_MAX;
int16_t x374 = INT16_MIN;
static int16_t x376 = INT16_MIN;
static uint32_t t83 = 247829U;
int32_t t84 = 1;
int16_t x382 = 0;
uint32_t x387 = UINT32_MAX;
int64_t t88 = 283LL;
uint16_t x404 = 1U;
static volatile int64_t t90 = -575301834286566303LL;
int8_t x414 = INT8_MAX;
static int64_t x417 = INT64_MAX;
volatile int8_t x420 = INT8_MIN;
int64_t t92 = INT64_MAX;
uint32_t x422 = UINT32_MAX;
volatile int64_t t94 = 14599867LL;


void f0(void) {
	static int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	int64_t x7 = INT64_MAX;
	uint64_t x8 = 44377803908624043LLU;

	t0 = (x5*(x6&(x7/x8)));

	if (t0 != 18446744073709535232LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x9 = 3536U;
	uint64_t x10 = UINT64_MAX;
	int32_t x12 = INT32_MAX;
	volatile uint64_t t1 = 64956LLU;

	t1 = (x9*(x10&(x11/x12)));

	if (t1 != 30374008731456LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 248573332U;
	int64_t x18 = -13560620400652LL;
	static uint32_t x19 = UINT32_MAX;
	uint64_t t2 = 35194550893151031LLU;

	t2 = (x17*(x18&(x19/x20)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x25 = UINT64_MAX;
	int16_t x26 = INT16_MIN;
	int8_t x28 = -1;
	uint64_t t3 = 875948872074068168LLU;

	t3 = (x25*(x26&(x27/x28)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = 92222054910687LL;
	volatile int8_t x30 = INT8_MIN;
	volatile int16_t x31 = INT16_MAX;
	uint64_t x32 = 55385092862LLU;
	uint64_t t4 = 1171LLU;

	t4 = (x29*(x30&(x31/x32)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x33 = UINT64_MAX;
	volatile uint32_t x34 = 2947U;
	uint16_t x35 = 360U;
	uint32_t x36 = 340U;
	uint64_t t5 = UINT64_MAX;

	t5 = (x33*(x34&(x35/x36)));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x38 = 147906748;
	int8_t x39 = INT8_MIN;
	int32_t x40 = INT32_MAX;
	int32_t t6 = 1692224;

	t6 = (x37*(x38&(x39/x40)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x41 = INT32_MIN;
	uint64_t x42 = 170356438142991685LLU;
	volatile int64_t x43 = INT64_MIN;
	uint16_t x44 = 24U;
	volatile uint64_t t7 = 70LLU;

	t7 = (x41*(x42&(x43/x44)));

	if (t7 != 17270930734864924672LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x45 = 17U;
	int8_t x46 = -1;
	uint16_t x47 = UINT16_MAX;
	volatile int16_t x48 = INT16_MIN;
	int32_t t8 = 594331370;

	t8 = (x45*(x46&(x47/x48)));

	if (t8 != -17) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MIN;
	int8_t x52 = INT8_MIN;
	int64_t t9 = 3934399806961LL;

	t9 = (x49*(x50&(x51/x52)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x53 = 8U;
	uint8_t x54 = UINT8_MAX;
	uint32_t x55 = UINT32_MAX;
	uint16_t x56 = UINT16_MAX;

	t10 = (x53*(x54&(x55/x56)));

	if (t10 != 8U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x57 = UINT64_MAX;
	static uint64_t x58 = 2113601044305540788LLU;
	uint16_t x59 = 9028U;
	volatile uint64_t t11 = 6761792404LLU;

	t11 = (x57*(x58&(x59/x60)));

	if (t11 != 16333143029404010832LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = -1LL;
	static volatile uint16_t x62 = 7U;
	uint32_t x63 = 8U;

	t12 = (x61*(x62&(x63/x64)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = -9;
	int32_t x66 = -10682;
	volatile int64_t x67 = 245LL;
	int32_t x68 = INT32_MAX;
	static int64_t t13 = -1LL;

	t13 = (x65*(x66&(x67/x68)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x69 = 107;
	static int64_t x71 = INT64_MIN;
	int32_t x72 = 135686734;

	t14 = (x69*(x70&(x71/x72)));

	if (t14 != 107LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x73 = 3U;
	int8_t x74 = INT8_MAX;
	int16_t x76 = 1;
	int32_t t15 = 257064723;

	t15 = (x73*(x74&(x75/x76)));

	if (t15 != 381) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = INT32_MIN;
	uint16_t x82 = 725U;
	uint16_t x84 = UINT16_MAX;
	volatile uint32_t t16 = 35U;

	t16 = (x81*(x82&(x83/x84)));

	if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x85 = 0;
	volatile int64_t x88 = 4146813LL;
	volatile int64_t t17 = -1LL;

	t17 = (x85*(x86&(x87/x88)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = -1LL;
	int16_t x90 = 252;
	uint8_t x91 = 6U;
	volatile int8_t x92 = 6;
	volatile int64_t t18 = 568LL;

	t18 = (x89*(x90&(x91/x92)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x97 = INT64_MIN;
	int8_t x98 = 0;
	int64_t x99 = -16350004088790LL;
	uint64_t x100 = 34096760387069709LLU;
	static uint64_t t19 = 7680LLU;

	t19 = (x97*(x98&(x99/x100)));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = 3U;
	static volatile int64_t x102 = -68LL;
	int8_t x103 = 1;
	int16_t x104 = INT16_MIN;
	int64_t t20 = -358851188924310LL;

	t20 = (x101*(x102&(x103/x104)));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x106 = -1;
	uint32_t t21 = 126U;

	t21 = (x105*(x106&(x107/x108)));

	if (t21 != 2895336276U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	uint16_t x111 = 44U;
	volatile int16_t x112 = -124;

	t22 = (x109*(x110&(x111/x112)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x113 = 16;
	uint32_t x114 = 177935837U;
	int64_t x115 = 1578LL;
	int64_t t23 = 118583565LL;

	t23 = (x113*(x114&(x115/x116)));

	if (t23 != 2846973248LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 12U;
	volatile int64_t x118 = 278935344746422LL;
	int32_t x120 = -94617;
	volatile int64_t t24 = 4172763901317597493LL;

	t24 = (x117*(x118&(x119/x120)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x121 = -15732665;
	int16_t x122 = -48;
	int16_t x123 = INT16_MIN;
	int16_t x124 = 887;
	volatile int32_t t25 = 3666411;

	t25 = (x121*(x122&(x123/x124)));

	if (t25 != 755167920) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = 1;
	uint64_t x126 = UINT64_MAX;
	volatile int16_t x127 = INT16_MAX;
	int32_t x128 = -1;

	t26 = (x125*(x126&(x127/x128)));

	if (t26 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x129 = -1;
	volatile uint64_t x130 = 11982LLU;
	uint64_t x131 = 7LLU;
	volatile uint64_t t27 = 15073419610114200LLU;

	t27 = (x129*(x130&(x131/x132)));

	if (t27 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x133 = UINT8_MAX;
	static int32_t x135 = 3448914;
	int64_t t28 = 26LL;

	t28 = (x133*(x134&(x135/x136)));

	if (t28 != -8355840LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x141 = 15744;
	uint64_t x142 = UINT64_MAX;
	volatile uint64_t x143 = 724LLU;
	static int64_t x144 = -1LL;
	volatile uint64_t t29 = 2011852356703LLU;

	t29 = (x141*(x142&(x143/x144)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = 188563793073779143LLU;
	static int32_t x146 = -1;
	volatile int16_t x147 = INT16_MIN;

	t30 = (x145*(x146&(x147/x148)));

	if (t30 != 8822925411302359040LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x150 = -23;
	static uint64_t x151 = UINT64_MAX;
	static uint32_t x152 = 29U;
	volatile uint64_t t31 = 3836313094975LLU;

	t31 = (x149*(x150&(x151/x152)));

	if (t31 != 8905319494812846592LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x154 = 77473;
	uint16_t x156 = UINT16_MAX;
	static volatile uint32_t t32 = 602073U;

	t32 = (x153*(x154&(x155/x156)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x157 = 172179329421473LL;
	uint8_t x158 = 7U;
	int64_t x159 = -919795664920885594LL;
	int16_t x160 = -120;
	volatile int64_t t33 = -398LL;

	t33 = (x157*(x158&(x159/x160)));

	if (t33 != 172179329421473LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x162 = INT16_MIN;
	static uint16_t x163 = 577U;
	int32_t x164 = INT32_MIN;
	volatile uint64_t t34 = 3232758296LLU;

	t34 = (x161*(x162&(x163/x164)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = -194923LL;
	int32_t x168 = INT32_MIN;
	int64_t t35 = 5LL;

	t35 = (x165*(x166&(x167/x168)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	static volatile int8_t x171 = -1;
	int64_t x172 = INT64_MIN;
	volatile int64_t t36 = -6731LL;

	t36 = (x169*(x170&(x171/x172)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x177 = -1;
	int16_t x179 = INT16_MIN;
	volatile uint8_t x180 = 66U;
	static uint64_t t37 = 157968171385LLU;

	t37 = (x177*(x178&(x179/x180)));

	if (t37 != 18446744073709527536LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x182 = 14U;
	uint32_t x183 = UINT32_MAX;

	t38 = (x181*(x182&(x183/x184)));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x185 = 50018399050LLU;
	static volatile int8_t x186 = -1;
	int32_t x187 = -35;
	volatile uint64_t t39 = 396745100949135LLU;

	t39 = (x185*(x186&(x187/x188)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x190 = INT64_MIN;
	uint64_t t40 = 539398805418LLU;

	t40 = (x189*(x190&(x191/x192)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = 9597705065055710LLU;
	volatile int8_t x195 = INT8_MIN;
	static uint16_t x196 = 12U;
	volatile uint64_t t41 = 259607LLU;

	t41 = (x193*(x194&(x195/x196)));

	if (t41 != 1402903259957428224LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 585U;
	int32_t x198 = INT32_MIN;
	static int64_t x200 = -1LL;
	volatile int64_t t42 = -563592003848LL;

	t42 = (x197*(x198&(x199/x200)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x202 = UINT32_MAX;
	int16_t x203 = 1026;
	volatile uint32_t t43 = 0U;

	t43 = (x201*(x202&(x203/x204)));

	if (t43 != 4294673860U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x210 = INT8_MIN;
	static int16_t x211 = INT16_MIN;
	static uint64_t x212 = UINT64_MAX;
	uint64_t t44 = 172LLU;

	t44 = (x209*(x210&(x211/x212)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x213 = INT32_MAX;
	volatile uint32_t x215 = 1392792327U;
	int32_t x216 = INT32_MIN;
	uint32_t t45 = 31U;

	t45 = (x213*(x214&(x215/x216)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x217 = 53522457146278LLU;
	volatile int64_t x219 = INT64_MAX;
	int64_t x220 = INT64_MIN;
	uint64_t t46 = 3032311293LLU;

	t46 = (x217*(x218&(x219/x220)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = -1;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = UINT16_MAX;
	int64_t t47 = -22551343734LL;

	t47 = (x221*(x222&(x223/x224)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = UINT16_MAX;
	int64_t x227 = INT64_MIN;
	static int32_t x228 = -50129;
	volatile int64_t t48 = -55201201LL;

	t48 = (x225*(x226&(x227/x228)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x229 = INT8_MIN;
	volatile int8_t x230 = INT8_MIN;
	uint64_t x231 = 383606523973848LLU;
	volatile uint8_t x232 = 2U;
	uint64_t t49 = 249958967674016048LLU;

	t49 = (x229*(x230&(x231/x232)));

	if (t49 != 18422193256175239168LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x234 = INT32_MAX;
	int64_t x235 = INT64_MIN;
	int64_t x236 = 2487635721137479LL;
	int64_t t50 = 78LL;

	t50 = (x233*(x234&(x235/x236)));

	if (t50 != -2147479941LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -8135674205100LL;
	static uint32_t x240 = UINT32_MAX;

	t51 = (x237*(x238&(x239/x240)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	int16_t x243 = INT16_MAX;
	int64_t x244 = 18LL;
	volatile uint64_t t52 = 174LLU;

	t52 = (x241*(x242&(x243/x244)));

	if (t52 != 18446744073709549824LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = INT8_MIN;
	int64_t x246 = INT64_MIN;
	volatile uint8_t x248 = 89U;

	t53 = (x245*(x246&(x247/x248)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x249 = INT16_MAX;
	int16_t x252 = -1;

	t54 = (x249*(x250&(x251/x252)));

	if (t54 != 589806U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MAX;
	int8_t x255 = INT8_MIN;
	volatile int32_t x256 = INT32_MAX;

	t55 = (x253*(x254&(x255/x256)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = -1LL;
	volatile uint8_t x259 = 15U;
	int16_t x260 = -1;
	volatile int64_t t56 = 245062515124980LL;

	t56 = (x257*(x258&(x259/x260)));

	if (t56 != -2147483633LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x261 = -1;
	int16_t x262 = INT16_MIN;
	volatile int32_t t57 = -350;

	t57 = (x261*(x262&(x263/x264)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x265 = 326091293LLU;
	volatile uint16_t x267 = 73U;
	volatile uint16_t x268 = 1U;

	t58 = (x265*(x266&(x267/x268)));

	if (t58 != 21195934045LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x270 = 814U;
	static int64_t x271 = 1972LL;
	uint64_t x272 = 28918052963LLU;
	volatile uint64_t t59 = 1356LLU;

	t59 = (x269*(x270&(x271/x272)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = -75562783;
	static volatile int32_t x274 = -50;
	int8_t x275 = 6;
	int32_t t60 = -3438783;

	t60 = (x273*(x274&(x275/x276)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -1;
	volatile int64_t x279 = -13494026314317243LL;
	int8_t x280 = INT8_MIN;
	volatile int64_t t61 = 19206235533LL;

	t61 = (x277*(x278&(x279/x280)));

	if (t61 != -105422080580592LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x281 = 21;
	volatile int32_t x282 = INT32_MIN;
	uint32_t x283 = 14784231U;
	uint8_t x284 = 70U;
	static uint32_t t62 = 1U;

	t62 = (x281*(x282&(x283/x284)));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x285 = 7817;
	int64_t x286 = INT64_MIN;
	static int64_t x287 = INT64_MAX;

	t63 = (x285*(x286&(x287/x288)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x289 = INT32_MAX;
	static int16_t x290 = -1;
	uint32_t x291 = 422U;
	static int32_t x292 = INT32_MIN;
	uint32_t t64 = 883U;

	t64 = (x289*(x290&(x291/x292)));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x297 = -11824;
	int16_t x300 = -95;

	t65 = (x297*(x298&(x299/x300)));

	if (t65 != -11824LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x301 = INT8_MAX;
	volatile uint32_t x302 = 8006579U;
	static volatile uint64_t x304 = UINT64_MAX;
	static uint64_t t66 = 10316340774434139LLU;

	t66 = (x301*(x302&(x303/x304)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x305 = 766489215LLU;
	volatile int32_t x306 = 915;
	static int8_t x307 = 0;
	volatile int32_t x308 = 10210312;
	volatile uint64_t t67 = 2884113749273692810LLU;

	t67 = (x305*(x306&(x307/x308)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x309 = 38;
	int32_t x310 = -3298982;
	static uint64_t x311 = 52462LLU;
	int16_t x312 = 3723;
	volatile uint64_t t68 = 836031LLU;

	t68 = (x309*(x310&(x311/x312)));

	if (t68 != 380LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x314 = -1;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t69 = 60561501017LLU;

	t69 = (x313*(x314&(x315/x316)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x318 = INT16_MIN;
	int8_t x319 = 3;
	uint8_t x320 = UINT8_MAX;
	int32_t t70 = 0;

	t70 = (x317*(x318&(x319/x320)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x322 = UINT16_MAX;
	static uint32_t x323 = 741060U;

	t71 = (x321*(x322&(x323/x324)));

	if (t71 != 4294967285U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x326 = UINT64_MAX;
	uint64_t x327 = UINT64_MAX;
	static uint32_t x328 = 3144U;
	uint64_t t72 = 2LLU;

	t72 = (x325*(x326&(x327/x328)));

	if (t72 != 18440876788698829749LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x332 = INT16_MIN;
	uint64_t t73 = 882LLU;

	t73 = (x329*(x330&(x331/x332)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	volatile int64_t x334 = INT64_MIN;
	int32_t x335 = -1011033346;
	uint32_t x336 = 2570870U;
	volatile int64_t t74 = 0LL;

	t74 = (x333*(x334&(x335/x336)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x337 = 6U;
	static volatile uint16_t x338 = UINT16_MAX;
	uint32_t x339 = UINT32_MAX;
	volatile int64_t x340 = INT64_MAX;
	volatile int64_t t75 = -11LL;

	t75 = (x337*(x338&(x339/x340)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x341 = -1;
	volatile int16_t x343 = -610;
	int32_t x344 = -19824630;
	volatile int32_t t76 = 16;

	t76 = (x341*(x342&(x343/x344)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x347 = 8;
	int32_t x348 = 12224;
	volatile int64_t t77 = 3654125LL;

	t77 = (x345*(x346&(x347/x348)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x349 = INT64_MIN;
	volatile int64_t x350 = -30LL;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 3708965092949LLU;
	uint64_t t78 = 206264283964616LLU;

	t78 = (x349*(x350&(x351/x352)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x353 = INT32_MIN;
	static uint8_t x354 = 1U;
	uint8_t x355 = 21U;
	static int8_t x356 = -1;
	volatile int32_t t79 = INT32_MIN;

	t79 = (x353*(x354&(x355/x356)));

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x358 = INT32_MIN;
	static uint8_t x359 = 21U;
	volatile int32_t x360 = INT32_MAX;
	static volatile int32_t t80 = 26;

	t80 = (x357*(x358&(x359/x360)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x366 = -1;
	int64_t x367 = -531257451615LL;
	static volatile int16_t x368 = INT16_MAX;
	int64_t t81 = -123817LL;

	t81 = (x365*(x366&(x367/x368)));

	if (t81 != -2059074495LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x369 = 43753002;
	int64_t x372 = INT64_MIN;
	volatile uint64_t t82 = 269761271530LLU;

	t82 = (x369*(x370&(x371/x372)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x375 = -251268658;

	t83 = (x373*(x374&(x375/x376)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x377 = INT16_MIN;
	int16_t x378 = INT16_MIN;
	int8_t x379 = -27;
	volatile int8_t x380 = 1;

	t84 = (x377*(x378&(x379/x380)));

	if (t84 != 1073741824) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x381 = 1586494U;
	static volatile int16_t x383 = 1;
	int8_t x384 = 5;
	volatile uint32_t t85 = 8088009U;

	t85 = (x381*(x382&(x383/x384)));

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x385 = INT32_MIN;
	volatile int64_t x386 = -102LL;
	volatile uint64_t x388 = 7872494278893920151LLU;
	uint64_t t86 = 496LLU;

	t86 = (x385*(x386&(x387/x388)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x389 = 122U;
	int64_t x390 = INT64_MIN;
	static int16_t x391 = INT16_MAX;
	volatile int16_t x392 = INT16_MIN;
	static int64_t t87 = 410963071595027440LL;

	t87 = (x389*(x390&(x391/x392)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = 0;
	uint32_t x400 = UINT32_MAX;

	t88 = (x397*(x398&(x399/x400)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x401 = INT16_MAX;
	static uint32_t x402 = 13340U;
	volatile int16_t x403 = -3;
	volatile uint32_t t89 = 49202U;

	t89 = (x401*(x402&(x403/x404)));

	if (t89 != 437111780U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = 14206271380781318LL;
	volatile int64_t x406 = INT64_MIN;
	static volatile uint8_t x407 = 56U;
	int32_t x408 = -3282852;

	t90 = (x405*(x406&(x407/x408)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = INT32_MAX;
	uint64_t x415 = 99574LLU;
	static int16_t x416 = -63;
	volatile uint64_t t91 = 701978174957LLU;

	t91 = (x413*(x414&(x415/x416)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x418 = 17U;
	int32_t x419 = INT32_MAX;

	t92 = (x417*(x418&(x419/x420)));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = INT16_MIN;
	int8_t x423 = INT8_MIN;
	uint8_t x424 = UINT8_MAX;
	uint32_t t93 = 1243817U;

	t93 = (x421*(x422&(x423/x424)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x425 = -1;
	volatile int8_t x426 = INT8_MAX;
	volatile int64_t x427 = INT64_MIN;
	int16_t x428 = -1669;

	t94 = (x425*(x426&(x427/x428)));

	if (t94 != -92LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x429 = 0;
	int64_t x430 = 3226173269LL;
	int8_t x431 = INT8_MIN;
	int8_t x432 = INT8_MIN;
	int64_t t95 = 4428957998828263LL;

	t95 = (x429*(x430&(x431/x432)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = -343;
	int8_t x434 = INT8_MIN;
	static uint8_t x435 = 1U;
	uint64_t x436 = 3315884723116LLU;
	volatile uint64_t t96 = 4102343LLU;

	t96 = (x433*(x434&(x435/x436)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x437 = INT8_MIN;
	int64_t x438 = -336965491LL;
	static int8_t x439 = INT8_MIN;
	volatile int64_t x440 = -1LL;
	int64_t t97 = 228973LL;

	t97 = (x437*(x438&(x439/x440)));

	if (t97 != -16384LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x441 = -4306861022995660623LL;
	int16_t x442 = INT16_MAX;
	volatile uint8_t x443 = 5U;
	int64_t x444 = 123760376387LL;
	int64_t t98 = -958283580LL;

	t98 = (x441*(x442&(x443/x444)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x449 = INT32_MIN;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = -23;
	static int64_t x452 = INT64_MIN;
	volatile int64_t t99 = 324LL;

	t99 = (x449*(x450&(x451/x452)));

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

