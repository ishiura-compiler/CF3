#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x1 = INT8_MIN;
static int64_t x4 = INT64_MIN;
volatile uint16_t x5 = UINT16_MAX;
static int8_t x12 = -21;
static uint8_t x13 = 20U;
int8_t x15 = -1;
uint64_t x16 = UINT64_MAX;
static volatile int32_t t6 = 892;
uint8_t x39 = 4U;
volatile uint16_t x46 = UINT16_MAX;
volatile int64_t x50 = INT64_MIN;
uint8_t x52 = UINT8_MAX;
int64_t t11 = 488LL;
static int16_t x54 = -1;
int64_t t12 = 9829078866452LL;
uint32_t x62 = UINT32_MAX;
int16_t x63 = INT16_MAX;
static int16_t x66 = -1;
uint64_t x76 = 198081454382364LLU;
static volatile uint64_t x89 = 829198LLU;
uint64_t x101 = UINT64_MAX;
static uint32_t x102 = UINT32_MAX;
static int32_t t22 = -58674;
int32_t t23 = 1;
int8_t x114 = -10;
int64_t x115 = -6537824413LL;
int32_t x119 = 9142770;
volatile int16_t x125 = INT16_MIN;
int16_t x127 = -1;
static int64_t x128 = -11557178643LL;
uint64_t x136 = 16096830905LLU;
int64_t x164 = 10LL;
uint64_t x166 = UINT64_MAX;
int64_t x172 = INT64_MIN;
uint16_t x174 = UINT16_MAX;
int32_t x178 = INT32_MAX;
uint32_t t38 = 1932U;
int32_t x184 = INT32_MIN;
uint32_t x189 = UINT32_MAX;
volatile uint64_t x194 = 2801455824744947LLU;
int16_t x201 = 97;
uint16_t x211 = UINT16_MAX;
volatile int64_t t47 = 158LL;
uint16_t x218 = UINT16_MAX;
uint8_t x222 = 1U;
int8_t x223 = INT8_MIN;
uint64_t x237 = 3602171660743119464LLU;
volatile int16_t x238 = INT16_MIN;
volatile int32_t t53 = 9620;
static int64_t x249 = -1LL;
uint8_t x252 = 25U;
static uint32_t t55 = 27U;
int64_t x253 = INT64_MIN;
int64_t x260 = -13144977777156470LL;
static volatile int64_t x262 = INT64_MIN;
uint8_t x266 = 0U;
volatile int32_t t60 = 3475085;
int64_t x274 = INT64_MAX;
volatile int32_t x288 = INT32_MIN;
uint32_t t64 = 1U;
int32_t x303 = -1;
int8_t x304 = -4;
volatile int32_t t67 = 0;
static uint16_t x306 = 3U;
static int16_t x309 = INT16_MAX;
volatile int64_t t70 = 148517560997279326LL;
int16_t x328 = INT16_MAX;
uint8_t x333 = 6U;
int32_t t73 = 1007972;
int8_t x338 = INT8_MAX;
int16_t x340 = 3883;
static volatile int64_t x347 = INT64_MIN;
int32_t x348 = -1;
volatile int8_t x350 = -1;
int32_t t77 = 401;
static int32_t x354 = INT32_MAX;
static int64_t x356 = -1LL;
int32_t x362 = INT32_MIN;
volatile int32_t t80 = -76506;
static volatile int64_t x365 = -1LL;
int16_t x366 = -1;
static volatile int32_t t83 = 29409324;
int32_t x390 = -1;
int32_t x398 = 1;
uint8_t x408 = 1U;
uint8_t x409 = 8U;
uint64_t x419 = 3679875912LLU;
int32_t x422 = -2;
uint64_t t94 = 171795588099LLU;
int16_t x431 = INT16_MAX;
volatile int32_t t96 = -595;
static volatile int8_t x434 = 0;
volatile int64_t t98 = 15747670460076LL;
volatile int16_t x441 = -1;


void f0(void) {
	int32_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	volatile int64_t t0 = -6118016684736LL;

	t0 = (((x1<x2)+x3)-x4);

	if (t0 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	static int64_t x8 = -1LL;
	int64_t t1 = -487009592421860LL;

	t1 = (((x5<x6)+x7)-x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static uint32_t x10 = UINT32_MAX;
	uint8_t x11 = UINT8_MAX;
	static int32_t t2 = 0;

	t2 = (((x9<x10)+x11)-x12);

	if (t2 != 276) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = INT64_MIN;
	volatile uint64_t t3 = 15513893LLU;

	t3 = (((x13<x14)+x15)-x16);

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = INT8_MIN;
	uint8_t x20 = 57U;
	int32_t t4 = 2391299;

	t4 = (((x17<x18)+x19)-x20);

	if (t4 != -184) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -1;
	volatile int32_t x26 = -1;
	static int32_t x27 = -1;
	volatile int32_t x28 = 14;
	static volatile int32_t t5 = 216590369;

	t5 = (((x25<x26)+x27)-x28);

	if (t5 != -15) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = -1;
	uint32_t x30 = 5780U;
	static volatile int32_t x31 = -1;
	volatile uint16_t x32 = UINT16_MAX;

	t6 = (((x29<x30)+x31)-x32);

	if (t6 != -65536) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -1;
	static volatile int64_t x34 = INT64_MIN;
	uint32_t x35 = 13664U;
	volatile int32_t x36 = INT32_MIN;
	volatile uint32_t t7 = 315989562U;

	t7 = (((x33<x34)+x35)-x36);

	if (t7 != 2147497312U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	uint32_t x38 = UINT32_MAX;
	uint32_t x40 = 473169419U;
	uint32_t t8 = 3983U;

	t8 = (((x37<x38)+x39)-x40);

	if (t8 != 3821797882U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 1711U;
	int8_t x42 = INT8_MAX;
	volatile int8_t x43 = 3;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t9 = -405743072;

	t9 = (((x41<x42)+x43)-x44);

	if (t9 != -124) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x45 = 17U;
	int32_t x47 = -7;
	int64_t x48 = 96016052041776LL;
	static volatile int64_t t10 = -2553339070989791LL;

	t10 = (((x45<x46)+x47)-x48);

	if (t10 != -96016052041782LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = -1;
	int64_t x51 = INT64_MAX;

	t11 = (((x49<x50)+x51)-x52);

	if (t11 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = 1;
	int64_t x55 = -1LL;
	uint8_t x56 = UINT8_MAX;

	t12 = (((x53<x54)+x55)-x56);

	if (t12 != -256LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 24LLU;
	uint64_t x58 = UINT64_MAX;
	int16_t x59 = INT16_MAX;
	static uint32_t x60 = UINT32_MAX;
	uint32_t t13 = 0U;

	t13 = (((x57<x58)+x59)-x60);

	if (t13 != 32769U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x61 = -1;
	int64_t x64 = -18450257912233184LL;
	static volatile int64_t t14 = -118204497508LL;

	t14 = (((x61<x62)+x63)-x64);

	if (t14 != 18450257912265951LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x65 = -909;
	int8_t x67 = -1;
	int64_t x68 = INT64_MAX;
	int64_t t15 = 1022209881LL;

	t15 = (((x65<x66)+x67)-x68);

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x69 = 96U;
	uint16_t x70 = 29U;
	volatile int16_t x71 = INT16_MIN;
	static volatile uint64_t x72 = UINT64_MAX;
	volatile uint64_t t16 = 14868866622LLU;

	t16 = (((x69<x70)+x71)-x72);

	if (t16 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = -532;
	int32_t x74 = -1;
	static uint32_t x75 = 163714U;
	volatile uint64_t t17 = 585189594028460239LLU;

	t17 = (((x73<x74)+x75)-x76);

	if (t17 != 18446545992255332967LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x81 = 49U;
	int8_t x82 = -6;
	int32_t x83 = INT32_MIN;
	int8_t x84 = INT8_MIN;
	int32_t t18 = -140;

	t18 = (((x81<x82)+x83)-x84);

	if (t18 != -2147483520) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = 7U;
	static uint64_t x86 = UINT64_MAX;
	uint64_t x87 = 901998726577LLU;
	int8_t x88 = INT8_MAX;
	volatile uint64_t t19 = 78989456557388LLU;

	t19 = (((x85<x86)+x87)-x88);

	if (t19 != 901998726451LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x90 = -25;
	int64_t x91 = INT64_MIN;
	int32_t x92 = -24555369;
	static volatile int64_t t20 = -210134765336LL;

	t20 = (((x89<x90)+x91)-x92);

	if (t20 != -9223372036830220438LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MIN;
	int16_t x94 = 1020;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = UINT64_MAX;
	uint64_t t21 = 111796512LLU;

	t21 = (((x93<x94)+x95)-x96);

	if (t21 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x103 = -1;
	uint16_t x104 = 121U;

	t22 = (((x101<x102)+x103)-x104);

	if (t22 != -122) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x105 = 1740819U;
	int16_t x106 = INT16_MIN;
	static uint8_t x107 = 0U;
	volatile int8_t x108 = INT8_MIN;

	t23 = (((x105<x106)+x107)-x108);

	if (t23 != 129) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = -1;
	int16_t x116 = INT16_MIN;
	volatile int64_t t24 = -227837663199679315LL;

	t24 = (((x113<x114)+x115)-x116);

	if (t24 != -6537791645LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x117 = INT8_MAX;
	int32_t x118 = INT32_MAX;
	int64_t x120 = -1LL;
	volatile int64_t t25 = -5751LL;

	t25 = (((x117<x118)+x119)-x120);

	if (t25 != 9142772LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = 0;
	static int16_t x122 = INT16_MIN;
	int32_t x123 = -1448;
	uint32_t x124 = 1U;
	volatile uint32_t t26 = 32101148U;

	t26 = (((x121<x122)+x123)-x124);

	if (t26 != 4294965847U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x126 = 60U;
	volatile int64_t t27 = 1LL;

	t27 = (((x125<x126)+x127)-x128);

	if (t27 != 11557178643LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = 1895U;
	uint8_t x134 = 120U;
	uint32_t x135 = 517392221U;
	volatile uint64_t t28 = 43684LLU;

	t28 = (((x133<x134)+x135)-x136);

	if (t28 != 18446744058130112932LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x137 = -1;
	uint16_t x138 = UINT16_MAX;
	int64_t x139 = -6090949679LL;
	static int16_t x140 = 1;
	static volatile int64_t t29 = 2297192LL;

	t29 = (((x137<x138)+x139)-x140);

	if (t29 != -6090949679LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1LL;
	int32_t x142 = -12017;
	uint32_t x143 = UINT32_MAX;
	int16_t x144 = INT16_MIN;
	volatile uint32_t t30 = 58323065U;

	t30 = (((x141<x142)+x143)-x144);

	if (t30 != 32767U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x145 = INT32_MIN;
	static int64_t x146 = -1LL;
	uint32_t x147 = 11U;
	int8_t x148 = INT8_MIN;
	uint32_t t31 = 2146243969U;

	t31 = (((x145<x146)+x147)-x148);

	if (t31 != 140U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = 0U;
	int64_t x155 = -173866206LL;
	int8_t x156 = -1;
	volatile int64_t t32 = 12774109508548478LL;

	t32 = (((x153<x154)+x155)-x156);

	if (t32 != -173866205LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 16544648436014LLU;
	int64_t x158 = 140547806LL;
	int32_t x159 = INT32_MIN;
	static int16_t x160 = INT16_MIN;
	int32_t t33 = 1405;

	t33 = (((x157<x158)+x159)-x160);

	if (t33 != -2147450880) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = -50243;
	volatile int8_t x162 = -6;
	int8_t x163 = -26;
	volatile int64_t t34 = -32466LL;

	t34 = (((x161<x162)+x163)-x164);

	if (t34 != -35LL) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x165 = 1;
	static int16_t x167 = INT16_MIN;
	volatile int8_t x168 = -1;
	int32_t t35 = -59;

	t35 = (((x165<x166)+x167)-x168);

	if (t35 != -32766) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x169 = 81738;
	volatile int16_t x170 = 630;
	volatile int64_t x171 = INT64_MIN;
	volatile int64_t t36 = -146525394275445729LL;

	t36 = (((x169<x170)+x171)-x172);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = -1;
	int8_t x175 = -1;
	int16_t x176 = -1;
	int32_t t37 = 56949147;

	t37 = (((x173<x174)+x175)-x176);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = INT8_MIN;
	volatile int8_t x179 = INT8_MAX;
	volatile uint32_t x180 = 887642878U;

	t38 = (((x177<x178)+x179)-x180);

	if (t38 != 3407324546U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x181 = -1;
	uint32_t x182 = 190016U;
	int32_t x183 = INT32_MIN;
	volatile int32_t t39 = -6364;

	t39 = (((x181<x182)+x183)-x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MIN;
	int64_t x186 = 3530LL;
	volatile uint32_t x187 = UINT32_MAX;
	int8_t x188 = -1;
	uint32_t t40 = 150208464U;

	t40 = (((x185<x186)+x187)-x188);

	if (t40 != 1U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	int64_t x192 = INT64_MIN;
	int64_t t41 = 21629959419228041LL;

	t41 = (((x189<x190)+x191)-x192);

	if (t41 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x193 = 59U;
	static int16_t x195 = INT16_MAX;
	volatile int8_t x196 = -1;
	volatile int32_t t42 = -762176;

	t42 = (((x193<x194)+x195)-x196);

	if (t42 != 32769) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MAX;
	int32_t x199 = -1;
	uint32_t x200 = 1161U;
	uint32_t t43 = 1U;

	t43 = (((x197<x198)+x199)-x200);

	if (t43 != 4294966135U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x202 = 11;
	int16_t x203 = -1;
	static int16_t x204 = INT16_MAX;
	int32_t t44 = 5;

	t44 = (((x201<x202)+x203)-x204);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = INT64_MIN;
	int32_t x206 = -8569994;
	volatile int64_t x207 = 244786LL;
	static volatile int32_t x208 = INT32_MAX;
	int64_t t45 = -393LL;

	t45 = (((x205<x206)+x207)-x208);

	if (t45 != -2147238860LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x209 = INT16_MIN;
	volatile int16_t x210 = INT16_MAX;
	volatile uint16_t x212 = 16038U;
	static volatile int32_t t46 = 229198986;

	t46 = (((x209<x210)+x211)-x212);

	if (t46 != 49498) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = INT64_MAX;
	uint32_t x214 = UINT32_MAX;
	static uint16_t x215 = 2559U;
	volatile int64_t x216 = 3419167864186212091LL;

	t47 = (((x213<x214)+x215)-x216);

	if (t47 != -3419167864186209532LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x217 = INT32_MAX;
	int16_t x219 = -95;
	uint32_t x220 = 40048003U;
	uint32_t t48 = 8834U;

	t48 = (((x217<x218)+x219)-x220);

	if (t48 != 4254919198U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x221 = UINT16_MAX;
	static int32_t x224 = INT32_MIN;
	int32_t t49 = -30792;

	t49 = (((x221<x222)+x223)-x224);

	if (t49 != 2147483520) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = UINT32_MAX;
	uint8_t x226 = 1U;
	int16_t x227 = -57;
	static uint16_t x228 = UINT16_MAX;
	int32_t t50 = -117730;

	t50 = (((x225<x226)+x227)-x228);

	if (t50 != -65592) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = -1;
	static uint32_t x230 = 28U;
	int8_t x231 = 23;
	volatile int8_t x232 = 4;
	int32_t t51 = -8113529;

	t51 = (((x229<x230)+x231)-x232);

	if (t51 != 19) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x239 = 2;
	uint64_t x240 = 749914LLU;
	static volatile uint64_t t52 = 2766368257309LLU;

	t52 = (((x237<x238)+x239)-x240);

	if (t52 != 18446744073708801705LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x241 = 27015U;
	uint16_t x242 = UINT16_MAX;
	volatile int32_t x243 = -589;
	volatile int8_t x244 = INT8_MAX;

	t53 = (((x241<x242)+x243)-x244);

	if (t53 != -715) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x245 = INT32_MIN;
	volatile int16_t x246 = -1;
	volatile int64_t x247 = 7487141294LL;
	int32_t x248 = INT32_MIN;
	int64_t t54 = -3492673LL;

	t54 = (((x245<x246)+x247)-x248);

	if (t54 != 9634624943LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x250 = -1922383169405405087LL;
	volatile uint32_t x251 = UINT32_MAX;

	t55 = (((x249<x250)+x251)-x252);

	if (t55 != 4294967270U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x254 = INT32_MAX;
	static int32_t x255 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	uint32_t t56 = 47U;

	t56 = (((x253<x254)+x255)-x256);

	if (t56 != 2147483650U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x257 = 0U;
	uint64_t x258 = 1386743382070455LLU;
	uint16_t x259 = 4534U;
	volatile int64_t t57 = -594819LL;

	t57 = (((x257<x258)+x259)-x260);

	if (t57 != 13144977777161005LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x261 = 1900065925U;
	static int16_t x263 = -13;
	uint8_t x264 = 95U;
	volatile int32_t t58 = -60174;

	t58 = (((x261<x262)+x263)-x264);

	if (t58 != -108) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x265 = 57353U;
	uint64_t x267 = UINT64_MAX;
	int16_t x268 = INT16_MAX;
	volatile uint64_t t59 = 63594964764LLU;

	t59 = (((x265<x266)+x267)-x268);

	if (t59 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x269 = 1614096399593LLU;
	int32_t x270 = 44;
	int16_t x271 = INT16_MIN;
	int8_t x272 = -1;

	t60 = (((x269<x270)+x271)-x272);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = 414U;
	int8_t x275 = 1;
	uint64_t x276 = 5433113647LLU;
	static volatile uint64_t t61 = 155LLU;

	t61 = (((x273<x274)+x275)-x276);

	if (t61 != 18446744068276437971LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x277 = 1U;
	static int64_t x278 = INT64_MIN;
	uint32_t x279 = 0U;
	volatile int16_t x280 = -2;
	static volatile uint32_t t62 = 1056279064U;

	t62 = (((x277<x278)+x279)-x280);

	if (t62 != 2U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x281 = 1LLU;
	static int32_t x282 = INT32_MIN;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	int32_t t63 = -109;

	t63 = (((x281<x282)+x283)-x284);

	if (t63 != 98304) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x285 = INT64_MIN;
	static volatile uint16_t x286 = 1015U;
	static uint32_t x287 = 3U;

	t64 = (((x285<x286)+x287)-x288);

	if (t64 != 2147483652U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x293 = INT16_MIN;
	static uint32_t x294 = UINT32_MAX;
	int16_t x295 = -4459;
	volatile int32_t x296 = INT32_MIN;
	volatile int32_t t65 = 7;

	t65 = (((x293<x294)+x295)-x296);

	if (t65 != 2147479190) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x297 = -24LL;
	int32_t x298 = INT32_MIN;
	int32_t x299 = INT32_MIN;
	uint64_t x300 = UINT64_MAX;
	uint64_t t66 = 30LLU;

	t66 = (((x297<x298)+x299)-x300);

	if (t66 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MIN;
	int64_t x302 = 332043292065LL;

	t67 = (((x301<x302)+x303)-x304);

	if (t67 != 4) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x305 = 1U;
	int8_t x307 = -1;
	int32_t x308 = INT32_MAX;
	int32_t t68 = 0;

	t68 = (((x305<x306)+x307)-x308);

	if (t68 != -2147483647) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x310 = INT64_MIN;
	static int16_t x311 = INT16_MIN;
	static int16_t x312 = -1;
	volatile int32_t t69 = -71097670;

	t69 = (((x309<x310)+x311)-x312);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = -24;
	int32_t x314 = -1;
	int64_t x315 = INT64_MIN;
	static int64_t x316 = INT64_MIN;

	t70 = (((x313<x314)+x315)-x316);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = -1;
	static uint16_t x322 = 4U;
	volatile int8_t x323 = INT8_MAX;
	uint8_t x324 = 3U;
	static volatile int32_t t71 = -728;

	t71 = (((x321<x322)+x323)-x324);

	if (t71 != 125) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MAX;
	uint64_t x327 = UINT64_MAX;
	uint64_t t72 = 14392500LLU;

	t72 = (((x325<x326)+x327)-x328);

	if (t72 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x334 = INT32_MIN;
	volatile uint16_t x335 = 13U;
	uint8_t x336 = UINT8_MAX;

	t73 = (((x333<x334)+x335)-x336);

	if (t73 != -242) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = INT64_MIN;
	uint32_t x339 = 5649366U;
	volatile uint32_t t74 = 6707U;

	t74 = (((x337<x338)+x339)-x340);

	if (t74 != 5645484U) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x341 = UINT8_MAX;
	static int8_t x342 = INT8_MIN;
	volatile int32_t x343 = -1;
	int16_t x344 = -1;
	volatile int32_t t75 = 272328835;

	t75 = (((x341<x342)+x343)-x344);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = INT32_MIN;
	int64_t t76 = 250033693900LL;

	t76 = (((x345<x346)+x347)-x348);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x349 = INT64_MIN;
	static int16_t x351 = INT16_MIN;
	int16_t x352 = INT16_MIN;

	t77 = (((x349<x350)+x351)-x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x353 = UINT16_MAX;
	int16_t x355 = 1;
	static int64_t t78 = 586213LL;

	t78 = (((x353<x354)+x355)-x356);

	if (t78 != 3LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x357 = INT32_MIN;
	uint8_t x358 = 55U;
	int64_t x359 = -10161LL;
	uint8_t x360 = 1U;
	int64_t t79 = 1LL;

	t79 = (((x357<x358)+x359)-x360);

	if (t79 != -10161LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x361 = -1;
	volatile int32_t x363 = INT32_MIN;
	int8_t x364 = -1;

	t80 = (((x361<x362)+x363)-x364);

	if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = INT64_MIN;
	volatile int64_t t81 = -1LL;

	t81 = (((x365<x366)+x367)-x368);

	if (t81 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x369 = INT32_MIN;
	int32_t x370 = 195631513;
	int32_t x371 = -1967796;
	volatile int32_t x372 = -1;
	int32_t t82 = 76848;

	t82 = (((x369<x370)+x371)-x372);

	if (t82 != -1967794) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MAX;
	static uint8_t x375 = 62U;
	volatile int16_t x376 = -1;

	t83 = (((x373<x374)+x375)-x376);

	if (t83 != 64) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x377 = -1LL;
	int16_t x378 = -1;
	int64_t x379 = -7348174929654637LL;
	static volatile int16_t x380 = 1;
	int64_t t84 = 4044LL;

	t84 = (((x377<x378)+x379)-x380);

	if (t84 != -7348174929654638LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = -1;
	int16_t x386 = INT16_MAX;
	int8_t x387 = -2;
	static int16_t x388 = -20;
	static int32_t t85 = 26;

	t85 = (((x385<x386)+x387)-x388);

	if (t85 != 19) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x389 = INT64_MIN;
	volatile int64_t x391 = INT64_MIN;
	int8_t x392 = -1;
	int64_t t86 = 1701867LL;

	t86 = (((x389<x390)+x391)-x392);

	if (t86 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x393 = 570;
	int64_t x394 = -1LL;
	int16_t x395 = -147;
	uint32_t x396 = 2527U;
	volatile uint32_t t87 = 178U;

	t87 = (((x393<x394)+x395)-x396);

	if (t87 != 4294964622U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x397 = INT16_MIN;
	int32_t x399 = 430420;
	static volatile int16_t x400 = INT16_MAX;
	static volatile int32_t t88 = 1957;

	t88 = (((x397<x398)+x399)-x400);

	if (t88 != 397654) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x401 = 19829801949644LLU;
	int16_t x402 = -1;
	int32_t x403 = 242145033;
	int8_t x404 = -7;
	static volatile int32_t t89 = 17;

	t89 = (((x401<x402)+x403)-x404);

	if (t89 != 242145041) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x405 = UINT64_MAX;
	uint64_t x406 = 23466432628593696LLU;
	int32_t x407 = -1;
	static int32_t t90 = -411;

	t90 = (((x405<x406)+x407)-x408);

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x410 = 82U;
	int32_t x411 = INT32_MIN;
	static int8_t x412 = -1;
	volatile int32_t t91 = 378577;

	t91 = (((x409<x410)+x411)-x412);

	if (t91 != -2147483646) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x413 = INT16_MIN;
	int64_t x414 = INT64_MAX;
	static uint64_t x415 = UINT64_MAX;
	int16_t x416 = INT16_MIN;
	volatile uint64_t t92 = 28080646705LLU;

	t92 = (((x413<x414)+x415)-x416);

	if (t92 != 32768LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x417 = -1;
	int32_t x418 = -1;
	static uint32_t x420 = UINT32_MAX;
	volatile uint64_t t93 = 207LLU;

	t93 = (((x417<x418)+x419)-x420);

	if (t93 != 18446744073094460233LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x421 = -407819396882810439LL;
	uint64_t x423 = UINT64_MAX;
	static volatile uint8_t x424 = 2U;

	t94 = (((x421<x422)+x423)-x424);

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x425 = 7U;
	volatile int16_t x426 = 24;
	int32_t x427 = -54524;
	int8_t x428 = INT8_MAX;
	int32_t t95 = 5956;

	t95 = (((x425<x426)+x427)-x428);

	if (t95 != -54650) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x429 = 2832942077LLU;
	int64_t x430 = 1266994985866LL;
	static volatile uint16_t x432 = 21U;

	t96 = (((x429<x430)+x431)-x432);

	if (t96 != 32747) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x433 = 170424U;
	static volatile uint8_t x435 = 58U;
	static int32_t x436 = -1;
	volatile int32_t t97 = -238455;

	t97 = (((x433<x434)+x435)-x436);

	if (t97 != 59) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x437 = INT8_MIN;
	volatile uint16_t x438 = UINT16_MAX;
	int8_t x439 = INT8_MIN;
	int64_t x440 = -1LL;

	t98 = (((x437<x438)+x439)-x440);

	if (t98 != -126LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x442 = 2U;
	int32_t x443 = 543158;
	int16_t x444 = -6;
	volatile int32_t t99 = -187;

	t99 = (((x441<x442)+x443)-x444);

	if (t99 != 543165) { NG(); } else { ; }
	
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

