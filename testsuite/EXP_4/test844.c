#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
int32_t x2 = INT32_MIN;
int64_t x3 = INT64_MAX;
int32_t x5 = INT32_MIN;
uint64_t x34 = 17852170862LLU;
int64_t x38 = INT64_MAX;
static volatile int64_t t8 = 908678928292LL;
int16_t x44 = -1;
int32_t t9 = 5;
int32_t x49 = -103;
uint64_t x52 = 80264296197231848LLU;
volatile uint64_t t11 = 0LLU;
int32_t x55 = INT32_MAX;
int32_t x63 = 215;
int64_t x68 = -1LL;
volatile int8_t x69 = 1;
int64_t x70 = -278562991413793300LL;
int64_t x73 = -55046LL;
volatile int64_t t18 = 1269941457LL;
int16_t x84 = -1164;
volatile int16_t x96 = INT16_MIN;
uint64_t x100 = 1678705494812812LLU;
uint64_t t23 = 812127LLU;
static int64_t x104 = -1LL;
int64_t x110 = INT64_MIN;
int32_t x114 = INT32_MIN;
int32_t x115 = 3;
volatile int16_t x127 = -5996;
int8_t x132 = -10;
static int32_t t31 = -1;
uint8_t x142 = 3U;
static int32_t x149 = 17;
static uint16_t x153 = 4572U;
static int32_t x154 = INT32_MAX;
static int8_t x155 = -1;
int64_t x157 = 7125191518LL;
volatile int64_t t37 = 6LL;
uint8_t x161 = UINT8_MAX;
uint32_t t38 = 55835U;
int64_t x168 = INT64_MIN;
static int64_t x171 = -2591024LL;
uint64_t x172 = 35403359883176LLU;
volatile int16_t x173 = INT16_MIN;
static int64_t x176 = INT64_MAX;
int64_t t41 = -1609278951257393167LL;
uint32_t x179 = UINT32_MAX;
static volatile int32_t t43 = INT32_MAX;
int8_t x187 = INT8_MAX;
int32_t x198 = INT32_MIN;
uint32_t t47 = 3U;
int8_t x212 = INT8_MAX;
int32_t t50 = 903;
int8_t x219 = INT8_MIN;
volatile int8_t x220 = 1;
int64_t t53 = -2089445LL;
static int16_t x232 = 8;
volatile int64_t t54 = 39224982485LL;
volatile uint8_t x239 = 15U;
uint16_t x250 = UINT16_MAX;
int8_t x253 = INT8_MIN;
int16_t x256 = INT16_MIN;
int32_t x259 = -101350172;
int64_t x281 = -5897472313LL;
int8_t x282 = INT8_MIN;
static volatile int64_t t65 = 5228869249843850LL;
volatile uint32_t x285 = 10399U;
int8_t x289 = INT8_MIN;
static volatile uint64_t x292 = 394705108881906171LLU;
static int64_t x294 = -366128722338LL;
int16_t x304 = INT16_MIN;
uint8_t x308 = 1U;
int8_t x314 = INT8_MIN;
static uint64_t x315 = 35075910127689819LLU;
volatile int16_t x317 = -452;
int64_t x318 = INT64_MIN;
int64_t t74 = -6826821861473460LL;
int8_t x321 = INT8_MIN;
uint64_t x329 = UINT64_MAX;
int32_t x333 = -1;
uint32_t x337 = 5U;
static int8_t x341 = INT8_MIN;
static int32_t x342 = -1;
uint16_t x344 = 9716U;
int16_t x345 = -1;
uint32_t x349 = 3288U;
int16_t x354 = -1;
uint8_t x370 = UINT8_MAX;
static int32_t x372 = INT32_MAX;
volatile int8_t x374 = -1;
int64_t t87 = -267001021LL;
int64_t x377 = -1LL;
static int64_t x380 = -124706410252089187LL;
volatile uint32_t x382 = 18U;
static uint16_t x383 = UINT16_MAX;
static uint32_t t89 = 1015124898U;
uint16_t x386 = UINT16_MAX;
uint16_t x389 = 0U;
int32_t x392 = INT32_MIN;
uint32_t t91 = 2032478U;
int64_t x394 = -24LL;
int8_t x399 = 2;
static int8_t x400 = INT8_MIN;
int8_t x404 = 2;
int64_t x409 = -1LL;
static int16_t x410 = INT16_MAX;
static volatile int64_t t96 = 213398475703150LL;
int64_t x416 = INT64_MIN;
static volatile uint8_t x419 = 96U;
static int32_t x420 = 751;
uint64_t t99 = 1037416475LLU;


void f0(void) {
	uint8_t x4 = 25U;
	int64_t t0 = 490LL;

	t0 = (x1|(x2^(x3%x4)));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = 0;
	int16_t x7 = INT16_MIN;
	uint64_t x8 = 1589109LLU;
	volatile uint64_t t1 = 868161LLU;

	t1 = (x5|(x6^(x7%x8)));

	if (t1 != 18446744071563068002LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = 91;
	int32_t x10 = 17317;
	int8_t x11 = INT8_MIN;
	int64_t x12 = 4115LL;
	int64_t t2 = -4485320690217807LL;

	t2 = (x9|(x10^(x11%x12)));

	if (t2 != -17281LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 999LLU;
	int16_t x14 = INT16_MIN;
	static uint64_t x15 = 2312098555895LLU;
	static volatile int32_t x16 = INT32_MAX;
	uint64_t t3 = 258432867053190LLU;

	t3 = (x13|(x14^(x15%x16)));

	if (t3 != 18446744072303390703LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 27U;
	int16_t x18 = -1;
	int64_t x19 = INT64_MIN;
	int32_t x20 = -1;
	static volatile int64_t t4 = 28018LL;

	t4 = (x17|(x18^(x19%x20)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x25 = 2LLU;
	volatile int64_t x26 = -1LL;
	uint64_t x27 = 717LLU;
	uint8_t x28 = 2U;
	volatile uint64_t t5 = 6796LLU;

	t5 = (x25|(x26^(x27%x28)));

	if (t5 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -3;
	static uint8_t x30 = 0U;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 1U;
	static volatile int32_t t6 = -658;

	t6 = (x29|(x30^(x31%x32)));

	if (t6 != -3) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = -1;
	int64_t x35 = INT64_MIN;
	static int64_t x36 = INT64_MIN;
	uint64_t t7 = UINT64_MAX;

	t7 = (x33|(x34^(x35%x36)));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 126U;
	static int8_t x39 = INT8_MIN;
	volatile uint16_t x40 = UINT16_MAX;

	t8 = (x37|(x38^(x39%x40)));

	if (t8 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x41 = -636825771;
	int8_t x42 = INT8_MIN;
	int16_t x43 = -1;

	t9 = (x41|(x42^(x43%x44)));

	if (t9 != -43) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 3U;
	static uint8_t x46 = UINT8_MAX;
	uint8_t x47 = 12U;
	int64_t x48 = INT64_MIN;
	int64_t t10 = -267764752LL;

	t10 = (x45|(x46^(x47%x48)));

	if (t10 != 243LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x50 = 6LLU;
	uint32_t x51 = UINT32_MAX;

	t11 = (x49|(x50^(x51%x52)));

	if (t11 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = UINT64_MAX;
	uint16_t x54 = 10U;
	volatile int16_t x56 = 1;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (x53|(x54^(x55%x56)));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = 36U;
	static int64_t x58 = INT64_MIN;
	int32_t x59 = INT32_MIN;
	static int8_t x60 = -5;
	volatile int64_t t13 = -1LL;

	t13 = (x57|(x58^(x59%x60)));

	if (t13 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	volatile int32_t x62 = -1;
	int16_t x64 = -1;
	static volatile int32_t t14 = 0;

	t14 = (x61|(x62^(x63%x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x65 = -1;
	int8_t x66 = 1;
	int8_t x67 = INT8_MIN;
	int64_t t15 = 1831002735849306LL;

	t15 = (x65|(x66^(x67%x68)));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x71 = 471U;
	uint32_t x72 = 32027983U;
	int64_t t16 = -13LL;

	t16 = (x69|(x70^(x71%x72)));

	if (t16 != -278562991413793733LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x74 = 3939;
	static uint32_t x75 = 0U;
	volatile uint16_t x76 = UINT16_MAX;
	volatile int64_t t17 = -201035227LL;

	t17 = (x73|(x74^(x75%x76)));

	if (t17 != -53253LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	volatile int64_t x78 = INT64_MIN;
	int16_t x79 = -1;
	uint8_t x80 = UINT8_MAX;

	t18 = (x77|(x78^(x79%x80)));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 12716222;
	int8_t x82 = -1;
	uint16_t x83 = UINT16_MAX;
	volatile int32_t t19 = -44;

	t19 = (x81|(x82^(x83%x84)));

	if (t19 != -322) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = -3559230;
	static uint32_t x86 = 12U;
	volatile uint32_t x87 = 322445U;
	volatile int8_t x88 = INT8_MIN;
	static volatile uint32_t t20 = 0U;

	t20 = (x85|(x86^(x87%x88)));

	if (t20 != 4291689411U) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = 31216;
	volatile int16_t x90 = 440;
	int16_t x91 = INT16_MIN;
	int64_t x92 = 851LL;
	static int64_t t21 = 5790004506LL;

	t21 = (x89|(x90^(x91%x92)));

	if (t21 != -6LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = -5;
	uint64_t x94 = 1LLU;
	static uint32_t x95 = 7U;
	uint64_t t22 = UINT64_MAX;

	t22 = (x93|(x94^(x95%x96)));

	if (t22 != UINT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int8_t x97 = INT8_MAX;
	static int8_t x98 = 27;
	int16_t x99 = -5858;

	t23 = (x97|(x98^(x99%x100)));

	if (t23 != 1128096706367615LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = INT8_MIN;
	int64_t x102 = INT64_MIN;
	static int32_t x103 = 4976378;
	int64_t t24 = -307053005316133536LL;

	t24 = (x101|(x102^(x103%x104)));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -745755315042024504LL;
	uint16_t x106 = UINT16_MAX;
	int16_t x107 = INT16_MAX;
	int8_t x108 = 11;
	static volatile int64_t t25 = 6659836LL;

	t25 = (x105|(x106^(x107%x108)));

	if (t25 != -745755315041992706LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MAX;
	uint64_t x111 = 19765859274252LLU;
	volatile uint16_t x112 = 320U;
	uint64_t t26 = UINT64_MAX;

	t26 = (x109|(x110^(x111%x112)));

	if (t26 != UINT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 239509LL;
	volatile uint64_t x116 = 16743925LLU;
	uint64_t t27 = 160LLU;

	t27 = (x113|(x114^(x115%x116)));

	if (t27 != 18446744071562307479LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = 1266;
	static uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 2U;
	static uint32_t t28 = 99U;

	t28 = (x117|(x118^(x119%x120)));

	if (t28 != 1279U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	static uint8_t x122 = 2U;
	volatile int16_t x123 = INT16_MIN;
	uint32_t x124 = 480U;
	uint32_t t29 = 1712U;

	t29 = (x121|(x122^(x123%x124)));

	if (t29 != 2147483647U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x125 = UINT64_MAX;
	static int16_t x126 = -1;
	uint64_t x128 = 6LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x125|(x126^(x127%x128)));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x129 = -44;
	volatile int8_t x130 = -1;
	int8_t x131 = 2;

	t31 = (x129|(x130^(x131%x132)));

	if (t31 != -3) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = 907755191;
	uint8_t x134 = UINT8_MAX;
	int32_t x135 = INT32_MIN;
	uint16_t x136 = 10U;
	int32_t t32 = -437825151;

	t32 = (x133|(x134^(x135%x136)));

	if (t32 != -73) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x141 = 6393555U;
	int64_t x143 = 1968981752825818LL;
	int8_t x144 = INT8_MAX;
	volatile int64_t t33 = 1LL;

	t33 = (x141|(x142^(x143%x144)));

	if (t33 != 6393555LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = INT64_MIN;
	int64_t x146 = -10788718535LL;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = 5;
	uint64_t t34 = 59593611592LLU;

	t34 = (x145|(x146^(x147%x148)));

	if (t34 != 18446744062920833081LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x150 = -1LL;
	static int64_t x151 = INT64_MAX;
	int64_t x152 = 52LL;
	static volatile int64_t t35 = -60020889844577LL;

	t35 = (x149|(x150^(x151%x152)));

	if (t35 != -7LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x156 = INT32_MAX;
	volatile int32_t t36 = -59039;

	t36 = (x153|(x154^(x155%x156)));

	if (t36 != -2147479076) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x158 = 20;
	int16_t x159 = -1;
	uint32_t x160 = UINT32_MAX;

	t37 = (x157|(x158^(x159%x160)));

	if (t37 != 7125191518LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x162 = INT16_MAX;
	uint32_t x163 = 682153462U;
	uint32_t x164 = 9U;

	t38 = (x161|(x162^(x163%x164)));

	if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -1492510443384246LL;
	int8_t x166 = 0;
	int8_t x167 = 10;
	volatile int64_t t39 = -79103LL;

	t39 = (x165|(x166^(x167%x168)));

	if (t39 != -1492510443384246LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x169 = UINT64_MAX;
	static int16_t x170 = INT16_MAX;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x169|(x170^(x171%x172)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x174 = -1LL;
	int16_t x175 = -1;

	t41 = (x173|(x174^(x175%x176)));

	if (t41 != -32768LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x177 = INT8_MAX;
	static int16_t x178 = 2;
	volatile int64_t x180 = INT64_MIN;
	volatile int64_t t42 = 918734363044338225LL;

	t42 = (x177|(x178^(x179%x180)));

	if (t42 != 4294967295LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MAX;
	int32_t x182 = 272;
	int16_t x183 = 22;
	static int8_t x184 = 3;

	t43 = (x181|(x182^(x183%x184)));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = INT64_MAX;
	uint32_t x188 = 38U;
	int64_t t44 = 76927934963LL;

	t44 = (x185|(x186^(x187%x188)));

	if (t44 != -14LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = -1;
	int16_t x194 = -38;
	uint64_t x195 = 23160188123311LLU;
	int16_t x196 = INT16_MIN;
	uint64_t t45 = UINT64_MAX;

	t45 = (x193|(x194^(x195%x196)));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = INT64_MAX;
	volatile int32_t x199 = -1;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t46 = INT64_MAX;

	t46 = (x197|(x198^(x199%x200)));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x201 = 13751U;
	volatile uint32_t x202 = UINT32_MAX;
	static volatile uint16_t x203 = 12U;
	uint8_t x204 = UINT8_MAX;

	t47 = (x201|(x202^(x203%x204)));

	if (t47 != 4294967287U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = UINT32_MAX;
	int8_t x206 = INT8_MIN;
	int16_t x207 = -1;
	int64_t x208 = INT64_MIN;
	int64_t t48 = -43023883001LL;

	t48 = (x205|(x206^(x207%x208)));

	if (t48 != 4294967295LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = -1;
	volatile int16_t x210 = -1;
	volatile int16_t x211 = INT16_MAX;
	volatile int32_t t49 = -348;

	t49 = (x209|(x210^(x211%x212)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x213 = 4;
	int16_t x214 = INT16_MAX;
	volatile int32_t x215 = -22217;
	static uint16_t x216 = UINT16_MAX;

	t50 = (x213|(x214^(x215%x216)));

	if (t50 != -10548) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x217 = 40707927LLU;
	static uint32_t x218 = 3566745U;
	volatile uint64_t t51 = 29173LLU;

	t51 = (x217|(x218^(x219%x220)));

	if (t51 != 41906143LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x221 = -1;
	int8_t x222 = INT8_MAX;
	int16_t x223 = INT16_MIN;
	uint32_t x224 = 14U;
	volatile uint32_t t52 = UINT32_MAX;

	t52 = (x221|(x222^(x223%x224)));

	if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x225 = 0U;
	int64_t x226 = INT64_MIN;
	static uint8_t x227 = 2U;
	int8_t x228 = -41;

	t53 = (x225|(x226^(x227%x228)));

	if (t53 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x229 = 25046601U;
	static volatile uint32_t x230 = UINT32_MAX;
	int64_t x231 = -34004825193782256LL;

	t54 = (x229|(x230^(x231%x232)));

	if (t54 != 4294967295LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = INT16_MAX;
	int8_t x234 = INT8_MIN;
	volatile int32_t x235 = -1;
	volatile int64_t x236 = -1173549976822197LL;
	volatile int64_t t55 = -535752018654LL;

	t55 = (x233|(x234^(x235%x236)));

	if (t55 != 32767LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x237 = 60;
	static int16_t x238 = INT16_MIN;
	int64_t x240 = -1LL;
	volatile int64_t t56 = -1LL;

	t56 = (x237|(x238^(x239%x240)));

	if (t56 != -32708LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x245 = -1615;
	volatile uint64_t x246 = 25328074525620142LLU;
	int16_t x247 = INT16_MIN;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t57 = 183352904583LLU;

	t57 = (x245|(x246^(x247%x248)));

	if (t57 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x249 = 31930821LLU;
	int8_t x251 = 2;
	int64_t x252 = 1LL;
	volatile uint64_t t58 = 5LLU;

	t58 = (x249|(x250^(x251%x252)));

	if (t58 != 31981567LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x254 = UINT64_MAX;
	uint8_t x255 = UINT8_MAX;
	static volatile uint64_t t59 = 277LLU;

	t59 = (x253|(x254^(x255%x256)));

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = INT8_MIN;
	int64_t x258 = INT64_MAX;
	volatile int64_t x260 = INT64_MIN;
	volatile int64_t t60 = 16290847099954342LL;

	t60 = (x257|(x258^(x259%x260)));

	if (t60 != -101LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x261 = 32188U;
	int32_t x262 = -1;
	static int32_t x263 = INT32_MIN;
	int16_t x264 = INT16_MIN;
	uint32_t t61 = UINT32_MAX;

	t61 = (x261|(x262^(x263%x264)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = 4U;
	int64_t x266 = -1LL;
	uint64_t x267 = 257906163044191LLU;
	int16_t x268 = INT16_MIN;
	volatile uint64_t t62 = 2262743195074272766LLU;

	t62 = (x265|(x266^(x267%x268)));

	if (t62 != 18446486167546507428LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x269 = 1U;
	int64_t x270 = -629890870LL;
	int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MIN;
	int64_t t63 = -4LL;

	t63 = (x269|(x270^(x271%x272)));

	if (t63 != -629874891LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x277 = 22763U;
	static volatile int16_t x278 = INT16_MIN;
	int64_t x279 = -43414524LL;
	int64_t x280 = INT64_MIN;
	int64_t t64 = -355533404091088LL;

	t64 = (x277|(x278^(x279%x280)));

	if (t64 != 43408623LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x283 = 0LL;
	static int16_t x284 = INT16_MIN;

	t65 = (x281|(x282^(x283%x284)));

	if (t65 != -57LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x286 = 425917LL;
	int16_t x287 = 18;
	int16_t x288 = -1;
	int64_t t66 = -44985140200LL;

	t66 = (x285|(x286^(x287%x288)));

	if (t66 != 425919LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x290 = UINT16_MAX;
	static int32_t x291 = -1;
	volatile uint64_t t67 = 181502809450138LLU;

	t67 = (x289|(x290^(x291%x292)));

	if (t67 != 18446744073709551514LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x293 = UINT32_MAX;
	int64_t x295 = -13234254277867632LL;
	static uint16_t x296 = 15U;
	volatile int64_t t68 = -53868241708216107LL;

	t68 = (x293|(x294^(x295%x296)));

	if (t68 != 369367187455LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x297 = INT64_MIN;
	uint8_t x298 = 26U;
	uint64_t x299 = 14817296098332627LLU;
	static int32_t x300 = -401;
	volatile uint64_t t69 = 741027879425722LLU;

	t69 = (x297|(x298^(x299%x300)));

	if (t69 != 9238189332953108425LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = 335LL;
	static volatile uint8_t x302 = 26U;
	int16_t x303 = 842;
	int64_t t70 = -5LL;

	t70 = (x301|(x302^(x303%x304)));

	if (t70 != 863LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = -1;
	uint16_t x306 = 49U;
	volatile int8_t x307 = INT8_MAX;
	volatile int32_t t71 = 30;

	t71 = (x305|(x306^(x307%x308)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = -1;
	static int8_t x310 = INT8_MAX;
	int32_t x311 = 0;
	int16_t x312 = INT16_MIN;
	int32_t t72 = -950627;

	t72 = (x309|(x310^(x311%x312)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x313 = -1;
	uint64_t x316 = 2082144941LLU;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = (x313|(x314^(x315%x316)));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x319 = INT16_MIN;
	int16_t x320 = -1;

	t74 = (x317|(x318^(x319%x320)));

	if (t74 != -452LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x322 = 29116U;
	uint8_t x323 = UINT8_MAX;
	int16_t x324 = INT16_MIN;
	uint32_t t75 = 6533515U;

	t75 = (x321|(x322^(x323%x324)));

	if (t75 != 4294967235U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x330 = INT64_MIN;
	static int16_t x331 = -52;
	volatile int32_t x332 = INT32_MIN;
	static volatile uint64_t t76 = UINT64_MAX;

	t76 = (x329|(x330^(x331%x332)));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x334 = 0;
	int64_t x335 = 1996194862438LL;
	int32_t x336 = 123304;
	static int64_t t77 = -2906358418651LL;

	t77 = (x333|(x334^(x335%x336)));

	if (t77 != -1LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x338 = 50U;
	uint8_t x339 = 95U;
	static volatile uint16_t x340 = 17U;
	static uint32_t t78 = 196695098U;

	t78 = (x337|(x338^(x339%x340)));

	if (t78 != 61U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x343 = -1;
	int32_t t79 = 1;

	t79 = (x341|(x342^(x343%x344)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x346 = INT16_MAX;
	volatile int64_t x347 = INT64_MIN;
	int64_t x348 = INT64_MIN;
	static int64_t t80 = -38LL;

	t80 = (x345|(x346^(x347%x348)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x350 = 73061;
	uint64_t x351 = 59LLU;
	static int32_t x352 = INT32_MIN;
	volatile uint64_t t81 = 78LLU;

	t81 = (x349|(x350^(x351%x352)));

	if (t81 != 73182LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x353 = INT8_MIN;
	static uint32_t x355 = UINT32_MAX;
	int32_t x356 = INT32_MIN;
	static uint32_t t82 = 16U;

	t82 = (x353|(x354^(x355%x356)));

	if (t82 != 4294967168U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x357 = INT64_MIN;
	int64_t x358 = 94808764356630LL;
	int32_t x359 = INT32_MIN;
	int64_t x360 = -1LL;
	volatile int64_t t83 = 116224105628287LL;

	t83 = (x357|(x358^(x359%x360)));

	if (t83 != -9223277228090419178LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x361 = 8334U;
	int16_t x362 = INT16_MIN;
	uint16_t x363 = 1U;
	int64_t x364 = -4108205225545723LL;
	static int64_t t84 = -1266944343LL;

	t84 = (x361|(x362^(x363%x364)));

	if (t84 != -24433LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x365 = UINT8_MAX;
	volatile int32_t x366 = INT32_MIN;
	volatile int32_t x367 = INT32_MIN;
	static int32_t x368 = INT32_MAX;
	volatile int32_t t85 = INT32_MAX;

	t85 = (x365|(x366^(x367%x368)));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x369 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	volatile int64_t t86 = 20948843546LL;

	t86 = (x369|(x370^(x371%x372)));

	if (t86 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x373 = 226320LL;
	volatile int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MAX;

	t87 = (x373|(x374^(x375%x376)));

	if (t87 != -3056LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x378 = 99U;
	uint16_t x379 = 65U;
	static int64_t t88 = 127695621LL;

	t88 = (x377|(x378^(x379%x380)));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x381 = INT8_MIN;
	int16_t x384 = 12;

	t89 = (x381|(x382^(x383%x384)));

	if (t89 != 4294967185U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x385 = 1;
	int64_t x387 = -1LL;
	int16_t x388 = -1;
	int64_t t90 = 752203LL;

	t90 = (x385|(x386^(x387%x388)));

	if (t90 != 65535LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x390 = INT32_MAX;
	uint32_t x391 = 6568U;

	t91 = (x389|(x390^(x391%x392)));

	if (t91 != 2147477079U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x393 = -1LL;
	static uint32_t x395 = UINT32_MAX;
	static volatile int32_t x396 = -1;
	static int64_t t92 = -1022802LL;

	t92 = (x393|(x394^(x395%x396)));

	if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x397 = 7U;
	uint8_t x398 = 16U;
	uint32_t t93 = 70796410U;

	t93 = (x397|(x398^(x399%x400)));

	if (t93 != 23U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x401 = -3420;
	uint64_t x402 = 152LLU;
	volatile int8_t x403 = -31;
	uint64_t t94 = 5466072LLU;

	t94 = (x401|(x402^(x403%x404)));

	if (t94 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x405 = 88U;
	int8_t x406 = -1;
	int16_t x407 = 13;
	static uint64_t x408 = 2678514959184667LLU;
	uint64_t t95 = 3146816159157344LLU;

	t95 = (x405|(x406^(x407%x408)));

	if (t95 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x411 = INT16_MAX;
	volatile uint16_t x412 = UINT16_MAX;

	t96 = (x409|(x410^(x411%x412)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x413 = INT8_MAX;
	int64_t x414 = 53125749LL;
	static uint8_t x415 = 1U;
	int64_t t97 = -7224028LL;

	t97 = (x413|(x414^(x415%x416)));

	if (t97 != 53125759LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x417 = 119409107355LLU;
	uint64_t x418 = 1503106437770436781LLU;
	volatile uint64_t t98 = 3338812428574LLU;

	t98 = (x417|(x418^(x419%x420)));

	if (t98 != 1503106474497204703LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x421 = -3;
	uint64_t x422 = UINT64_MAX;
	uint8_t x423 = 3U;
	uint32_t x424 = UINT32_MAX;

	t99 = (x421|(x422^(x423%x424)));

	if (t99 != 18446744073709551613LLU) { NG(); } else { ; }
	
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

