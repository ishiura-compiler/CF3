#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = 820011054U;
int8_t x12 = INT8_MIN;
int32_t x13 = INT32_MIN;
int16_t x16 = INT16_MIN;
volatile int16_t x25 = -1;
int8_t x36 = 46;
static uint64_t t6 = 9037287478874536LLU;
uint32_t x38 = 5548541U;
int64_t x73 = INT64_MAX;
static int64_t t12 = -1490719LL;
uint64_t t13 = 109LLU;
int8_t x86 = -18;
static int8_t x88 = INT8_MIN;
int8_t x89 = INT8_MIN;
uint16_t x91 = 1U;
volatile int8_t x92 = -1;
static uint32_t x93 = UINT32_MAX;
int32_t x102 = -4617;
static int32_t x106 = -1643;
int8_t x113 = INT8_MIN;
int32_t x115 = 6;
uint8_t x116 = UINT8_MAX;
int16_t x117 = INT16_MIN;
uint16_t x120 = UINT16_MAX;
int16_t x144 = INT16_MAX;
static int8_t x158 = -13;
int8_t x163 = 1;
volatile int64_t t26 = -193735000640336891LL;
volatile int64_t x165 = -666588440LL;
volatile uint64_t x166 = 32917403LLU;
uint16_t x191 = UINT16_MAX;
volatile int32_t t30 = 519074825;
volatile int32_t x197 = -1;
volatile int8_t x210 = INT8_MIN;
static volatile int32_t x212 = -14266;
static int32_t t33 = -5863190;
int32_t x214 = INT32_MIN;
uint64_t t34 = 725LLU;
uint32_t x218 = 5991U;
uint16_t x247 = 44U;
int64_t x253 = -445LL;
int8_t x288 = INT8_MAX;
volatile int16_t x301 = -115;
volatile uint16_t x302 = UINT16_MAX;
static int32_t t46 = -20;
static uint32_t x305 = UINT32_MAX;
uint64_t x311 = 15LLU;
int32_t x318 = 324727;
static int64_t x334 = INT64_MIN;
uint64_t x335 = 2191457193030LLU;
uint64_t t50 = 1919670587896824LLU;
uint8_t x350 = UINT8_MAX;
static uint32_t t52 = 45U;
uint32_t x364 = 9635279U;
volatile uint64_t t53 = 193929LLU;
static volatile int32_t t59 = 4;
int32_t x406 = 371288;
uint8_t x424 = UINT8_MAX;
volatile int64_t x425 = 4202785824755365088LL;
uint16_t x426 = 16031U;
int64_t t62 = -201314404702773767LL;
static int16_t x434 = 0;
uint8_t x435 = 2U;
static uint64_t x441 = 537892700821347LLU;
volatile uint64_t x463 = 2088437LLU;
static volatile int8_t x465 = 5;
volatile int16_t x473 = INT16_MIN;
int32_t t68 = 261552;
int64_t x484 = -561LL;
static uint8_t x493 = 3U;
volatile int32_t x506 = -580418;
uint16_t x513 = 11U;
static uint8_t x514 = 31U;
int16_t x518 = INT16_MAX;
int16_t x521 = INT16_MIN;
static volatile uint64_t t77 = 1298189943605LLU;
int32_t x529 = 360239;
uint16_t x540 = UINT16_MAX;
static uint64_t t80 = 2069002700LLU;
volatile int64_t t82 = 1451LL;
static int16_t x553 = -491;
int32_t x555 = -1;
int16_t x560 = -5269;
uint16_t x563 = UINT16_MAX;
int32_t x572 = INT32_MIN;
uint32_t x578 = 580633U;
uint32_t x580 = 50205U;
int16_t x609 = 8643;
volatile uint32_t x618 = UINT32_MAX;
uint16_t x623 = UINT16_MAX;
uint64_t x624 = 54122739LLU;
volatile uint64_t x639 = UINT64_MAX;
uint32_t x642 = 2992U;
volatile uint32_t t97 = 48U;
volatile uint32_t t98 = 1U;
int64_t t99 = 46538055LL;


void f0(void) {
	volatile uint16_t x1 = 1U;
	static volatile int32_t x2 = INT32_MIN;
	uint8_t x4 = 56U;
	uint32_t t0 = 102711U;

	t0 = (x1+(x2-(x3*x4)));

	if (t0 != 3471504881U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x9 = INT8_MIN;
	static int64_t x10 = 503490187LL;
	uint16_t x11 = 3U;
	int64_t t1 = 32780385488751LL;

	t1 = (x9+(x10-(x11*x12)));

	if (t1 != 503490443LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x14 = 111673U;
	volatile uint32_t x15 = UINT32_MAX;
	static uint32_t t2 = 4074U;

	t2 = (x13+(x14-(x15*x16)));

	if (t2 != 2147562553U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x21 = -35;
	uint8_t x22 = UINT8_MAX;
	static uint32_t x23 = UINT32_MAX;
	int32_t x24 = INT32_MIN;
	volatile uint32_t t3 = 2912334U;

	t3 = (x21+(x22-(x23*x24)));

	if (t3 != 2147483868U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x26 = 110U;
	uint32_t x27 = 45956433U;
	static int16_t x28 = 7982;
	uint32_t t4 = 90325U;

	t4 = (x25+(x26-(x27*x28)));

	if (t4 != 2542939359U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = -1LL;
	int8_t x30 = -1;
	static uint32_t x31 = 149566U;
	static int32_t x32 = INT32_MAX;
	volatile int64_t t5 = 528470214563LL;

	t5 = (x29+(x30-(x31*x32)));

	if (t5 != 149564LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint64_t x33 = 6130678615LLU;
	volatile uint32_t x34 = UINT32_MAX;
	volatile int16_t x35 = INT16_MIN;

	t6 = (x33+(x34-(x35*x36)));

	if (t6 != 6132185942LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = 2U;
	int64_t x39 = 45884957LL;
	int32_t x40 = 1009595375;
	volatile int64_t t7 = -3LL;

	t7 = (x37+(x38-(x39*x40)));

	if (t7 != -46325240363725332LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x41 = 1;
	int16_t x42 = -20;
	int8_t x43 = -2;
	static int8_t x44 = INT8_MAX;
	volatile int32_t t8 = -2983493;

	t8 = (x41+(x42-(x43*x44)));

	if (t8 != 235) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 2U;
	static int8_t x46 = INT8_MIN;
	int64_t x47 = -5334264067993LL;
	volatile uint16_t x48 = 1U;
	volatile int64_t t9 = 2044323LL;

	t9 = (x45+(x46-(x47*x48)));

	if (t9 != 5334264067867LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x65 = INT32_MAX;
	uint64_t x66 = 489LLU;
	int64_t x67 = -3103248900202LL;
	uint8_t x68 = 3U;
	volatile uint64_t t10 = 92LLU;

	t10 = (x65+(x66-(x67*x68)));

	if (t10 != 9311894184742LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x69 = -313192;
	uint8_t x70 = UINT8_MAX;
	uint32_t x71 = 539324142U;
	uint64_t x72 = UINT64_MAX;
	static volatile uint64_t t11 = 20332LLU;

	t11 = (x69+(x70-(x71*x72)));

	if (t11 != 539011205LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x74 = -974997;
	volatile int8_t x75 = INT8_MAX;
	uint16_t x76 = 0U;

	t12 = (x73+(x74-(x75*x76)));

	if (t12 != 9223372036853800810LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x81 = INT8_MIN;
	int32_t x82 = INT32_MIN;
	uint64_t x83 = 14099876LLU;
	int64_t x84 = INT64_MIN;

	t13 = (x81+(x82-(x83*x84)));

	if (t13 != 18446744071562067840LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x85 = INT32_MIN;
	static uint16_t x87 = 7405U;
	volatile int32_t t14 = -16;

	t14 = (x85+(x86-(x87*x88)));

	if (t14 != -2146535826) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x90 = -12993LL;
	volatile int64_t t15 = 12824232631LL;

	t15 = (x89+(x90-(x91*x92)));

	if (t15 != -13120LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x94 = UINT8_MAX;
	int32_t x95 = -1;
	uint16_t x96 = 1U;
	uint32_t t16 = 529123058U;

	t16 = (x93+(x94-(x95*x96)));

	if (t16 != 255U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x101 = 3133LL;
	volatile uint16_t x103 = 1210U;
	uint32_t x104 = UINT32_MAX;
	volatile int64_t t17 = 377430905LL;

	t17 = (x101+(x102-(x103*x104)));

	if (t17 != 4294967022LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x107 = 20U;
	int16_t x108 = 1;
	volatile int32_t t18 = 1;

	t18 = (x105+(x106-(x107*x108)));

	if (t18 != -1791) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = -345LL;
	static volatile int16_t x111 = -1;
	static volatile uint16_t x112 = 2140U;
	uint64_t t19 = 1269988940806LLU;

	t19 = (x109+(x110-(x111*x112)));

	if (t19 != 1794LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x114 = 1382U;
	volatile int32_t t20 = -143852022;

	t20 = (x113+(x114-(x115*x116)));

	if (t20 != -276) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x118 = -1;
	uint32_t x119 = 26311U;
	static uint32_t t21 = 12U;

	t21 = (x117+(x118-(x119*x120)));

	if (t21 != 2570643142U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x141 = INT8_MIN;
	int32_t x142 = -18;
	uint8_t x143 = 64U;
	int32_t t22 = -3399;

	t22 = (x141+(x142-(x143*x144)));

	if (t22 != -2097234) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x145 = 2U;
	uint32_t x146 = UINT32_MAX;
	int64_t x147 = -330537437LL;
	uint16_t x148 = 205U;
	volatile int64_t t23 = -3LL;

	t23 = (x145+(x146-(x147*x148)));

	if (t23 != 72055141882LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x153 = INT8_MAX;
	int16_t x154 = INT16_MIN;
	int16_t x155 = -1;
	static uint16_t x156 = UINT16_MAX;
	static volatile int32_t t24 = 18487;

	t24 = (x153+(x154-(x155*x156)));

	if (t24 != 32894) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x157 = INT64_MIN;
	volatile int64_t x159 = -1LL;
	static uint16_t x160 = 26381U;
	volatile int64_t t25 = 18841768730LL;

	t25 = (x157+(x158-(x159*x160)));

	if (t25 != -9223372036854749440LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x161 = INT64_MIN;
	int64_t x162 = 3994053511LL;
	static volatile uint16_t x164 = 4U;

	t26 = (x161+(x162-(x163*x164)));

	if (t26 != -9223372032860722301LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x167 = -1LL;
	int64_t x168 = -839972873LL;
	volatile uint64_t t27 = 58254019204448LLU;

	t27 = (x165+(x166-(x167*x168)));

	if (t27 != 18446744072235907706LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x177 = INT64_MAX;
	uint8_t x178 = 5U;
	int8_t x179 = -4;
	static uint64_t x180 = 5108417327360856LLU;
	uint64_t t28 = 8775988LLU;

	t28 = (x177+(x178-(x179*x180)));

	if (t28 != 9243805706164219236LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x181 = UINT8_MAX;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 0LLU;
	volatile int32_t x184 = INT32_MIN;
	uint64_t t29 = 366949LLU;

	t29 = (x181+(x182-(x183*x184)));

	if (t29 != 18446744071562068223LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = -7526;
	int16_t x192 = -521;

	t30 = (x189+(x190-(x191*x192)));

	if (t30 != 34136464) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = UINT64_MAX;
	static int16_t x200 = 39;
	uint64_t t31 = 54812345522631LLU;

	t31 = (x197+(x198-(x199*x200)));

	if (t31 != 293LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x201 = INT16_MAX;
	volatile uint64_t x202 = UINT64_MAX;
	uint8_t x203 = UINT8_MAX;
	uint16_t x204 = 6U;
	static uint64_t t32 = 164558186796LLU;

	t32 = (x201+(x202-(x203*x204)));

	if (t32 != 31236LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x209 = -15;
	uint8_t x211 = 6U;

	t33 = (x209+(x210-(x211*x212)));

	if (t33 != 85453) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x213 = -6;
	uint32_t x215 = 37U;
	uint64_t x216 = UINT64_MAX;

	t34 = (x213+(x214-(x215*x216)));

	if (t34 != 18446744071562067999LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x217 = 75523;
	static int16_t x219 = -1;
	uint32_t x220 = 163U;
	volatile uint32_t t35 = 249U;

	t35 = (x217+(x218-(x219*x220)));

	if (t35 != 81677U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x225 = INT8_MAX;
	uint8_t x226 = 0U;
	int8_t x227 = INT8_MAX;
	static uint8_t x228 = UINT8_MAX;
	volatile int32_t t36 = -255563;

	t36 = (x225+(x226-(x227*x228)));

	if (t36 != -32258) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x237 = -141;
	static uint8_t x238 = 12U;
	int16_t x239 = INT16_MAX;
	uint64_t x240 = UINT64_MAX;
	uint64_t t37 = 8600638412280255LLU;

	t37 = (x237+(x238-(x239*x240)));

	if (t37 != 32638LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x241 = 8867LLU;
	uint64_t x242 = UINT64_MAX;
	uint64_t x243 = 974264111LLU;
	int8_t x244 = INT8_MIN;
	volatile uint64_t t38 = 7LLU;

	t38 = (x241+(x242-(x243*x244)));

	if (t38 != 124705815074LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x245 = 39LLU;
	uint16_t x246 = UINT16_MAX;
	volatile int16_t x248 = INT16_MIN;
	uint64_t t39 = 5051237340586LLU;

	t39 = (x245+(x246-(x247*x248)));

	if (t39 != 1507366LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = 227LLU;
	uint32_t x251 = 17U;
	int32_t x252 = INT32_MIN;
	uint64_t t40 = 162LLU;

	t40 = (x249+(x250-(x251*x252)));

	if (t40 != 18446744069414584547LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x254 = 184172376395752LLU;
	volatile int16_t x255 = -1;
	static volatile int8_t x256 = INT8_MIN;
	volatile uint64_t t41 = 1204LLU;

	t41 = (x253+(x254-(x255*x256)));

	if (t41 != 184172376395179LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x281 = UINT8_MAX;
	uint16_t x282 = 19U;
	volatile int64_t x283 = -1LL;
	uint32_t x284 = UINT32_MAX;
	volatile int64_t t42 = 54711LL;

	t42 = (x281+(x282-(x283*x284)));

	if (t42 != 4294967569LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x285 = 0U;
	int8_t x286 = -3;
	volatile int16_t x287 = INT16_MIN;
	int32_t t43 = 240093;

	t43 = (x285+(x286-(x287*x288)));

	if (t43 != 4161533) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x289 = INT8_MIN;
	static int64_t x290 = 345292LL;
	uint32_t x291 = 3147U;
	uint8_t x292 = 3U;
	int64_t t44 = -135784935220362311LL;

	t44 = (x289+(x290-(x291*x292)));

	if (t44 != 335723LL) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x297 = 52748LL;
	int16_t x298 = -1;
	int8_t x299 = 52;
	int16_t x300 = -27;
	volatile int64_t t45 = 7720480LL;

	t45 = (x297+(x298-(x299*x300)));

	if (t45 != 54151LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x303 = -1;
	static int32_t x304 = -1;

	t46 = (x301+(x302-(x303*x304)));

	if (t46 != 65419) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x306 = INT32_MAX;
	int64_t x307 = -302171961LL;
	int16_t x308 = INT16_MIN;
	volatile int64_t t47 = -4022751140LL;

	t47 = (x305+(x306-(x307*x308)));

	if (t47 != -9895128367106LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x309 = 7U;
	static volatile int8_t x310 = INT8_MIN;
	int32_t x312 = INT32_MIN;
	static uint64_t t48 = 5885502LLU;

	t48 = (x309+(x310-(x311*x312)));

	if (t48 != 32212254599LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x317 = -1;
	uint16_t x319 = 1U;
	uint64_t x320 = UINT64_MAX;
	uint64_t t49 = 79LLU;

	t49 = (x317+(x318-(x319*x320)));

	if (t49 != 324727LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x333 = INT32_MIN;
	uint32_t x336 = 486900038U;

	t50 = (x333+(x334-(x335*x336)));

	if (t50 != 12113937748180950748LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x341 = -5;
	int8_t x342 = 0;
	int16_t x343 = -1;
	uint32_t x344 = UINT32_MAX;
	static volatile uint32_t t51 = 82553U;

	t51 = (x341+(x342-(x343*x344)));

	if (t51 != 4294967290U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x349 = -1;
	uint32_t x351 = 3121U;
	uint32_t x352 = 83412U;

	t52 = (x349+(x350-(x351*x352)));

	if (t52 != 4034638698U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x361 = INT64_MAX;
	uint8_t x362 = UINT8_MAX;
	uint64_t x363 = UINT64_MAX;

	t53 = (x361+(x362-(x363*x364)));

	if (t53 != 9223372036864411341LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x365 = -1779350008540593061LL;
	uint8_t x366 = 2U;
	int16_t x367 = 11818;
	uint32_t x368 = 29U;
	int64_t t54 = -98448582254LL;

	t54 = (x365+(x366-(x367*x368)));

	if (t54 != -1779350004245968485LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MIN;
	uint32_t x379 = 25U;
	int32_t x380 = -1;
	volatile uint32_t t55 = 5U;

	t55 = (x377+(x378-(x379*x380)));

	if (t55 != 4294934425U) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x381 = -1;
	int32_t x382 = INT32_MAX;
	int16_t x383 = INT16_MIN;
	static int64_t x384 = -1LL;
	volatile int64_t t56 = 4317LL;

	t56 = (x381+(x382-(x383*x384)));

	if (t56 != 2147450878LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x385 = -1;
	uint32_t x386 = 33809U;
	static volatile int32_t x387 = INT32_MIN;
	uint32_t x388 = 31U;
	volatile uint32_t t57 = 55089U;

	t57 = (x385+(x386-(x387*x388)));

	if (t57 != 2147517456U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x397 = INT32_MIN;
	uint8_t x398 = 107U;
	int32_t x399 = -1;
	static uint8_t x400 = UINT8_MAX;
	volatile int32_t t58 = -63149996;

	t58 = (x397+(x398-(x399*x400)));

	if (t58 != -2147483286) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x401 = -15;
	uint16_t x402 = 1306U;
	int8_t x403 = -1;
	static uint16_t x404 = 8U;

	t59 = (x401+(x402-(x403*x404)));

	if (t59 != 1299) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x405 = 115901941U;
	uint64_t x407 = UINT64_MAX;
	uint8_t x408 = 119U;
	volatile uint64_t t60 = 9LLU;

	t60 = (x405+(x406-(x407*x408)));

	if (t60 != 116273348LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x421 = 933U;
	uint64_t x422 = 179LLU;
	volatile int8_t x423 = INT8_MIN;
	volatile uint64_t t61 = 932256619533746LLU;

	t61 = (x421+(x422-(x423*x424)));

	if (t61 != 33752LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x427 = 91U;
	uint32_t x428 = 589488705U;

	t62 = (x425+(x426-(x427*x428)));

	if (t62 != 4202785826946483812LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x433 = 14796U;
	volatile int8_t x436 = 24;
	volatile int32_t t63 = 0;

	t63 = (x433+(x434-(x435*x436)));

	if (t63 != 14748) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x442 = 4;
	int32_t x443 = INT32_MIN;
	uint64_t x444 = 46167412141LLU;
	uint64_t t64 = 122849LLU;

	t64 = (x441+(x442-(x443*x444)));

	if (t64 != 6910580167427233639LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x449 = INT16_MAX;
	int16_t x450 = -1;
	static uint8_t x451 = 5U;
	int8_t x452 = INT8_MAX;
	int32_t t65 = -189266717;

	t65 = (x449+(x450-(x451*x452)));

	if (t65 != 32131) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x461 = -7641;
	int16_t x462 = INT16_MIN;
	int16_t x464 = INT16_MIN;
	uint64_t t66 = 4480684356LLU;

	t66 = (x461+(x462-(x463*x464)));

	if (t66 != 68433863207LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x466 = 270;
	uint16_t x467 = 7U;
	static int16_t x468 = INT16_MIN;
	volatile int32_t t67 = 0;

	t67 = (x465+(x466-(x467*x468)));

	if (t67 != 229651) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x474 = INT8_MAX;
	uint16_t x475 = UINT16_MAX;
	static int32_t x476 = -1;

	t68 = (x473+(x474-(x475*x476)));

	if (t68 != 32894) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x481 = 254LLU;
	uint64_t x482 = 294023199589LLU;
	uint8_t x483 = UINT8_MAX;
	uint64_t t69 = 413801748884785590LLU;

	t69 = (x481+(x482-(x483*x484)));

	if (t69 != 294023342898LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x489 = INT8_MIN;
	int8_t x490 = -17;
	int16_t x491 = 41;
	volatile int8_t x492 = INT8_MAX;
	int32_t t70 = 7;

	t70 = (x489+(x490-(x491*x492)));

	if (t70 != -5352) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x494 = 1U;
	uint32_t x495 = UINT32_MAX;
	int8_t x496 = INT8_MIN;
	uint32_t t71 = 1U;

	t71 = (x493+(x494-(x495*x496)));

	if (t71 != 4294967172U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x497 = UINT16_MAX;
	uint64_t x498 = 4692004390367LLU;
	volatile uint32_t x499 = 1U;
	uint16_t x500 = UINT16_MAX;
	uint64_t t72 = 419566101615254LLU;

	t72 = (x497+(x498-(x499*x500)));

	if (t72 != 4692004390367LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x505 = 1U;
	uint8_t x507 = UINT8_MAX;
	int16_t x508 = 146;
	int32_t t73 = 5;

	t73 = (x505+(x506-(x507*x508)));

	if (t73 != -617647) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x509 = INT8_MIN;
	uint32_t x510 = 1332175U;
	int32_t x511 = -1;
	int64_t x512 = -28809627421LL;
	int64_t t74 = -2365LL;

	t74 = (x509+(x510-(x511*x512)));

	if (t74 != -28808295374LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x515 = 392059406737623257LLU;
	volatile uint16_t x516 = 3902U;
	uint64_t t75 = 234702362201381494LLU;

	t75 = (x513+(x514-(x515*x516)));

	if (t75 != 1263953027686835356LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x517 = -169;
	int32_t x519 = -1;
	volatile uint16_t x520 = 7496U;
	int32_t t76 = 619327;

	t76 = (x517+(x518-(x519*x520)));

	if (t76 != 40094) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x522 = 26925U;
	volatile uint32_t x523 = UINT32_MAX;
	uint64_t x524 = UINT64_MAX;

	t77 = (x521+(x522-(x523*x524)));

	if (t77 != 4294961452LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x530 = -11;
	int16_t x531 = INT16_MAX;
	uint64_t x532 = UINT64_MAX;
	static uint64_t t78 = 4017636300017LLU;

	t78 = (x529+(x530-(x531*x532)));

	if (t78 != 392995LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x533 = 114U;
	int8_t x534 = -1;
	int16_t x535 = 1969;
	int8_t x536 = INT8_MAX;
	volatile int32_t t79 = 1039677441;

	t79 = (x533+(x534-(x535*x536)));

	if (t79 != -249950) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x537 = 14400931626665LLU;
	uint16_t x538 = 10592U;
	static uint64_t x539 = UINT64_MAX;

	t80 = (x537+(x538-(x539*x540)));

	if (t80 != 14400931702792LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x545 = -63568710LL;
	volatile uint64_t x546 = 2977754645089797225LLU;
	volatile uint16_t x547 = UINT16_MAX;
	int8_t x548 = 0;
	volatile uint64_t t81 = 2053LLU;

	t81 = (x545+(x546-(x547*x548)));

	if (t81 != 2977754645026228515LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x549 = INT64_MAX;
	int64_t x550 = INT64_MIN;
	uint16_t x551 = UINT16_MAX;
	int16_t x552 = -9;

	t82 = (x549+(x550-(x551*x552)));

	if (t82 != 589814LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x554 = 27773363217962LL;
	int8_t x556 = INT8_MAX;
	volatile int64_t t83 = 440289180254747LL;

	t83 = (x553+(x554-(x555*x556)));

	if (t83 != 27773363217598LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x557 = UINT8_MAX;
	int8_t x558 = -1;
	int32_t x559 = -1;
	volatile int32_t t84 = 132347;

	t84 = (x557+(x558-(x559*x560)));

	if (t84 != -5015) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x561 = UINT16_MAX;
	uint32_t x562 = 25U;
	uint32_t x564 = 5289519U;
	uint32_t t85 = 1704216U;

	t85 = (x561+(x562-(x563*x564)));

	if (t85 != 1243788871U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x569 = 290025936LLU;
	static uint8_t x570 = 5U;
	uint64_t x571 = UINT64_MAX;
	uint64_t t86 = 2LLU;

	t86 = (x569+(x570-(x571*x572)));

	if (t86 != 18446744071852093909LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x573 = UINT16_MAX;
	int16_t x574 = INT16_MIN;
	int64_t x575 = INT64_MIN;
	uint64_t x576 = UINT64_MAX;
	volatile uint64_t t87 = 29LLU;

	t87 = (x573+(x574-(x575*x576)));

	if (t87 != 9223372036854808575LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x577 = 1U;
	uint8_t x579 = UINT8_MAX;
	static uint32_t t88 = 15169U;

	t88 = (x577+(x578-(x579*x580)));

	if (t88 != 4282745655U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x581 = INT32_MIN;
	volatile int64_t x582 = INT64_MAX;
	int32_t x583 = INT32_MAX;
	uint32_t x584 = UINT32_MAX;
	static int64_t t89 = 12649145LL;

	t89 = (x581+(x582-(x583*x584)));

	if (t89 != 9223372032559808510LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x589 = INT64_MAX;
	static int16_t x590 = 3;
	int8_t x591 = -19;
	static int32_t x592 = -104;
	int64_t t90 = 0LL;

	t90 = (x589+(x590-(x591*x592)));

	if (t90 != 9223372036854773834LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x610 = UINT8_MAX;
	uint32_t x611 = 195802598U;
	int8_t x612 = -39;
	uint32_t t91 = 93049U;

	t91 = (x609+(x610-(x611*x612)));

	if (t91 != 3341342924U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x613 = -1;
	uint32_t x614 = 123U;
	uint16_t x615 = UINT16_MAX;
	int16_t x616 = INT16_MIN;
	uint32_t t92 = 3828366U;

	t92 = (x613+(x614-(x615*x616)));

	if (t92 != 2147451002U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x617 = 7U;
	uint16_t x619 = 48U;
	int16_t x620 = -1;
	static volatile uint32_t t93 = 55373U;

	t93 = (x617+(x618-(x619*x620)));

	if (t93 != 54U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x621 = 13U;
	static volatile int32_t x622 = INT32_MIN;
	volatile uint64_t t94 = 288LLU;

	t94 = (x621+(x622-(x623*x624)));

	if (t94 != 18446740524628367616LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x633 = UINT16_MAX;
	int16_t x634 = -1;
	uint64_t x635 = 1658712227808307596LLU;
	int8_t x636 = INT8_MIN;
	volatile uint64_t t95 = 4130564821766796LLU;

	t95 = (x633+(x634-(x635*x636)));

	if (t95 != 9400980348658370046LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x637 = INT32_MAX;
	static volatile int16_t x638 = INT16_MAX;
	uint64_t x640 = 1811456851159LLU;
	volatile uint64_t t96 = 2250LLU;

	t96 = (x637+(x638-(x639*x640)));

	if (t96 != 1813604367573LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x641 = INT8_MIN;
	uint16_t x643 = 4U;
	static volatile uint16_t x644 = 22U;

	t97 = (x641+(x642-(x643*x644)));

	if (t97 != 2776U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x649 = UINT16_MAX;
	uint32_t x650 = 4040U;
	int16_t x651 = -1;
	static int16_t x652 = -1;

	t98 = (x649+(x650-(x651*x652)));

	if (t98 != 69574U) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x653 = 61712703012989LL;
	int32_t x654 = -1;
	volatile uint8_t x655 = 25U;
	uint32_t x656 = UINT32_MAX;

	t99 = (x653+(x654-(x655*x656)));

	if (t99 != 61712703013013LL) { NG(); } else { ; }
	
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

