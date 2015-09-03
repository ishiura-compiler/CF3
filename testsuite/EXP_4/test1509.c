#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t0 = -3629907919344LL;
int32_t t1 = 0;
static uint8_t x14 = 1U;
int8_t x18 = INT8_MIN;
static volatile uint16_t x56 = 0U;
static int32_t x58 = -1;
volatile int8_t x59 = -1;
int32_t x67 = -1;
static int32_t t13 = INT32_MIN;
int8_t x79 = 7;
int16_t x90 = -1;
int8_t x92 = -1;
int64_t x95 = -1876744510LL;
volatile int32_t t19 = 204070;
int16_t x101 = INT16_MAX;
int32_t x108 = INT32_MIN;
static uint16_t x114 = 524U;
static volatile int32_t t23 = 28;
static int8_t x118 = INT8_MAX;
static volatile uint32_t x146 = 125U;
int16_t x150 = -1;
int32_t x152 = INT32_MIN;
int8_t x156 = -47;
uint8_t x158 = 99U;
uint16_t x165 = 2205U;
static volatile int64_t x166 = -18145303956875599LL;
uint32_t x168 = UINT32_MAX;
int32_t x176 = INT32_MIN;
int32_t x177 = -1;
uint64_t x182 = 127282686230064LLU;
volatile int16_t x196 = 10550;
int8_t x197 = INT8_MIN;
int16_t x202 = INT16_MAX;
uint32_t t45 = 35603068U;
static int8_t x209 = INT8_MIN;
uint32_t x210 = UINT32_MAX;
int8_t x224 = 14;
int16_t x226 = INT16_MIN;
int32_t t49 = 129961;
volatile int16_t x236 = -8;
static int64_t x237 = 5LL;
static int64_t t52 = -126449LL;
volatile int32_t x242 = -111005126;
int32_t t55 = 7643;
uint32_t x253 = 0U;
int64_t x254 = -1391748725LL;
uint64_t x255 = 0LLU;
static uint64_t x256 = 1846848979LLU;
static int64_t x261 = INT64_MIN;
volatile uint32_t x269 = 182158U;
static uint16_t x271 = 1U;
volatile uint32_t t59 = 10019U;
static int32_t t61 = 4;
uint64_t x281 = 23863500403LLU;
static uint64_t t62 = 1202048424843LLU;
volatile int64_t t63 = -772803102550088977LL;
uint64_t x295 = UINT64_MAX;
uint8_t x297 = UINT8_MAX;
volatile int64_t t66 = -3998424687691189125LL;
uint8_t x303 = 81U;
int64_t x305 = -366974121872866LL;
static int32_t x312 = -103779085;
static int8_t x321 = -1;
static int32_t x328 = -274;
static volatile int64_t x330 = -12563278714LL;
int16_t x331 = INT16_MIN;
int32_t x348 = 35857463;
static volatile uint64_t t74 = 67164534480542626LLU;
static uint8_t x350 = 4U;
volatile int32_t t75 = 511;
uint16_t x366 = 2388U;
int32_t x367 = -3520480;
volatile int16_t x371 = 6385;
uint64_t x378 = 834LLU;
static volatile int16_t x384 = INT16_MIN;
int16_t x390 = 1;
static uint16_t x396 = UINT16_MAX;
uint64_t x398 = 2LLU;
int16_t x399 = INT16_MIN;
volatile int32_t x400 = INT32_MIN;
uint16_t x403 = UINT16_MAX;
volatile uint64_t t87 = 309418992LLU;
volatile uint16_t x405 = 207U;
uint64_t x407 = 3551718689085671740LLU;
uint64_t x408 = 252LLU;
int32_t x409 = -1;
volatile uint64_t t89 = 391411694245322LLU;
uint8_t x419 = UINT8_MAX;
volatile uint64_t x428 = UINT64_MAX;
uint8_t x429 = UINT8_MAX;
int16_t x442 = INT16_MIN;
int64_t x444 = INT64_MAX;
volatile int32_t t96 = 40832;
volatile int8_t x447 = 30;
int64_t x453 = INT64_MAX;
volatile int16_t x455 = INT16_MIN;
volatile int64_t t98 = 422747433073176077LL;
uint32_t x459 = UINT32_MAX;
volatile int32_t t99 = 2;


void f0(void) {
	uint32_t x1 = 2393459U;
	int64_t x2 = -12LL;
	static uint16_t x3 = UINT16_MAX;
	int16_t x4 = INT16_MIN;

	t0 = (x1+(x2^(x3<x4)));

	if (t0 != 2393447LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 285;
	int8_t x10 = 1;
	volatile int32_t x11 = -1;
	int16_t x12 = INT16_MAX;

	t1 = (x9+(x10^(x11<x12)));

	if (t1 != 285) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = -1;
	uint16_t x15 = 15U;
	static int32_t x16 = INT32_MAX;
	volatile int32_t t2 = 489879095;

	t2 = (x13+(x14^(x15<x16)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -1;
	int32_t x19 = INT32_MIN;
	uint8_t x20 = 14U;
	volatile int32_t t3 = 1769988;

	t3 = (x17+(x18^(x19<x20)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MAX;
	uint16_t x22 = 4U;
	uint32_t x23 = UINT32_MAX;
	volatile int32_t x24 = INT32_MAX;
	volatile int32_t t4 = 2;

	t4 = (x21+(x22^(x23<x24)));

	if (t4 != 131) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	uint64_t x26 = 68886925423977LLU;
	int8_t x27 = -1;
	uint32_t x28 = 443U;
	static volatile uint64_t t5 = 3328498LLU;

	t5 = (x25+(x26^(x27<x28)));

	if (t5 != 68886925423976LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x45 = INT32_MIN;
	volatile uint8_t x46 = 2U;
	static uint32_t x47 = UINT32_MAX;
	volatile int64_t x48 = 26694666967415LL;
	static volatile int32_t t6 = -1388;

	t6 = (x45+(x46^(x47<x48)));

	if (t6 != -2147483645) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x49 = INT32_MAX;
	int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MAX;
	int8_t x52 = INT8_MIN;
	int32_t t7 = -119;

	t7 = (x49+(x50^(x51<x52)));

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x53 = 7LLU;
	int8_t x54 = INT8_MIN;
	static volatile uint32_t x55 = 26205U;
	volatile uint64_t t8 = 5019938LLU;

	t8 = (x53+(x54^(x55<x56)));

	if (t8 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x57 = INT16_MIN;
	int8_t x60 = 38;
	volatile int32_t t9 = 618;

	t9 = (x57+(x58^(x59<x60)));

	if (t9 != -32770) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x61 = -175540;
	volatile uint16_t x62 = UINT16_MAX;
	int8_t x63 = -1;
	int64_t x64 = INT64_MAX;
	int32_t t10 = 180256778;

	t10 = (x61+(x62^(x63<x64)));

	if (t10 != -110006) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x65 = UINT64_MAX;
	volatile uint64_t x66 = 464551120314306298LLU;
	static int16_t x68 = 509;
	uint64_t t11 = 1LLU;

	t11 = (x65+(x66^(x67<x68)));

	if (t11 != 464551120314306298LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x69 = INT16_MIN;
	int64_t x70 = INT64_MAX;
	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = INT32_MIN;
	volatile int64_t t12 = -291892107LL;

	t12 = (x69+(x70^(x71<x72)));

	if (t12 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x73 = -1;
	static int32_t x74 = INT32_MIN;
	int8_t x75 = -3;
	int32_t x76 = 2;

	t13 = (x73+(x74^(x75<x76)));

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x77 = 16250015U;
	static int64_t x78 = -126104394936LL;
	uint64_t x80 = UINT64_MAX;
	int64_t t14 = -2984163597LL;

	t14 = (x77+(x78^(x79<x80)));

	if (t14 != -126088144920LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x81 = 3U;
	int64_t x82 = INT64_MIN;
	uint64_t x83 = 311LLU;
	int32_t x84 = INT32_MAX;
	volatile int64_t t15 = 4181058695LL;

	t15 = (x81+(x82^(x83<x84)));

	if (t15 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MAX;
	static int8_t x86 = INT8_MIN;
	volatile int8_t x87 = INT8_MIN;
	int64_t x88 = INT64_MIN;
	static int32_t t16 = -11659;

	t16 = (x85+(x86^(x87<x88)));

	if (t16 != 32639) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x89 = UINT64_MAX;
	uint64_t x91 = 0LLU;
	volatile uint64_t t17 = 4016083435LLU;

	t17 = (x89+(x90^(x91<x92)));

	if (t17 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = -1;
	uint64_t x94 = 132553196941105057LLU;
	volatile uint16_t x96 = 5U;
	volatile uint64_t t18 = 12057201249198LLU;

	t18 = (x93+(x94^(x95<x96)));

	if (t18 != 132553196941105055LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 46U;
	static uint8_t x98 = 14U;
	volatile int64_t x99 = INT64_MIN;
	int64_t x100 = 1138522226356LL;

	t19 = (x97+(x98^(x99<x100)));

	if (t19 != 61) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x102 = UINT32_MAX;
	static int64_t x103 = INT64_MAX;
	uint64_t x104 = 195885949341655355LLU;
	uint32_t t20 = 59U;

	t20 = (x101+(x102^(x103<x104)));

	if (t20 != 32766U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x105 = 0;
	int16_t x106 = 23;
	static uint32_t x107 = 2126181863U;
	volatile int32_t t21 = 1278;

	t21 = (x105+(x106^(x107<x108)));

	if (t21 != 22) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = -1;
	static int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MIN;
	static uint32_t x112 = 500U;
	int32_t t22 = 1;

	t22 = (x109+(x110^(x111<x112)));

	if (t22 != -32769) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x113 = 9U;
	int16_t x115 = -662;
	int16_t x116 = 0;

	t23 = (x113+(x114^(x115<x116)));

	if (t23 != 534) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x117 = -247896;
	uint32_t x119 = 382749900U;
	int8_t x120 = INT8_MAX;
	int32_t t24 = 4377031;

	t24 = (x117+(x118^(x119<x120)));

	if (t24 != -247769) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x121 = -11997190;
	int16_t x122 = -1;
	uint16_t x123 = 1U;
	int8_t x124 = -1;
	int32_t t25 = 707;

	t25 = (x121+(x122^(x123<x124)));

	if (t25 != -11997191) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = 2810;
	static uint64_t x126 = UINT64_MAX;
	int16_t x127 = INT16_MIN;
	int8_t x128 = 6;
	uint64_t t26 = 8379648888580LLU;

	t26 = (x125+(x126^(x127<x128)));

	if (t26 != 2808LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = 77575371492470LL;
	static uint8_t x130 = 4U;
	static int32_t x131 = INT32_MIN;
	int64_t x132 = 5613249599851104LL;
	static volatile int64_t t27 = -171478LL;

	t27 = (x129+(x130^(x131<x132)));

	if (t27 != 77575371492475LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 22U;
	uint64_t x134 = UINT64_MAX;
	static int16_t x135 = 36;
	int16_t x136 = 0;
	volatile uint64_t t28 = 3461LLU;

	t28 = (x133+(x134^(x135<x136)));

	if (t28 != 21LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = 6915429;
	uint16_t x138 = UINT16_MAX;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -24;
	static volatile int32_t t29 = 6980;

	t29 = (x137+(x138^(x139<x140)));

	if (t29 != 6980963) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	static uint64_t x144 = UINT64_MAX;
	volatile int64_t t30 = INT64_MIN;

	t30 = (x141+(x142^(x143<x144)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = 50280474049852652LLU;
	uint16_t x147 = 0U;
	uint16_t x148 = UINT16_MAX;
	uint64_t t31 = 1815LLU;

	t31 = (x145+(x146^(x147<x148)));

	if (t31 != 50280474049852776LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = INT16_MIN;
	int16_t x151 = INT16_MAX;
	static int32_t t32 = -92;

	t32 = (x149+(x150^(x151<x152)));

	if (t32 != -32769) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x153 = -1;
	int64_t x154 = INT64_MIN;
	int64_t x155 = INT64_MIN;
	int64_t t33 = INT64_MIN;

	t33 = (x153+(x154^(x155<x156)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = -1LL;
	volatile int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MAX;
	static int64_t t34 = 22555347270707858LL;

	t34 = (x157+(x158^(x159<x160)));

	if (t34 != 97LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x161 = 0LL;
	int32_t x162 = INT32_MIN;
	static uint32_t x163 = 393049770U;
	int8_t x164 = INT8_MIN;
	static volatile int64_t t35 = 8690LL;

	t35 = (x161+(x162^(x163<x164)));

	if (t35 != -2147483647LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x167 = -517796262302LL;
	volatile int64_t t36 = 2251775010944805LL;

	t36 = (x165+(x166^(x167<x168)));

	if (t36 != -18145303956873395LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x169 = INT64_MAX;
	static int16_t x170 = -1;
	static int16_t x171 = 2231;
	uint64_t x172 = 17071497307382LLU;
	static int64_t t37 = -199LL;

	t37 = (x169+(x170^(x171<x172)));

	if (t37 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x173 = 439;
	uint16_t x174 = 3268U;
	int8_t x175 = INT8_MIN;
	volatile int32_t t38 = -3;

	t38 = (x173+(x174^(x175<x176)));

	if (t38 != 3707) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x178 = -1;
	int32_t x179 = INT32_MIN;
	static volatile int16_t x180 = INT16_MIN;
	static int32_t t39 = -2745336;

	t39 = (x177+(x178^(x179<x180)));

	if (t39 != -3) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = INT32_MAX;
	uint64_t x183 = 1078294871589088LLU;
	volatile int64_t x184 = INT64_MIN;
	uint64_t t40 = 2959LLU;

	t40 = (x181+(x182^(x183<x184)));

	if (t40 != 127284833713712LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MIN;
	static int16_t x187 = -12;
	static uint32_t x188 = UINT32_MAX;
	static int32_t t41 = 0;

	t41 = (x185+(x186^(x187<x188)));

	if (t41 != -65535) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x189 = INT16_MIN;
	uint64_t x190 = 24982LLU;
	static uint8_t x191 = UINT8_MAX;
	int64_t x192 = INT64_MIN;
	static uint64_t t42 = 794928866230858LLU;

	t42 = (x189+(x190^(x191<x192)));

	if (t42 != 18446744073709543830LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x193 = 831U;
	int16_t x194 = 13;
	static uint16_t x195 = 6051U;
	int32_t t43 = 1;

	t43 = (x193+(x194^(x195<x196)));

	if (t43 != 843) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x198 = -92224630LL;
	static int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -57;
	volatile int64_t t44 = 14002456520800LL;

	t44 = (x197+(x198^(x199<x200)));

	if (t44 != -92224757LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x201 = 1023U;
	int16_t x203 = INT16_MIN;
	int8_t x204 = 5;

	t45 = (x201+(x202^(x203<x204)));

	if (t45 != 33789U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x211 = -1;
	int8_t x212 = INT8_MIN;
	uint32_t t46 = 374473664U;

	t46 = (x209+(x210^(x211<x212)));

	if (t46 != 4294967167U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = 122U;
	int64_t x214 = -109LL;
	int8_t x215 = -1;
	volatile uint8_t x216 = UINT8_MAX;
	int64_t t47 = 385LL;

	t47 = (x213+(x214^(x215<x216)));

	if (t47 != 12LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = -1899;
	int32_t x222 = -1;
	static uint8_t x223 = 67U;
	volatile int32_t t48 = -1961327;

	t48 = (x221+(x222^(x223<x224)));

	if (t48 != -1900) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = -1;
	int16_t x227 = -2;
	uint64_t x228 = 2381LLU;

	t49 = (x225+(x226^(x227<x228)));

	if (t49 != -32769) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x229 = 55157340LLU;
	int16_t x230 = -1;
	int8_t x231 = INT8_MAX;
	int32_t x232 = -1;
	volatile uint64_t t50 = 1379904008209024LLU;

	t50 = (x229+(x230^(x231<x232)));

	if (t50 != 55157339LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = INT32_MAX;
	int16_t x234 = -1;
	int8_t x235 = -56;
	int32_t t51 = -122;

	t51 = (x233+(x234^(x235<x236)));

	if (t51 != 2147483645) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x238 = INT64_MIN;
	int64_t x239 = INT64_MIN;
	int32_t x240 = -10;

	t52 = (x237+(x238^(x239<x240)));

	if (t52 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = 5490491326557LLU;
	static int32_t x243 = -8543850;
	volatile int16_t x244 = INT16_MAX;
	static volatile uint64_t t53 = 175443283325041145LLU;

	t53 = (x241+(x242^(x243<x244)));

	if (t53 != 5490380321432LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x245 = INT64_MIN;
	static uint16_t x246 = 7538U;
	uint32_t x247 = 130065U;
	int8_t x248 = -1;
	int64_t t54 = -108836924759832181LL;

	t54 = (x245+(x246^(x247<x248)));

	if (t54 != -9223372036854768269LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile uint16_t x249 = 5683U;
	static uint8_t x250 = 0U;
	uint64_t x251 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;

	t55 = (x249+(x250^(x251<x252)));

	if (t55 != 5683) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t t56 = 79140781902LL;

	t56 = (x253+(x254^(x255<x256)));

	if (t56 != -1391748726LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x262 = INT32_MAX;
	uint16_t x263 = 3U;
	int64_t x264 = INT64_MIN;
	volatile int64_t t57 = -8852508912340945LL;

	t57 = (x261+(x262^(x263<x264)));

	if (t57 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x265 = INT16_MIN;
	int32_t x266 = INT32_MAX;
	static volatile int16_t x267 = INT16_MIN;
	int64_t x268 = -587507817662077245LL;
	volatile int32_t t58 = 0;

	t58 = (x265+(x266^(x267<x268)));

	if (t58 != 2147450879) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x270 = 28200U;
	uint64_t x272 = 206244593LLU;

	t59 = (x269+(x270^(x271<x272)));

	if (t59 != 210359U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MAX;
	uint64_t x275 = 2LLU;
	uint16_t x276 = 1U;
	int32_t t60 = 3285;

	t60 = (x273+(x274^(x275<x276)));

	if (t60 != 98302) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x277 = INT8_MIN;
	static int8_t x278 = INT8_MAX;
	int32_t x279 = INT32_MIN;
	int8_t x280 = INT8_MIN;

	t61 = (x277+(x278^(x279<x280)));

	if (t61 != -2) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x282 = 3969U;
	int8_t x283 = INT8_MIN;
	int32_t x284 = 29487;

	t62 = (x281+(x282^(x283<x284)));

	if (t62 != 23863504371LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x285 = INT64_MIN;
	uint8_t x286 = 87U;
	static int64_t x287 = -156013807LL;
	int64_t x288 = INT64_MIN;

	t63 = (x285+(x286^(x287<x288)));

	if (t63 != -9223372036854775721LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint64_t x289 = 379761686195LLU;
	static volatile uint8_t x290 = UINT8_MAX;
	volatile int32_t x291 = -1;
	volatile int32_t x292 = INT32_MIN;
	uint64_t t64 = 18969LLU;

	t64 = (x289+(x290^(x291<x292)));

	if (t64 != 379761686450LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x293 = INT8_MAX;
	static uint8_t x294 = 1U;
	int64_t x296 = INT64_MIN;
	volatile int32_t t65 = -2886;

	t65 = (x293+(x294^(x295<x296)));

	if (t65 != 128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	static uint32_t x300 = 2U;

	t66 = (x297+(x298^(x299<x300)));

	if (t66 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x301 = -1;
	int64_t x302 = -41050813637972LL;
	int32_t x304 = 747966;
	volatile int64_t t67 = 17070LL;

	t67 = (x301+(x302^(x303<x304)));

	if (t67 != -41050813637972LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = 0;
	int32_t x308 = INT32_MIN;
	volatile uint64_t t68 = 462LLU;

	t68 = (x305+(x306^(x307<x308)));

	if (t68 != 18446377099587678749LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x309 = 90U;
	int16_t x310 = INT16_MAX;
	static volatile int64_t x311 = -1LL;
	volatile int32_t t69 = 7258762;

	t69 = (x309+(x310^(x311<x312)));

	if (t69 != 32857) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = UINT64_MAX;
	uint8_t x314 = 15U;
	static int16_t x315 = INT16_MIN;
	static uint32_t x316 = 45920U;
	volatile uint64_t t70 = 52LLU;

	t70 = (x313+(x314^(x315<x316)));

	if (t70 != 14LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x322 = 1;
	volatile uint8_t x323 = 104U;
	volatile int16_t x324 = -1;
	volatile int32_t t71 = 156113;

	t71 = (x321+(x322^(x323<x324)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x325 = 63226LL;
	int64_t x326 = INT64_MIN;
	int16_t x327 = INT16_MAX;
	int64_t t72 = -384689505LL;

	t72 = (x325+(x326^(x327<x328)));

	if (t72 != -9223372036854712582LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x329 = -3338;
	uint64_t x332 = UINT64_MAX;
	volatile int64_t t73 = 394492LL;

	t73 = (x329+(x330^(x331<x332)));

	if (t73 != -12563282051LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MIN;

	t74 = (x345+(x346^(x347<x348)));

	if (t74 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x349 = INT8_MIN;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;

	t75 = (x349+(x350^(x351<x352)));

	if (t75 != -124) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x353 = INT16_MIN;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = INT8_MIN;
	volatile int8_t x356 = INT8_MIN;
	int32_t t76 = 461363;

	t76 = (x353+(x354^(x355<x356)));

	if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x357 = UINT64_MAX;
	int16_t x358 = 3;
	volatile int64_t x359 = INT64_MIN;
	static int32_t x360 = -1;
	static volatile uint64_t t77 = 26LLU;

	t77 = (x357+(x358^(x359<x360)));

	if (t77 != 1LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = -1;
	uint64_t x362 = 8086777LLU;
	volatile uint16_t x363 = UINT16_MAX;
	volatile uint16_t x364 = 1813U;
	volatile uint64_t t78 = 2LLU;

	t78 = (x361+(x362^(x363<x364)));

	if (t78 != 8086776LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x365 = 6622;
	int8_t x368 = INT8_MAX;
	int32_t t79 = -1;

	t79 = (x365+(x366^(x367<x368)));

	if (t79 != 9011) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x369 = 2U;
	int64_t x370 = INT64_MIN;
	uint16_t x372 = 9842U;
	int64_t t80 = 1LL;

	t80 = (x369+(x370^(x371<x372)));

	if (t80 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x373 = 4054049U;
	volatile int8_t x374 = 6;
	volatile int32_t x375 = -1;
	int16_t x376 = -3;
	volatile uint32_t t81 = 9762U;

	t81 = (x373+(x374^(x375<x376)));

	if (t81 != 4054055U) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x377 = INT64_MIN;
	static int32_t x379 = -1;
	int64_t x380 = INT64_MIN;
	uint64_t t82 = 6777341LLU;

	t82 = (x377+(x378^(x379<x380)));

	if (t82 != 9223372036854776642LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x381 = -29;
	static volatile int8_t x382 = INT8_MAX;
	int16_t x383 = INT16_MIN;
	volatile int32_t t83 = -293742847;

	t83 = (x381+(x382^(x383<x384)));

	if (t83 != 98) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x389 = 6U;
	uint8_t x391 = 19U;
	int32_t x392 = 1;
	static volatile int32_t t84 = 24291468;

	t84 = (x389+(x390^(x391<x392)));

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x393 = 2U;
	volatile int8_t x394 = INT8_MIN;
	int16_t x395 = 7996;
	volatile int32_t t85 = 221204697;

	t85 = (x393+(x394^(x395<x396)));

	if (t85 != -125) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = INT32_MAX;
	volatile uint64_t t86 = 22924437973524LLU;

	t86 = (x397+(x398^(x399<x400)));

	if (t86 != 2147483649LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x401 = UINT16_MAX;
	static uint64_t x402 = 2740399136LLU;
	uint64_t x404 = UINT64_MAX;

	t87 = (x401+(x402^(x403<x404)));

	if (t87 != 2740464672LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x406 = -10109239588004778LL;
	int64_t t88 = 611300800615705LL;

	t88 = (x405+(x406^(x407<x408)));

	if (t88 != -10109239588004571LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x410 = 32LLU;
	uint8_t x411 = 4U;
	int16_t x412 = INT16_MIN;

	t89 = (x409+(x410^(x411<x412)));

	if (t89 != 31LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = INT16_MIN;
	static uint64_t x418 = 833154923310LLU;
	static volatile uint64_t x420 = UINT64_MAX;
	uint64_t t90 = 727LLU;

	t90 = (x417+(x418^(x419<x420)));

	if (t90 != 833154890543LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x421 = 6683U;
	uint8_t x422 = UINT8_MAX;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = 3585743LL;
	volatile uint32_t t91 = 11U;

	t91 = (x421+(x422^(x423<x424)));

	if (t91 != 6937U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x425 = 16798652113883LL;
	static uint16_t x426 = UINT16_MAX;
	int16_t x427 = INT16_MIN;
	volatile int64_t t92 = 815LL;

	t92 = (x425+(x426^(x427<x428)));

	if (t92 != 16798652179417LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x430 = -1;
	uint8_t x431 = 70U;
	int8_t x432 = 0;
	int32_t t93 = 9;

	t93 = (x429+(x430^(x431<x432)));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x433 = -75121LL;
	int32_t x434 = -206981;
	int16_t x435 = -6461;
	uint32_t x436 = 957U;
	int64_t t94 = -11211026446934LL;

	t94 = (x433+(x434^(x435<x436)));

	if (t94 != -282102LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = UINT32_MAX;
	uint8_t x438 = 0U;
	int32_t x439 = INT32_MIN;
	static int16_t x440 = INT16_MAX;
	volatile uint32_t t95 = 1077318U;

	t95 = (x437+(x438^(x439<x440)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x441 = 35U;
	volatile uint32_t x443 = UINT32_MAX;

	t96 = (x441+(x442^(x443<x444)));

	if (t96 != -32732) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x445 = UINT32_MAX;
	int64_t x446 = INT64_MIN;
	int64_t x448 = INT64_MAX;
	volatile int64_t t97 = 265808726LL;

	t97 = (x445+(x446^(x447<x448)));

	if (t97 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x454 = -104;
	static int32_t x456 = 10764;

	t98 = (x453+(x454^(x455<x456)));

	if (t98 != 9223372036854775704LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x457 = 12645U;
	int16_t x458 = INT16_MIN;
	int64_t x460 = -2494544718973589LL;

	t99 = (x457+(x458^(x459<x460)));

	if (t99 != -20123) { NG(); } else { ; }
	
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

