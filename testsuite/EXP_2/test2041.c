#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
uint32_t x4 = UINT32_MAX;
uint32_t t0 = 12U;
volatile int64_t t2 = -7203898312LL;
volatile int8_t x19 = 3;
volatile int8_t x22 = INT8_MAX;
int8_t x27 = 0;
static int16_t x28 = INT16_MIN;
int32_t t5 = -127;
volatile uint16_t x29 = 6402U;
volatile int32_t x33 = -1;
uint32_t x38 = UINT32_MAX;
static uint32_t x44 = 529589117U;
static uint8_t x47 = 1U;
static uint8_t x48 = 0U;
uint64_t x50 = UINT64_MAX;
volatile uint64_t t12 = 363743287503226442LLU;
volatile uint16_t x58 = 19015U;
int8_t x60 = INT8_MIN;
int32_t x66 = INT32_MIN;
int8_t x68 = INT8_MIN;
uint64_t t16 = 2112747149238LLU;
static int64_t x75 = INT64_MIN;
int8_t x78 = INT8_MAX;
static int16_t x87 = INT16_MIN;
uint64_t x89 = 755712318467663LLU;
volatile uint64_t t21 = 2117187126198731473LLU;
int32_t x94 = -5738;
int8_t x102 = 24;
volatile uint64_t t26 = 236088790618701331LLU;
int16_t x120 = INT16_MIN;
static volatile int64_t t28 = 229532451245427910LL;
volatile int16_t x132 = -1;
uint8_t x133 = UINT8_MAX;
int8_t x137 = INT8_MIN;
static uint64_t x138 = 12801LLU;
static volatile uint8_t x142 = UINT8_MAX;
uint64_t t34 = 3285100780556361LLU;
volatile uint8_t x145 = UINT8_MAX;
uint16_t x150 = 379U;
static int32_t x152 = 311;
int32_t t36 = 93;
uint32_t x154 = UINT32_MAX;
uint16_t x158 = UINT16_MAX;
int64_t x159 = INT64_MIN;
int32_t x160 = 7753;
int16_t x161 = 0;
static volatile int16_t x162 = INT16_MAX;
static int64_t x173 = INT64_MIN;
static int64_t x180 = INT64_MIN;
int64_t x188 = 57799LL;
volatile int64_t t44 = 682804878LL;
static uint32_t x192 = UINT32_MAX;
int8_t x202 = -1;
uint8_t x203 = 1U;
static int32_t x212 = -1;
static int64_t x216 = -1LL;
int16_t x217 = 0;
static uint8_t x220 = 2U;
volatile int64_t t51 = 2701364LL;
int8_t x225 = -1;
uint32_t x239 = UINT32_MAX;
uint64_t x249 = 13473LLU;
uint64_t x250 = 3703995508LLU;
int32_t x254 = INT32_MAX;
int32_t x255 = INT32_MIN;
int64_t x257 = 6011LL;
uint64_t t59 = 5662LLU;
int8_t x263 = 0;
int32_t x265 = 20185099;
static uint8_t x268 = UINT8_MAX;
int16_t x269 = INT16_MIN;
int32_t x283 = INT32_MIN;
static volatile uint64_t x284 = UINT64_MAX;
static uint64_t x286 = 507027185298LLU;
int16_t x291 = 1;
static int16_t x292 = INT16_MIN;
uint64_t x299 = UINT64_MAX;
uint8_t x301 = 1U;
int32_t t69 = -24209;
static volatile int8_t x310 = INT8_MAX;
volatile int32_t x317 = INT32_MAX;
int64_t x319 = 0LL;
uint64_t x320 = UINT64_MAX;
volatile uint64_t t73 = 20882392070267LLU;
static volatile int8_t x330 = -1;
uint64_t x335 = 111LLU;
int64_t x336 = -233626917851571LL;
uint64_t t77 = 7LLU;
int64_t t78 = 964315145381LL;
static int8_t x341 = 0;
int16_t x344 = INT16_MIN;
int16_t x346 = -1;
uint64_t x351 = 334LLU;
static volatile uint64_t t82 = 2317390952942239128LLU;
static volatile int64_t x364 = -3735330LL;
static int64_t x370 = 2131344268058LL;
static volatile int64_t x372 = -805LL;
uint32_t x384 = 131304U;
volatile uint32_t t87 = 1502467807U;
int8_t x385 = INT8_MIN;
int32_t x389 = INT32_MAX;
uint16_t x394 = 6U;
int8_t x395 = INT8_MAX;
int16_t x400 = INT16_MIN;
static int32_t t91 = -99031193;
int16_t x403 = 0;
static int32_t x406 = -1;
static int32_t x420 = INT32_MIN;


void f0(void) {
	static uint16_t x2 = 4U;
	int16_t x3 = INT16_MIN;

	t0 = ((x1+(x2^x3))^x4);

	if (t0 != 32763U) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x5 = UINT64_MAX;
	static int16_t x6 = INT16_MAX;
	int64_t x7 = INT64_MIN;
	uint64_t x8 = 0LLU;
	volatile uint64_t t1 = 43643LLU;

	t1 = ((x5+(x6^x7))^x8);

	if (t1 != 9223372036854808574LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = 1;
	volatile int32_t x11 = 1883083;
	uint32_t x12 = UINT32_MAX;

	t2 = ((x9+(x10^x11))^x12);

	if (t2 != -9223372032561691595LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	static volatile int32_t x18 = INT32_MAX;
	int32_t x20 = -107173;
	int32_t t3 = -463852;

	t3 = ((x17+(x18^x19))^x20);

	if (t3 != 107175) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = 19346363U;
	uint64_t x23 = UINT64_MAX;
	volatile uint32_t x24 = 233314U;
	uint64_t t4 = 27108LLU;

	t4 = ((x21+(x22^x23))^x24);

	if (t4 != 19184729LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = -28;
	static volatile int16_t x26 = 6567;

	t5 = ((x25+(x26^x27))^x28);

	if (t5 != -26229) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x30 = -1;
	static uint64_t x31 = 4LLU;
	int64_t x32 = -1LL;
	static volatile uint64_t t6 = 5165642991LLU;

	t6 = ((x29+(x30^x31))^x32);

	if (t6 != 18446744073709545218LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x34 = 3U;
	static int32_t x35 = INT32_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t7 = -148418353;

	t7 = ((x33+(x34^x35))^x36);

	if (t7 != 2147450884) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -7509;
	int64_t x39 = INT64_MAX;
	uint8_t x40 = 1U;
	volatile int64_t t8 = -991310575342342LL;

	t8 = ((x37+(x38^x39))^x40);

	if (t8 != 9223372032559801002LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = -3LL;
	uint64_t x42 = 126777LLU;
	int32_t x43 = INT32_MIN;
	volatile uint64_t t9 = 124108187164070024LLU;

	t9 = ((x41+(x42^x43))^x44);

	if (t9 != 18446744072091667531LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = 28;
	volatile int8_t x46 = INT8_MIN;
	int32_t t10 = 6467;

	t10 = ((x45+(x46^x47))^x48);

	if (t10 != -99) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	int32_t x51 = -4;
	uint8_t x52 = 6U;
	volatile uint64_t t11 = 64140893749768611LLU;

	t11 = ((x49+(x50^x51))^x52);

	if (t11 != 4294967300LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x53 = 11588U;
	uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 13LLU;
	int32_t x56 = -1;

	t12 = ((x53+(x54^x55))^x56);

	if (t12 != 18446744073709539785LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 995U;
	volatile int32_t x59 = INT32_MIN;
	int32_t t13 = 3618;

	t13 = ((x57+(x58^x59))^x60);

	if (t13 != 2147463594) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x61 = -1;
	uint16_t x62 = UINT16_MAX;
	uint8_t x63 = UINT8_MAX;
	static volatile int32_t x64 = INT32_MIN;
	volatile int32_t t14 = 46;

	t14 = ((x61+(x62^x63))^x64);

	if (t14 != -2147418369) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 109U;
	int8_t x67 = -1;
	volatile uint32_t t15 = 1U;

	t15 = ((x65+(x66^x67))^x68);

	if (t15 != 2147483628U) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 2058LLU;
	volatile int16_t x70 = -3962;
	volatile int8_t x71 = -1;
	int8_t x72 = -18;

	t16 = ((x69+(x70^x71))^x72);

	if (t16 != 18446744073709545581LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	uint8_t x76 = 31U;
	volatile int64_t t17 = 4467041LL;

	t17 = ((x73+(x74^x75))^x76);

	if (t17 != -9223372032559775775LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	uint32_t x79 = 510789562U;
	static volatile int8_t x80 = INT8_MIN;
	volatile uint32_t t18 = 22222U;

	t18 = ((x77+(x78^x79))^x80);

	if (t18 != 3784177732U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = UINT32_MAX;
	int16_t x82 = INT16_MAX;
	int8_t x83 = -14;
	int16_t x84 = 8202;
	volatile uint32_t t19 = 1U;

	t19 = ((x81+(x82^x83))^x84);

	if (t19 != 4294942726U) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x85 = INT32_MIN;
	int64_t x86 = 8140603463LL;
	int8_t x88 = INT8_MIN;
	int64_t t20 = -34029960LL;

	t20 = ((x85+(x86^x87))^x88);

	if (t20 != 10288086983LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x90 = -3647;
	int8_t x91 = -3;
	volatile int32_t x92 = INT32_MAX;

	t21 = ((x89+(x90^x91))^x92);

	if (t21 != 755710295311220LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = INT32_MIN;
	static uint64_t x95 = 153295LLU;
	volatile int32_t x96 = INT32_MIN;
	static volatile uint64_t t22 = 448801753246LLU;

	t22 = ((x93+(x94^x95))^x96);

	if (t22 != 4294819673LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	uint16_t x98 = 488U;
	volatile uint8_t x99 = UINT8_MAX;
	volatile uint8_t x100 = UINT8_MAX;
	int32_t t23 = 3;

	t23 = ((x97+(x98^x99))^x100);

	if (t23 != 489) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -3;
	uint16_t x103 = 742U;
	static int64_t x104 = INT64_MAX;
	int64_t t24 = 31543LL;

	t24 = ((x101+(x102^x103))^x104);

	if (t24 != 9223372036854775044LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = -1;
	volatile int32_t x106 = 0;
	int8_t x107 = INT8_MIN;
	static int8_t x108 = INT8_MIN;
	int32_t t25 = -115788;

	t25 = ((x105+(x106^x107))^x108);

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x109 = INT64_MIN;
	static int32_t x110 = INT32_MIN;
	uint64_t x111 = UINT64_MAX;
	int64_t x112 = INT64_MIN;

	t26 = ((x109+(x110^x111))^x112);

	if (t26 != 2147483647LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x113 = -62062489;
	int8_t x114 = INT8_MIN;
	int32_t x115 = 28981128;
	int16_t x116 = -1;
	int32_t t27 = -587775;

	t27 = ((x113+(x114^x115))^x116);

	if (t27 != 91043728) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	static volatile int16_t x118 = -5267;
	volatile uint32_t x119 = 16424162U;

	t28 = ((x117+(x118^x119))^x120);

	if (t28 != 9223372032576255887LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 7194650LLU;
	static int32_t x122 = 1170114;
	volatile int8_t x123 = INT8_MAX;
	uint32_t x124 = 20828U;
	volatile uint64_t t29 = 1346LLU;

	t29 = ((x121+(x122^x123))^x124);

	if (t29 != 8385419LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x125 = INT32_MIN;
	int64_t x126 = INT64_MIN;
	static uint64_t x127 = 136LLU;
	static uint16_t x128 = 8927U;
	uint64_t t30 = 4193917552LLU;

	t30 = ((x125+(x126^x127))^x128);

	if (t30 != 9223372034707300951LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 8341059009LLU;
	volatile int32_t x130 = -1;
	static int32_t x131 = INT32_MAX;
	volatile uint64_t t31 = 1473540585132210LLU;

	t31 = ((x129+(x130^x131))^x132);

	if (t31 != 18446744067515976254LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x134 = INT16_MAX;
	volatile int32_t x135 = INT32_MIN;
	int8_t x136 = -1;
	int32_t t32 = 3;

	t32 = ((x133+(x134^x135))^x136);

	if (t32 != 2147450625) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x139 = INT64_MIN;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t33 = 5948684499495LLU;

	t33 = ((x137+(x138^x139))^x140);

	if (t33 != 9223372036854763134LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MIN;
	uint64_t x143 = 706208LLU;
	int64_t x144 = -16633LL;

	t34 = ((x141+(x142^x143))^x144);

	if (t34 != 2146793816LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x146 = 5335U;
	int64_t x147 = INT64_MIN;
	uint8_t x148 = UINT8_MAX;
	static volatile int64_t t35 = -465787470652003723LL;

	t35 = ((x145+(x146^x147))^x148);

	if (t35 != -9223372036854770391LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = 25;
	uint16_t x151 = UINT16_MAX;

	t36 = ((x149+(x150^x151))^x152);

	if (t36 != 65450) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x153 = 175719355830921644LLU;
	int8_t x155 = -1;
	volatile uint8_t x156 = UINT8_MAX;
	static volatile uint64_t t37 = 684330381097805LLU;

	t37 = ((x153+(x154^x155))^x156);

	if (t37 != 175719355830921555LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -1;
	volatile int64_t t38 = 6708683LL;

	t38 = ((x157+(x158^x159))^x160);

	if (t38 != -9223372036854718025LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x163 = INT8_MIN;
	int16_t x164 = -1;
	int32_t t39 = -62170;

	t39 = ((x161+(x162^x163))^x164);

	if (t39 != 32640) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x165 = -1;
	volatile uint32_t x166 = 5092U;
	int16_t x167 = -1;
	int32_t x168 = -1;
	static uint32_t t40 = 10243168U;

	t40 = ((x165+(x166^x167))^x168);

	if (t40 != 5093U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x174 = 0U;
	uint32_t x175 = 2034427471U;
	int32_t x176 = -25558;
	volatile int64_t t41 = -24854444722211LL;

	t41 = ((x173+(x174^x175))^x176);

	if (t41 != 9223372034820373093LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 0U;
	int16_t x178 = INT16_MAX;
	int16_t x179 = INT16_MAX;
	volatile int64_t t42 = INT64_MIN;

	t42 = ((x177+(x178^x179))^x180);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x182 = 10U;
	uint32_t x183 = 29U;
	static int32_t x184 = -1;
	uint32_t t43 = 247495U;

	t43 = ((x181+(x182^x183))^x184);

	if (t43 != 2147483624U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = INT16_MAX;
	int64_t x186 = INT64_MIN;
	volatile int32_t x187 = INT32_MAX;

	t44 = ((x185+(x186^x187))^x188);

	if (t44 != -9223372034707251655LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -364;
	static int8_t x190 = 1;
	int8_t x191 = 27;
	static volatile uint32_t t45 = 49290790U;

	t45 = ((x189+(x190^x191))^x192);

	if (t45 != 337U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x193 = 3510609U;
	int16_t x194 = -1154;
	uint16_t x195 = UINT16_MAX;
	uint32_t x196 = 0U;
	volatile uint32_t t46 = 144U;

	t46 = ((x193+(x194^x195))^x196);

	if (t46 != 3446226U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = 344475LLU;
	int16_t x204 = -1;
	static volatile uint64_t t47 = 229717LLU;

	t47 = ((x201+(x202^x203))^x204);

	if (t47 != 18446744073709207142LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = -1;
	int16_t x210 = INT16_MIN;
	static int16_t x211 = INT16_MAX;
	volatile int32_t t48 = -7;

	t48 = ((x209+(x210^x211))^x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint16_t x213 = UINT16_MAX;
	uint32_t x214 = UINT32_MAX;
	int64_t x215 = -1LL;
	int64_t t49 = -23LL;

	t49 = ((x213+(x214^x215))^x216);

	if (t49 != 4294901760LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x218 = -2LL;
	int8_t x219 = INT8_MAX;
	int64_t t50 = -10115874LL;

	t50 = ((x217+(x218^x219))^x220);

	if (t50 != -125LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x221 = -259;
	int16_t x222 = -1;
	int64_t x223 = INT64_MIN;
	int64_t x224 = -7454472915050LL;

	t51 = ((x221+(x222^x223))^x224);

	if (t51 != -9223364582381860502LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x226 = INT8_MIN;
	int32_t x227 = -491;
	uint64_t x228 = UINT64_MAX;
	volatile uint64_t t52 = 406533230162LLU;

	t52 = ((x225+(x226^x227))^x228);

	if (t52 != 18446744073709551211LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -1;
	volatile int64_t x230 = 124LL;
	int32_t x231 = -4056972;
	int16_t x232 = 4817;
	static volatile int64_t t53 = 490838822LL;

	t53 = ((x229+(x230^x231))^x232);

	if (t53 != -4060458LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = 1;
	uint8_t x238 = 6U;
	int64_t x240 = -1LL;
	volatile int64_t t54 = -1676LL;

	t54 = ((x237+(x238^x239))^x240);

	if (t54 != -4294967291LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x241 = 55295664U;
	volatile uint32_t x242 = 97U;
	volatile uint8_t x243 = 0U;
	static int16_t x244 = INT16_MIN;
	uint32_t t55 = 7784148U;

	t55 = ((x241+(x242^x243))^x244);

	if (t55 != 4239671057U) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = 0;
	uint32_t x246 = 42043U;
	static int32_t x247 = -1;
	volatile int16_t x248 = INT16_MIN;
	volatile uint32_t t56 = 180897U;

	t56 = ((x245+(x246^x247))^x248);

	if (t56 != 56260U) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x251 = 27701U;
	static int8_t x252 = INT8_MAX;
	uint64_t t57 = 84490937343916072LLU;

	t57 = ((x249+(x250^x251))^x252);

	if (t57 != 3703981213LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = 3;
	static uint32_t x256 = UINT32_MAX;
	static uint32_t t58 = 29340U;

	t58 = ((x253+(x254^x255))^x256);

	if (t58 != 4294967293U) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x258 = 123U;
	volatile uint64_t x259 = 6116423960LLU;
	int16_t x260 = 0;

	t59 = ((x257+(x258^x259))^x260);

	if (t59 != 6116430046LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x261 = -3240;
	static int32_t x262 = INT32_MAX;
	uint8_t x264 = UINT8_MAX;
	int32_t t60 = -930;

	t60 = ((x261+(x262^x263))^x264);

	if (t60 != 2147480488) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x266 = 4983U;
	int64_t x267 = -1LL;
	volatile int64_t t61 = -1014636313148LL;

	t61 = ((x265+(x266^x267))^x268);

	if (t61 != 20180076LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x270 = INT32_MIN;
	int8_t x271 = -14;
	static int64_t x272 = INT64_MAX;
	static int64_t t62 = -59LL;

	t62 = ((x269+(x270^x271))^x272);

	if (t62 != 9223372034707324941LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x273 = 67170U;
	int16_t x274 = -2869;
	volatile uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	int64_t t63 = -145200LL;

	t63 = ((x273+(x274^x275))^x276);

	if (t63 != -9223372036854711658LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = -1;
	int32_t x278 = -428;
	volatile int64_t x279 = -26538LL;
	int8_t x280 = INT8_MIN;
	static volatile int64_t t64 = 205450349LL;

	t64 = ((x277+(x278^x279))^x280);

	if (t64 != -26239LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x281 = -704118LL;
	int64_t x282 = INT64_MIN;
	uint64_t t65 = 130299LLU;

	t65 = ((x281+(x282^x283))^x284);

	if (t65 != 9223372039002963573LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x285 = UINT8_MAX;
	static uint16_t x287 = UINT16_MAX;
	uint16_t x288 = UINT16_MAX;
	volatile uint64_t t66 = 531672596927068LLU;

	t66 = ((x285+(x286^x287))^x288);

	if (t66 != 507027185043LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x289 = 4U;
	uint8_t x290 = 2U;
	volatile int32_t t67 = 7356465;

	t67 = ((x289+(x290^x291))^x292);

	if (t67 != -32761) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t68 = 221714982071LLU;

	t68 = ((x297+(x298^x299))^x300);

	if (t68 != 18446744073709518721LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x302 = INT32_MIN;
	volatile int16_t x303 = 14;
	int8_t x304 = INT8_MIN;

	t69 = ((x301+(x302^x303))^x304);

	if (t69 != 2147483535) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = 15U;
	uint64_t x306 = 23511LLU;
	uint16_t x307 = 1899U;
	uint8_t x308 = 15U;
	uint64_t t70 = 17688769313306631LLU;

	t70 = ((x305+(x306^x307))^x308);

	if (t70 != 23748LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x311 = 707LLU;
	static uint64_t x312 = 14363495244LLU;
	volatile uint64_t t71 = 11322645085138798LLU;

	t71 = ((x309+(x310^x311))^x312);

	if (t71 != 14363494768LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = INT8_MAX;
	volatile int32_t x314 = INT32_MIN;
	volatile uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 319LLU;
	static uint64_t t72 = 2LLU;

	t72 = ((x313+(x314^x315))^x316);

	if (t72 != 2147483969LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x318 = 6;

	t73 = ((x317+(x318^x319))^x320);

	if (t73 != 18446744071562067962LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x321 = -2432;
	uint64_t x322 = UINT64_MAX;
	int64_t x323 = -9714599045445LL;
	static int8_t x324 = INT8_MIN;
	volatile uint64_t t74 = 4975559829LLU;

	t74 = ((x321+(x322^x323))^x324);

	if (t74 != 18446734359110508612LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = INT32_MIN;
	uint64_t x326 = 31468LLU;
	int32_t x327 = INT32_MAX;
	int8_t x328 = INT8_MIN;
	uint64_t t75 = 10973319954LLU;

	t75 = ((x325+(x326^x327))^x328);

	if (t75 != 31379LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = INT16_MAX;
	uint64_t x331 = UINT64_MAX;
	static uint64_t x332 = 12LLU;
	volatile uint64_t t76 = 3637833576070996208LLU;

	t76 = ((x329+(x330^x331))^x332);

	if (t76 != 32755LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x333 = -1LL;
	volatile int64_t x334 = -1LL;

	t77 = ((x333+(x334^x335))^x336);

	if (t77 != 233626917851586LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x337 = 1;
	static int8_t x338 = INT8_MIN;
	volatile int8_t x339 = -1;
	static int64_t x340 = INT64_MIN;

	t78 = ((x337+(x338^x339))^x340);

	if (t78 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	volatile int64_t t79 = 968439532401022LL;

	t79 = ((x341+(x342^x343))^x344);

	if (t79 != 32767LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x345 = 171891U;
	uint16_t x347 = 2519U;
	volatile uint8_t x348 = 25U;
	volatile uint32_t t80 = 754U;

	t80 = ((x345+(x346^x347))^x348);

	if (t80 != 169346U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x349 = INT64_MAX;
	int8_t x350 = INT8_MAX;
	int32_t x352 = INT32_MAX;
	volatile uint64_t t81 = 0LLU;

	t81 = ((x349+(x350^x351))^x352);

	if (t81 != 9223372039002259151LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = -16818268413LL;
	volatile uint32_t x354 = 3688U;
	volatile int8_t x355 = -1;
	uint64_t x356 = 22418530089174966LLU;

	t82 = ((x353+(x354^x355))^x356);

	if (t82 != 18424325537885818668LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x357 = INT32_MIN;
	int32_t x358 = INT32_MIN;
	int16_t x359 = INT16_MIN;
	uint32_t x360 = 19544U;
	uint32_t t83 = 89530U;

	t83 = ((x357+(x358^x359))^x360);

	if (t83 != 4294954072U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x361 = UINT16_MAX;
	int8_t x362 = INT8_MIN;
	uint16_t x363 = 2U;
	volatile int64_t t84 = -21301452604LL;

	t84 = ((x361+(x362^x363))^x364);

	if (t84 != -3670177LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x369 = INT64_MIN;
	int16_t x371 = INT16_MAX;
	volatile int64_t t85 = -142725737057881957LL;

	t85 = ((x369+(x370^x371))^x372);

	if (t85 != 9223369905510488126LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MIN;
	volatile uint64_t x380 = 2984154LLU;
	static uint64_t t86 = 1817268348LLU;

	t86 = ((x377+(x378^x379))^x380);

	if (t86 != 9223372034704279770LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x381 = -1;
	int16_t x382 = 13041;
	static uint8_t x383 = UINT8_MAX;

	t87 = ((x381+(x382^x383))^x384);

	if (t87 != 144101U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x386 = -255;
	uint32_t x387 = 85711U;
	static int8_t x388 = INT8_MIN;
	uint32_t t88 = 2141179U;

	t88 = ((x385+(x386^x387))^x388);

	if (t88 != 85710U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x390 = UINT16_MAX;
	int64_t x391 = -1LL;
	static uint32_t x392 = UINT32_MAX;
	volatile int64_t t89 = -19584153165LL;

	t89 = ((x389+(x390^x391))^x392);

	if (t89 != 2147549184LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x393 = 3;
	static int64_t x396 = INT64_MIN;
	volatile int64_t t90 = -418410885681892092LL;

	t90 = ((x393+(x394^x395))^x396);

	if (t90 != -9223372036854775684LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x397 = INT16_MIN;
	int16_t x398 = INT16_MIN;
	int8_t x399 = 0;

	t91 = ((x397+(x398^x399))^x400);

	if (t91 != 32768) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x401 = 27U;
	int64_t x402 = -53LL;
	static int16_t x404 = INT16_MIN;
	static int64_t t92 = 15828401232586188LL;

	t92 = ((x401+(x402^x403))^x404);

	if (t92 != 32742LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = INT8_MIN;
	static int32_t x407 = -10;
	int8_t x408 = INT8_MIN;
	int32_t t93 = -226;

	t93 = ((x405+(x406^x407))^x408);

	if (t93 != 9) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x413 = UINT8_MAX;
	int32_t x414 = -11026878;
	int16_t x415 = 88;
	static uint8_t x416 = 86U;
	volatile int32_t t94 = 30;

	t94 = ((x413+(x414^x415))^x416);

	if (t94 != -11026609) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	int32_t x418 = -1;
	uint16_t x419 = 8899U;
	volatile int32_t t95 = 0;

	t95 = ((x417+(x418^x419))^x420);

	if (t95 != -8901) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x421 = 2156081U;
	int16_t x422 = 0;
	uint16_t x423 = 5U;
	int32_t x424 = INT32_MIN;
	uint32_t t96 = 27626781U;

	t96 = ((x421+(x422^x423))^x424);

	if (t96 != 2149639734U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x425 = UINT32_MAX;
	int64_t x426 = -167563740641881LL;
	int16_t x427 = -3128;
	volatile int32_t x428 = 70322285;
	static volatile int64_t t97 = 4149893249553293LL;

	t97 = ((x425+(x426^x427))^x428);

	if (t97 != 167568099638787LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = 57LLU;
	int64_t x430 = 177390242LL;
	uint16_t x431 = UINT16_MAX;
	static uint8_t x432 = UINT8_MAX;
	static volatile uint64_t t98 = 78146384847LLU;

	t98 = ((x429+(x430^x431))^x432);

	if (t98 != 177356137LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MAX;
	int64_t x434 = INT64_MIN;
	static uint32_t x435 = UINT32_MAX;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t99 = 1522667660313LLU;

	t99 = ((x433+(x434^x435))^x436);

	if (t99 != 9223372030412324865LLU) { NG(); } else { ; }
	
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

