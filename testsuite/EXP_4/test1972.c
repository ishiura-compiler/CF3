#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x10 = -1;
int64_t x12 = -1LL;
int32_t t2 = 63907726;
int32_t x13 = -1;
int16_t x16 = -1;
uint64_t x18 = 17008LLU;
int32_t t5 = 659;
int64_t x25 = -268LL;
int32_t x26 = -1416918;
uint8_t x27 = 64U;
int16_t x28 = -1;
int32_t t6 = -854420821;
uint32_t x29 = 1659645U;
int64_t x30 = 197LL;
int8_t x34 = INT8_MIN;
static int64_t x39 = -6610LL;
static int8_t x41 = -1;
int64_t x45 = -2LL;
volatile int32_t t11 = -5299155;
int64_t x52 = INT64_MIN;
static volatile int32_t t12 = 262624;
int16_t x53 = INT16_MIN;
int8_t x56 = INT8_MIN;
volatile int32_t t13 = 0;
static int64_t x63 = -1LL;
static int32_t t15 = -12063429;
int32_t x70 = 0;
int32_t t17 = 7405;
volatile int16_t x79 = -48;
static int16_t x81 = 68;
int16_t x87 = INT16_MAX;
int64_t x88 = -1LL;
volatile int32_t x91 = INT32_MAX;
uint16_t x102 = UINT16_MAX;
uint64_t x104 = UINT64_MAX;
uint64_t x108 = UINT64_MAX;
int16_t x113 = INT16_MIN;
volatile uint16_t x114 = 0U;
int32_t t28 = -83512894;
uint64_t x117 = 43237967LLU;
int8_t x120 = INT8_MIN;
int8_t x123 = INT8_MIN;
uint32_t x124 = UINT32_MAX;
uint32_t x125 = UINT32_MAX;
int8_t x128 = INT8_MIN;
int32_t t32 = -109;
static uint64_t x143 = UINT64_MAX;
int8_t x146 = INT8_MIN;
uint8_t x147 = UINT8_MAX;
int32_t x154 = INT32_MIN;
uint32_t x158 = UINT32_MAX;
uint16_t x164 = UINT16_MAX;
int32_t t42 = -28;
static volatile uint64_t x177 = 29634728434893LLU;
volatile int64_t x180 = INT64_MIN;
volatile int32_t t44 = -224;
uint64_t x185 = 33866097205LLU;
int64_t x188 = INT64_MIN;
uint32_t x190 = 110906324U;
static int8_t x205 = INT8_MAX;
static int16_t x207 = -63;
volatile int16_t x209 = -1;
int32_t x211 = INT32_MAX;
volatile int16_t x214 = 45;
uint16_t x215 = 694U;
int32_t t54 = -335078761;
uint16_t x228 = UINT16_MAX;
volatile int32_t t56 = 966;
static volatile uint64_t x232 = 142374760936966LLU;
static int8_t x246 = -1;
volatile int8_t x247 = INT8_MAX;
int8_t x257 = 6;
int32_t x264 = INT32_MIN;
int8_t x265 = INT8_MIN;
volatile int32_t t70 = -114242816;
int16_t x290 = -1;
int64_t x303 = -30241196583225LL;
static uint8_t x305 = UINT8_MAX;
int32_t x306 = -1;
int64_t x307 = INT64_MIN;
int64_t x309 = INT64_MIN;
int64_t x316 = INT64_MIN;
int32_t x326 = INT32_MIN;
static uint16_t x327 = UINT16_MAX;
static uint16_t x330 = 15U;
static uint32_t x334 = 115394U;
static volatile int8_t x335 = INT8_MIN;
uint64_t x337 = 343138255154LLU;
volatile int32_t x340 = INT32_MIN;
static int32_t x341 = INT32_MIN;
int32_t x347 = 440480;
uint16_t x349 = 29295U;
int16_t x356 = -1;
int8_t x360 = -1;
volatile int32_t t89 = 108050;
int64_t x361 = INT64_MIN;
int16_t x366 = INT16_MAX;
volatile int32_t x381 = INT32_MIN;
uint32_t x383 = UINT32_MAX;
volatile int64_t x384 = -25789080446177LL;
uint32_t x385 = 156586U;
static int32_t x391 = 0;
volatile int16_t x392 = -1;


void f0(void) {
	int32_t x1 = INT32_MAX;
	volatile int8_t x2 = INT8_MIN;
	uint16_t x3 = 53U;
	int8_t x4 = -1;
	static volatile int32_t t0 = -81964538;

	t0 = (x1<(x2<(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = 7;
	uint32_t x6 = 1977U;
	int32_t x7 = -7838;
	int8_t x8 = INT8_MIN;
	int32_t t1 = 30474;

	t1 = (x5<(x6<(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	volatile int32_t x11 = -11760;

	t2 = (x9<(x10<(x11|x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MAX;
	int8_t x15 = -27;
	volatile int32_t t3 = -100805826;

	t3 = (x13<(x14<(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x19 = -1;
	static int32_t x20 = INT32_MIN;
	int32_t t4 = -84;

	t4 = (x17<(x18<(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = INT32_MIN;
	uint16_t x22 = 272U;
	int64_t x23 = -1LL;
	static uint32_t x24 = UINT32_MAX;

	t5 = (x21<(x22<(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {


	t6 = (x25<(x26<(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x31 = 3U;
	static uint16_t x32 = 244U;
	int32_t t7 = 35;

	t7 = (x29<(x30<(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x33 = INT64_MAX;
	uint16_t x35 = 6553U;
	uint16_t x36 = 16051U;
	int32_t t8 = 158098428;

	t8 = (x33<(x34<(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MAX;
	static int32_t x38 = INT32_MIN;
	int8_t x40 = INT8_MAX;
	int32_t t9 = 132244;

	t9 = (x37<(x38<(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x42 = INT32_MIN;
	volatile int16_t x43 = INT16_MAX;
	int16_t x44 = 5;
	int32_t t10 = -184930800;

	t10 = (x41<(x42<(x43|x44)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x46 = 149U;
	static uint16_t x47 = UINT16_MAX;
	uint8_t x48 = 3U;

	t11 = (x45<(x46<(x47|x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = -1LL;
	volatile int8_t x50 = INT8_MAX;
	int16_t x51 = INT16_MIN;

	t12 = (x49<(x50<(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x54 = 2631LLU;
	int64_t x55 = INT64_MAX;

	t13 = (x53<(x54<(x55|x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	static volatile int32_t x58 = -752;
	uint64_t x59 = 0LLU;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 2012;

	t14 = (x57<(x58<(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	volatile uint16_t x62 = 19U;
	int32_t x64 = INT32_MAX;

	t15 = (x61<(x62<(x63|x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 2078U;
	int16_t x66 = INT16_MIN;
	int64_t x67 = INT64_MAX;
	int16_t x68 = INT16_MIN;
	int32_t t16 = -6425320;

	t16 = (x65<(x66<(x67|x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	volatile uint64_t x71 = 16551643065149386LLU;
	uint32_t x72 = 2U;

	t17 = (x69<(x70<(x71|x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 159643781LLU;
	int32_t x74 = -700944;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 1LLU;
	int32_t t18 = -5870;

	t18 = (x73<(x74<(x75|x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	volatile int32_t x78 = INT32_MIN;
	int64_t x80 = INT64_MIN;
	int32_t t19 = -467834;

	t19 = (x77<(x78<(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = -1;
	uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;
	static volatile int32_t t20 = 205;

	t20 = (x81<(x82<(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	static uint8_t x86 = 1U;
	static volatile int32_t t21 = -92378;

	t21 = (x85<(x86<(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint64_t x90 = UINT64_MAX;
	int32_t x92 = -2649933;
	int32_t t22 = 256;

	t22 = (x89<(x90<(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = 13725U;
	uint32_t x94 = 11780189U;
	uint64_t x95 = 38955077LLU;
	int16_t x96 = -1;
	int32_t t23 = 207428217;

	t23 = (x93<(x94<(x95|x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -1LL;
	int8_t x98 = 56;
	static uint64_t x99 = UINT64_MAX;
	int64_t x100 = INT64_MIN;
	int32_t t24 = 10;

	t24 = (x97<(x98<(x99|x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	int8_t x103 = 1;
	int32_t t25 = -114;

	t25 = (x101<(x102<(x103|x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int64_t x106 = INT64_MIN;
	int8_t x107 = -1;
	static int32_t t26 = 126524;

	t26 = (x105<(x106<(x107|x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 1590;
	int16_t x110 = 1;
	uint32_t x111 = 1U;
	int8_t x112 = INT8_MAX;
	static volatile int32_t t27 = 5;

	t27 = (x109<(x110<(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MIN;

	t28 = (x113<(x114<(x115|x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x118 = INT64_MIN;
	volatile int64_t x119 = 50583240400685054LL;
	volatile int32_t t29 = -8029;

	t29 = (x117<(x118<(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x121 = 3U;
	static uint8_t x122 = 3U;
	int32_t t30 = -1192043;

	t30 = (x121<(x122<(x123|x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	int64_t x127 = INT64_MIN;
	volatile int32_t t31 = -163131187;

	t31 = (x125<(x126<(x127|x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static uint32_t x130 = UINT32_MAX;
	uint64_t x131 = UINT64_MAX;
	static uint64_t x132 = UINT64_MAX;

	t32 = (x129<(x130<(x131|x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -16;
	uint64_t x134 = UINT64_MAX;
	static uint16_t x135 = UINT16_MAX;
	volatile int64_t x136 = INT64_MIN;
	int32_t t33 = 19735;

	t33 = (x133<(x134<(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MAX;
	int32_t x138 = INT32_MIN;
	static int8_t x139 = -1;
	int8_t x140 = INT8_MIN;
	int32_t t34 = 682178;

	t34 = (x137<(x138<(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = 2741U;
	volatile int64_t x142 = INT64_MAX;
	int64_t x144 = -3346LL;
	volatile int32_t t35 = 4634642;

	t35 = (x141<(x142<(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = UINT32_MAX;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 3013849;

	t36 = (x145<(x146<(x147|x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = 23U;
	static int64_t x150 = INT64_MAX;
	uint8_t x151 = UINT8_MAX;
	volatile int8_t x152 = 2;
	volatile int32_t t37 = 42;

	t37 = (x149<(x150<(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 69259LL;
	int64_t x155 = 11595908012494LL;
	static volatile int8_t x156 = 4;
	int32_t t38 = -53344781;

	t38 = (x153<(x154<(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	static uint8_t x159 = UINT8_MAX;
	static int32_t x160 = INT32_MIN;
	volatile int32_t t39 = 701444577;

	t39 = (x157<(x158<(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 1907LLU;
	static int32_t x162 = -5599;
	uint8_t x163 = 26U;
	int32_t t40 = 87653;

	t40 = (x161<(x162<(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	volatile uint64_t x166 = 30845158297657836LLU;
	static int16_t x167 = 1;
	uint32_t x168 = UINT32_MAX;
	volatile int32_t t41 = -7646;

	t41 = (x165<(x166<(x167|x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x169 = 5734;
	int8_t x170 = INT8_MAX;
	int8_t x171 = INT8_MIN;
	volatile int8_t x172 = INT8_MIN;

	t42 = (x169<(x170<(x171|x172)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	int16_t x174 = INT16_MAX;
	volatile uint32_t x175 = 323U;
	static volatile int8_t x176 = INT8_MIN;
	int32_t t43 = 12;

	t43 = (x173<(x174<(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x178 = INT64_MIN;
	static int8_t x179 = INT8_MIN;

	t44 = (x177<(x178<(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = -1LL;
	static volatile uint8_t x182 = UINT8_MAX;
	int16_t x183 = INT16_MIN;
	int64_t x184 = INT64_MAX;
	int32_t t45 = -1258195;

	t45 = (x181<(x182<(x183|x184)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = INT16_MIN;
	uint64_t x187 = 12183151LLU;
	static int32_t t46 = -45792378;

	t46 = (x185<(x186<(x187|x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -1LL;
	uint8_t x191 = 7U;
	static volatile uint32_t x192 = 494U;
	volatile int32_t t47 = 170;

	t47 = (x189<(x190<(x191|x192)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1958;
	volatile int8_t x194 = INT8_MIN;
	uint16_t x195 = 18552U;
	uint16_t x196 = UINT16_MAX;
	int32_t t48 = 173;

	t48 = (x193<(x194<(x195|x196)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 29137U;
	static int64_t x198 = INT64_MAX;
	volatile uint32_t x199 = 1734U;
	uint32_t x200 = 4202992U;
	int32_t t49 = 1;

	t49 = (x197<(x198<(x199|x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 7U;
	static uint16_t x202 = 30856U;
	volatile int32_t x203 = INT32_MIN;
	uint64_t x204 = 555859036408672LLU;
	int32_t t50 = -1527;

	t50 = (x201<(x202<(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 15U;
	volatile int64_t x208 = INT64_MIN;
	volatile int32_t t51 = -21604;

	t51 = (x205<(x206<(x207|x208)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 1334U;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = -698;

	t52 = (x209<(x210<(x211|x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 6114657U;
	uint32_t x216 = UINT32_MAX;
	static int32_t t53 = 27;

	t53 = (x213<(x214<(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	uint16_t x218 = 492U;
	int8_t x219 = 14;
	int32_t x220 = INT32_MIN;

	t54 = (x217<(x218<(x219|x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x221 = INT8_MIN;
	volatile uint16_t x222 = UINT16_MAX;
	static int16_t x223 = -2731;
	uint32_t x224 = 2936U;
	int32_t t55 = -320;

	t55 = (x221<(x222<(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	volatile int64_t x226 = INT64_MAX;
	volatile int16_t x227 = INT16_MIN;

	t56 = (x225<(x226<(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -1;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = UINT32_MAX;
	static volatile int32_t t57 = -38;

	t57 = (x229<(x230<(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = -184728442059530480LL;
	static int32_t x234 = -1;
	volatile int64_t x235 = -1LL;
	uint8_t x236 = 0U;
	volatile int32_t t58 = 2999661;

	t58 = (x233<(x234<(x235|x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 685;
	static int16_t x238 = INT16_MIN;
	int64_t x239 = 1085265LL;
	uint64_t x240 = 405274163483042LLU;
	int32_t t59 = 638833825;

	t59 = (x237<(x238<(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -441493LL;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = 54U;
	static int64_t x244 = 484280LL;
	int32_t t60 = -7924;

	t60 = (x241<(x242<(x243|x244)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = 2;
	int8_t x248 = -1;
	volatile int32_t t61 = 0;

	t61 = (x245<(x246<(x247|x248)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -1;
	uint16_t x250 = 2102U;
	static uint32_t x251 = 6450U;
	int8_t x252 = -1;
	static volatile int32_t t62 = -2663;

	t62 = (x249<(x250<(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -1;
	volatile int8_t x254 = 7;
	int64_t x255 = INT64_MIN;
	int32_t x256 = INT32_MIN;
	int32_t t63 = 29366;

	t63 = (x253<(x254<(x255|x256)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x258 = 1978882083046409LLU;
	volatile int32_t x259 = INT32_MIN;
	int16_t x260 = INT16_MAX;
	volatile int32_t t64 = -374206956;

	t64 = (x257<(x258<(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint32_t x262 = UINT32_MAX;
	static int32_t x263 = INT32_MAX;
	volatile int32_t t65 = -1;

	t65 = (x261<(x262<(x263|x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	int32_t x267 = -80;
	volatile int16_t x268 = -1;
	static int32_t t66 = 7696;

	t66 = (x265<(x266<(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = -6;
	uint8_t x270 = 21U;
	static volatile int32_t x271 = INT32_MIN;
	static volatile uint16_t x272 = 4342U;
	volatile int32_t t67 = 8128;

	t67 = (x269<(x270<(x271|x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static int32_t x274 = 0;
	int16_t x275 = -1;
	int16_t x276 = INT16_MAX;
	volatile int32_t t68 = -1399487;

	t68 = (x273<(x274<(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -4;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = UINT32_MAX;
	int8_t x280 = 57;
	int32_t t69 = 1;

	t69 = (x277<(x278<(x279|x280)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = INT64_MIN;
	static volatile int16_t x282 = INT16_MIN;
	static volatile int8_t x283 = 37;
	int16_t x284 = INT16_MIN;

	t70 = (x281<(x282<(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = INT64_MAX;
	uint16_t x286 = 31U;
	int64_t x287 = -43773LL;
	static int32_t x288 = INT32_MIN;
	static volatile int32_t t71 = -1;

	t71 = (x285<(x286<(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = INT32_MIN;
	static int32_t x291 = -1;
	uint64_t x292 = 333960383068LLU;
	volatile int32_t t72 = -8748;

	t72 = (x289<(x290<(x291|x292)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MAX;
	uint8_t x294 = 1U;
	int16_t x295 = 1;
	static int8_t x296 = INT8_MIN;
	int32_t t73 = 119;

	t73 = (x293<(x294<(x295|x296)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 194687;
	volatile int16_t x298 = INT16_MIN;
	uint16_t x299 = UINT16_MAX;
	uint8_t x300 = 14U;
	int32_t t74 = -1013543;

	t74 = (x297<(x298<(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 8681U;
	volatile int16_t x302 = INT16_MIN;
	uint16_t x304 = 7488U;
	int32_t t75 = 2393;

	t75 = (x301<(x302<(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x308 = INT8_MAX;
	static int32_t t76 = -13;

	t76 = (x305<(x306<(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = -905481930114732LL;
	uint32_t x311 = 213008U;
	static uint32_t x312 = 966853U;
	static int32_t t77 = -7130;

	t77 = (x309<(x310<(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint8_t x314 = UINT8_MAX;
	int16_t x315 = 1489;
	volatile int32_t t78 = -2083;

	t78 = (x313<(x314<(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = -1;
	int8_t x318 = INT8_MAX;
	int64_t x319 = INT64_MAX;
	volatile int32_t x320 = INT32_MAX;
	int32_t t79 = -3382442;

	t79 = (x317<(x318<(x319|x320)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 26587216LLU;
	int8_t x322 = INT8_MIN;
	int8_t x323 = -26;
	int16_t x324 = INT16_MIN;
	int32_t t80 = -27787;

	t80 = (x321<(x322<(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x325 = INT16_MIN;
	int16_t x328 = -377;
	static int32_t t81 = -4692;

	t81 = (x325<(x326<(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x329 = 5807U;
	uint32_t x331 = 7709294U;
	static uint8_t x332 = 11U;
	static int32_t t82 = 186694;

	t82 = (x329<(x330<(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = -1LL;
	int8_t x336 = INT8_MIN;
	int32_t t83 = 12252;

	t83 = (x333<(x334<(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x338 = UINT16_MAX;
	int16_t x339 = -1;
	volatile int32_t t84 = -6214;

	t84 = (x337<(x338<(x339|x340)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x342 = 388;
	static volatile uint8_t x343 = 3U;
	volatile int64_t x344 = INT64_MIN;
	static int32_t t85 = 63;

	t85 = (x341<(x342<(x343|x344)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MAX;
	static uint16_t x346 = 8U;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = -264762494;

	t86 = (x345<(x346<(x347|x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x350 = INT64_MAX;
	int64_t x351 = INT64_MIN;
	int16_t x352 = -5400;
	volatile int32_t t87 = -1870814;

	t87 = (x349<(x350<(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = 0;
	int16_t x354 = -1;
	int64_t x355 = INT64_MAX;
	int32_t t88 = -13349211;

	t88 = (x353<(x354<(x355|x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x357 = INT64_MAX;
	volatile uint64_t x358 = 200729LLU;
	volatile int64_t x359 = 2093870649080LL;

	t89 = (x357<(x358<(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 26U;
	int16_t x363 = INT16_MIN;
	static uint8_t x364 = 0U;
	int32_t t90 = -1950;

	t90 = (x361<(x362<(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x365 = 6LL;
	static int32_t x367 = INT32_MAX;
	uint16_t x368 = UINT16_MAX;
	int32_t t91 = -1;

	t91 = (x365<(x366<(x367|x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 1U;
	volatile int16_t x370 = INT16_MIN;
	int16_t x371 = 12109;
	uint8_t x372 = UINT8_MAX;
	static int32_t t92 = 211802;

	t92 = (x369<(x370<(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	static uint32_t x374 = 3436040U;
	int8_t x375 = -1;
	volatile int64_t x376 = INT64_MIN;
	volatile int32_t t93 = 224188050;

	t93 = (x373<(x374<(x375|x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	static uint8_t x378 = UINT8_MAX;
	int16_t x379 = 2;
	static int32_t x380 = INT32_MIN;
	int32_t t94 = -5320;

	t94 = (x377<(x378<(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = 1153437638177932130LL;
	static int32_t t95 = -22;

	t95 = (x381<(x382<(x383|x384)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x386 = UINT16_MAX;
	static int32_t x387 = INT32_MIN;
	uint8_t x388 = 14U;
	static int32_t t96 = 100;

	t96 = (x385<(x386<(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x389 = UINT64_MAX;
	uint32_t x390 = 10U;
	volatile int32_t t97 = 7844489;

	t97 = (x389<(x390<(x391|x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	int16_t x394 = INT16_MIN;
	int64_t x395 = INT64_MAX;
	int16_t x396 = 5965;
	volatile int32_t t98 = 56166;

	t98 = (x393<(x394<(x395|x396)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x397 = 1U;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MIN;
	int8_t x400 = -63;
	int32_t t99 = -1;

	t99 = (x397<(x398<(x399|x400)));

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

