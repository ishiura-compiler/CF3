#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 27U;
volatile int8_t x6 = INT8_MIN;
int8_t x20 = 1;
volatile uint16_t x22 = UINT16_MAX;
uint64_t x24 = UINT64_MAX;
volatile int32_t t5 = 10756;
volatile uint32_t x25 = 881968U;
static int32_t x26 = INT32_MAX;
static volatile int32_t t11 = 29107;
uint16_t x49 = UINT16_MAX;
uint16_t x50 = 16365U;
static uint32_t x61 = 261075U;
static int8_t x68 = 1;
volatile uint32_t t16 = 2U;
int32_t t17 = 2620;
static int64_t x74 = -1LL;
volatile int32_t t19 = -12;
int16_t x81 = INT16_MAX;
int64_t x82 = INT64_MIN;
volatile int64_t t20 = -222301035LL;
volatile uint16_t x86 = 6009U;
static int64_t x88 = -1LL;
int32_t t21 = -1642847;
uint8_t x89 = 55U;
int32_t x97 = INT32_MAX;
int64_t t24 = -19LL;
int8_t x105 = INT8_MIN;
int32_t x108 = -1;
static int16_t x119 = -1;
uint16_t x123 = UINT16_MAX;
int16_t x128 = -1;
int32_t x131 = INT32_MIN;
volatile uint64_t x132 = UINT64_MAX;
volatile int32_t t32 = -1;
int32_t x140 = INT32_MIN;
int32_t t34 = -20;
int8_t x143 = INT8_MIN;
static uint8_t x144 = 56U;
volatile int64_t t36 = 10545490114LL;
volatile uint32_t x155 = 13046380U;
uint32_t x162 = 1208747U;
static uint64_t t42 = 389838029617958LLU;
int8_t x175 = INT8_MIN;
uint64_t x176 = 49459920LLU;
int32_t t43 = 489;
volatile int64_t x187 = -1LL;
int64_t x195 = INT64_MIN;
int8_t x202 = -1;
int16_t x204 = INT16_MIN;
int16_t x205 = -1;
uint64_t x233 = 743405358035823LLU;
volatile int64_t x234 = INT64_MAX;
int64_t x235 = INT64_MAX;
int16_t x242 = INT16_MAX;
int64_t x246 = 11LL;
volatile int64_t t61 = 1830561848942LL;
static int32_t x254 = INT32_MIN;
int8_t x255 = -59;
static int32_t x259 = INT32_MIN;
static volatile uint64_t x265 = 3503662769951LLU;
int16_t x282 = 2532;
static uint64_t x291 = 1801278493117710LLU;
int32_t x292 = -278180;
volatile int64_t t73 = -2646624LL;
static volatile uint64_t x300 = 2LLU;
uint16_t x306 = 43U;
uint32_t x307 = 370145U;
int16_t x308 = INT16_MAX;
uint64_t x313 = UINT64_MAX;
volatile int64_t x315 = INT64_MIN;
volatile int64_t x317 = INT64_MAX;
volatile int32_t t80 = 1764;
uint64_t t81 = 2LLU;
uint32_t x330 = UINT32_MAX;
int64_t x333 = INT64_MIN;
static uint16_t x334 = UINT16_MAX;
static uint8_t x342 = 14U;
int64_t x348 = -50700750646550656LL;
int32_t t86 = INT32_MIN;
uint8_t x350 = 10U;
volatile int32_t t88 = 325120;
static volatile uint32_t x362 = 607112U;
int8_t x363 = INT8_MIN;
uint8_t x365 = UINT8_MAX;
static int32_t x366 = -1;
int16_t x369 = -11830;
uint32_t t92 = 76846485U;
uint16_t x374 = 10U;
uint32_t x379 = UINT32_MAX;
uint64_t t94 = 478568254374643LLU;
volatile int16_t x382 = -1134;
uint64_t t95 = 47039956512LLU;
uint16_t x388 = UINT16_MAX;
int8_t x390 = INT8_MIN;
int8_t x391 = -1;
volatile int64_t x393 = -1LL;
uint32_t x395 = 4U;
int64_t t99 = 11369798813LL;


void f0(void) {
	uint16_t x1 = 45U;
	int16_t x3 = -1;
	uint32_t x4 = 301U;
	static int32_t t0 = 99;

	t0 = (x1&(x2^(x3<x4)));

	if (t0 != 9) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile uint16_t x7 = UINT16_MAX;
	volatile uint16_t x8 = 146U;
	static int32_t t1 = 1;

	t1 = (x5&(x6^(x7<x8)));

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 26U;
	volatile int64_t x10 = INT64_MAX;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = -230403LL;

	t2 = (x9&(x10^(x11<x12)));

	if (t2 != 26LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -7LL;
	static uint8_t x14 = 58U;
	int8_t x15 = -1;
	int64_t x16 = 161396249911LL;
	volatile int64_t t3 = -754893598929LL;

	t3 = (x13&(x14^(x15<x16)));

	if (t3 != 57LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	static volatile uint64_t x18 = 194083LLU;
	uint64_t x19 = UINT64_MAX;
	volatile uint64_t t4 = 97227292603856242LLU;

	t4 = (x17&(x18^(x19<x20)));

	if (t4 != 63011LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x23 = -1LL;

	t5 = (x21&(x22^(x23<x24)));

	if (t5 != 255) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = -1;
	uint8_t x28 = 53U;
	static volatile uint32_t t6 = 866133885U;

	t6 = (x25&(x26^(x27<x28)));

	if (t6 != 881968U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	static int16_t x30 = 278;
	volatile int32_t x31 = INT32_MAX;
	int32_t x32 = -9968223;
	int32_t t7 = -8061;

	t7 = (x29&(x30^(x31<x32)));

	if (t7 != 278) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	uint16_t x34 = UINT16_MAX;
	int8_t x35 = -1;
	uint16_t x36 = UINT16_MAX;
	volatile int32_t t8 = -1754144;

	t8 = (x33&(x34^(x35<x36)));

	if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = UINT16_MAX;
	volatile int8_t x38 = INT8_MAX;
	volatile int16_t x39 = INT16_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -145;

	t9 = (x37&(x38^(x39<x40)));

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = 74;
	volatile uint32_t x42 = 181U;
	int16_t x43 = INT16_MAX;
	volatile uint64_t x44 = 80334LLU;
	uint32_t t10 = 80205239U;

	t10 = (x41&(x42^(x43<x44)));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 0LLU;
	uint32_t x48 = UINT32_MAX;

	t11 = (x45&(x46^(x47<x48)));

	if (t11 != 65409) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x51 = INT8_MIN;
	volatile uint64_t x52 = 170969LLU;
	volatile int32_t t12 = 75999282;

	t12 = (x49&(x50^(x51<x52)));

	if (t12 != 16365) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = -985;
	volatile int16_t x54 = -7027;
	uint8_t x55 = 79U;
	int8_t x56 = 6;
	static volatile int32_t t13 = -78;

	t13 = (x53&(x54^(x55<x56)));

	if (t13 != -7163) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MIN;
	volatile int16_t x59 = -1;
	int64_t x60 = 104LL;
	volatile int32_t t14 = 4;

	t14 = (x57&(x58^(x59<x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = -1;
	uint32_t x63 = 113846643U;
	int32_t x64 = -72024;
	static uint32_t t15 = 3921923U;

	t15 = (x61&(x62^(x63<x64)));

	if (t15 != 261074U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 10;
	static uint32_t x66 = 598695436U;
	volatile int8_t x67 = -31;

	t16 = (x65&(x66^(x67<x68)));

	if (t16 != 8U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 115;
	int16_t x70 = INT16_MIN;
	uint64_t x71 = 6434446050LLU;
	static int64_t x72 = -2120185424088LL;

	t17 = (x69&(x70^(x71<x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = INT32_MAX;
	static volatile uint64_t x75 = 3LLU;
	volatile int16_t x76 = -1;
	volatile int64_t t18 = -362256680LL;

	t18 = (x73&(x74^(x75<x76)));

	if (t18 != 2147483646LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = UINT16_MAX;
	int32_t x78 = 21020;
	volatile int32_t x79 = 1111;
	int16_t x80 = INT16_MAX;

	t19 = (x77&(x78^(x79<x80)));

	if (t19 != 21021) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x83 = -176323LL;
	volatile int16_t x84 = 3;

	t20 = (x81&(x82^(x83<x84)));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = 4;
	uint32_t x87 = 5687582U;

	t21 = (x85&(x86^(x87<x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x90 = 0;
	static volatile int64_t x91 = INT64_MIN;
	volatile int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 168;

	t22 = (x89&(x90^(x91<x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = -320711216;
	static int32_t x94 = INT32_MIN;
	int32_t x95 = INT32_MIN;
	int8_t x96 = -4;
	int32_t t23 = INT32_MIN;

	t23 = (x93&(x94^(x95<x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x98 = 26063LL;
	uint16_t x99 = 1258U;
	int64_t x100 = INT64_MIN;

	t24 = (x97&(x98^(x99<x100)));

	if (t24 != 26063LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 116U;
	int8_t x102 = INT8_MIN;
	static volatile int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MIN;
	static volatile int32_t t25 = -420;

	t25 = (x101&(x102^(x103<x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	static int16_t x107 = INT16_MIN;
	static int32_t t26 = 5054;

	t26 = (x105&(x106^(x107<x108)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x109 = -38;
	int32_t x110 = -92683752;
	int64_t x111 = -2994LL;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 545844504;

	t27 = (x109&(x110^(x111<x112)));

	if (t27 != -92683752) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = 715638U;
	static int32_t x114 = -1;
	static int8_t x115 = 0;
	int16_t x116 = -9528;
	volatile uint32_t t28 = 14054272U;

	t28 = (x113&(x114^(x115<x116)));

	if (t28 != 715638U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int64_t x118 = -1LL;
	uint64_t x120 = UINT64_MAX;
	volatile int64_t t29 = -317461656LL;

	t29 = (x117&(x118^(x119<x120)));

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	uint32_t x122 = 268124628U;
	static volatile int32_t x124 = 41;
	static volatile uint32_t t30 = 804766U;

	t30 = (x121&(x122^(x123<x124)));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = 1041251659;
	int8_t x126 = 3;
	static int8_t x127 = INT8_MAX;
	volatile int32_t t31 = -16289;

	t31 = (x125&(x126^(x127<x128)));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = INT32_MIN;
	static volatile int8_t x130 = 1;

	t32 = (x129&(x130^(x131<x132)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 5U;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = 15U;
	int32_t x136 = INT32_MIN;
	static int32_t t33 = -1;

	t33 = (x133&(x134^(x135<x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	uint16_t x139 = 28U;

	t34 = (x137&(x138^(x139<x140)));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	static uint64_t x142 = UINT64_MAX;
	volatile uint64_t t35 = 6LLU;

	t35 = (x141&(x142^(x143<x144)));

	if (t35 != 4294967294LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x145 = INT64_MIN;
	uint32_t x146 = UINT32_MAX;
	volatile int16_t x147 = 6252;
	int8_t x148 = INT8_MIN;

	t36 = (x145&(x146^(x147<x148)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = -1;
	uint8_t x150 = 3U;
	uint16_t x151 = UINT16_MAX;
	volatile int64_t x152 = INT64_MIN;
	static int32_t t37 = 125921140;

	t37 = (x149&(x150^(x151<x152)));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -2;
	volatile int64_t x154 = INT64_MIN;
	int8_t x156 = INT8_MIN;
	int64_t t38 = INT64_MIN;

	t38 = (x153&(x154^(x155<x156)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = 8086969LL;
	uint16_t x158 = 16168U;
	volatile int64_t x159 = INT64_MIN;
	int64_t x160 = INT64_MIN;
	volatile int64_t t39 = -1379LL;

	t39 = (x157&(x158^(x159<x160)));

	if (t39 != 9512LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 5LLU;
	int8_t x163 = INT8_MIN;
	int64_t x164 = -1LL;
	volatile uint64_t t40 = 71549LLU;

	t40 = (x161&(x162^(x163<x164)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	uint16_t x166 = 1006U;
	uint32_t x167 = 380353161U;
	uint64_t x168 = 249509911816575LLU;
	static volatile int32_t t41 = 748216;

	t41 = (x165&(x166^(x167<x168)));

	if (t41 != 111) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = 353;
	uint64_t x170 = 2122172825362809140LLU;
	int64_t x171 = -1LL;
	int16_t x172 = -1526;

	t42 = (x169&(x170^(x171<x172)));

	if (t42 != 288LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 0U;
	int32_t x174 = 6861294;

	t43 = (x173&(x174^(x175<x176)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = -2;
	int16_t x178 = 1;
	static int16_t x179 = -201;
	uint64_t x180 = 37LLU;
	int32_t t44 = 3;

	t44 = (x177&(x178^(x179<x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = -1LL;
	volatile int16_t x182 = INT16_MIN;
	int64_t x183 = INT64_MAX;
	static int64_t x184 = INT64_MAX;
	int64_t t45 = 2160LL;

	t45 = (x181&(x182^(x183<x184)));

	if (t45 != -32768LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint32_t x186 = 10303201U;
	int32_t x188 = INT32_MAX;
	uint32_t t46 = 24U;

	t46 = (x185&(x186^(x187<x188)));

	if (t46 != 10303200U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 856976282366LL;
	int16_t x190 = INT16_MIN;
	static uint32_t x191 = 25954U;
	uint32_t x192 = 213055U;
	volatile int64_t t47 = -129043660LL;

	t47 = (x189&(x190^(x191<x192)));

	if (t47 != 856976261120LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x193 = INT32_MAX;
	uint8_t x194 = UINT8_MAX;
	static int16_t x196 = INT16_MAX;
	volatile int32_t t48 = 178575;

	t48 = (x193&(x194^(x195<x196)));

	if (t48 != 254) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = UINT64_MAX;
	static int8_t x198 = 1;
	static int32_t x199 = INT32_MAX;
	int8_t x200 = INT8_MIN;
	static uint64_t t49 = 292027331671789LLU;

	t49 = (x197&(x198^(x199<x200)));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 48U;
	volatile uint64_t x203 = 301086734421016LLU;
	int32_t t50 = 1;

	t50 = (x201&(x202^(x203<x204)));

	if (t50 != 48) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = UINT8_MAX;
	uint32_t x207 = UINT32_MAX;
	uint8_t x208 = 70U;
	int32_t t51 = 125818630;

	t51 = (x205&(x206^(x207<x208)));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MAX;
	int8_t x210 = INT8_MAX;
	volatile int16_t x211 = -1;
	int8_t x212 = INT8_MAX;
	static int32_t t52 = 83125840;

	t52 = (x209&(x210^(x211<x212)));

	if (t52 != 126) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = 24579512870LLU;
	uint16_t x214 = 11666U;
	static int64_t x215 = INT64_MAX;
	static uint16_t x216 = UINT16_MAX;
	volatile uint64_t t53 = 1670532448849717328LLU;

	t53 = (x213&(x214^(x215<x216)));

	if (t53 != 2050LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MAX;
	int32_t x218 = 24;
	int8_t x219 = INT8_MIN;
	int32_t x220 = INT32_MIN;
	volatile int64_t t54 = -163470055216LL;

	t54 = (x217&(x218^(x219<x220)));

	if (t54 != 24LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = UINT32_MAX;
	volatile int16_t x222 = INT16_MAX;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MIN;
	volatile uint32_t t55 = 1U;

	t55 = (x221&(x222^(x223<x224)));

	if (t55 != 32766U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	uint8_t x226 = 4U;
	static int16_t x227 = -891;
	int64_t x228 = 3914LL;
	volatile int32_t t56 = -470395;

	t56 = (x225&(x226^(x227<x228)));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = INT8_MAX;
	int64_t x230 = -15199195208LL;
	static int8_t x231 = -4;
	static uint8_t x232 = 1U;
	volatile int64_t t57 = -172LL;

	t57 = (x229&(x230^(x231<x232)));

	if (t57 != 57LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x236 = 30051U;
	uint64_t t58 = 177463LLU;

	t58 = (x233&(x234^(x235<x236)));

	if (t58 != 743405358035823LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	static int32_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	static int8_t x240 = INT8_MIN;
	int32_t t59 = 838709541;

	t59 = (x237&(x238^(x239<x240)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 26U;
	int16_t x243 = INT16_MIN;
	static volatile uint64_t x244 = 0LLU;
	volatile uint32_t t60 = 14U;

	t60 = (x241&(x242^(x243<x244)));

	if (t60 != 26U) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x245 = 176780;
	int16_t x247 = -2919;
	uint8_t x248 = 11U;

	t61 = (x245&(x246^(x247<x248)));

	if (t61 != 8LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x249 = UINT8_MAX;
	int32_t x250 = 1428293;
	int64_t x251 = INT64_MIN;
	static int32_t x252 = INT32_MIN;
	static volatile int32_t t62 = -831242;

	t62 = (x249&(x250^(x251<x252)));

	if (t62 != 68) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 1519115186892LLU;
	int32_t x256 = -1;
	uint64_t t63 = 837324277180LLU;

	t63 = (x253&(x254^(x255<x256)));

	if (t63 != 1518270939136LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x257 = UINT16_MAX;
	int8_t x258 = -1;
	int16_t x260 = INT16_MIN;
	static volatile int32_t t64 = -1;

	t64 = (x257&(x258^(x259<x260)));

	if (t64 != 65534) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x261 = 25611947703341950LLU;
	int8_t x262 = INT8_MAX;
	int32_t x263 = -56552;
	int32_t x264 = INT32_MAX;
	uint64_t t65 = 146359LLU;

	t65 = (x261&(x262^(x263<x264)));

	if (t65 != 126LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x266 = 5645;
	volatile uint16_t x267 = 10673U;
	volatile uint32_t x268 = 42050559U;
	volatile uint64_t t66 = 3LLU;

	t66 = (x265&(x266^(x267<x268)));

	if (t66 != 1548LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = INT32_MIN;
	int64_t x270 = -1LL;
	static int64_t x271 = -1LL;
	uint16_t x272 = 23U;
	static int64_t t67 = -31300415LL;

	t67 = (x269&(x270^(x271<x272)));

	if (t67 != -2147483648LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int64_t x274 = INT64_MIN;
	int16_t x275 = -1;
	int64_t x276 = -1LL;
	volatile int64_t t68 = INT64_MIN;

	t68 = (x273&(x274^(x275<x276)));

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	int8_t x278 = INT8_MIN;
	volatile uint8_t x279 = 35U;
	static int32_t x280 = 44774776;
	int32_t t69 = 4;

	t69 = (x277&(x278^(x279<x280)));

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = UINT8_MAX;
	volatile int64_t x283 = -1LL;
	static uint32_t x284 = UINT32_MAX;
	int32_t t70 = 430102;

	t70 = (x281&(x282^(x283<x284)));

	if (t70 != 229) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	uint16_t x287 = 76U;
	int8_t x288 = -1;
	volatile int32_t t71 = 689123;

	t71 = (x285&(x286^(x287<x288)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -143559723178701LL;
	volatile int16_t x290 = INT16_MIN;
	volatile int64_t t72 = -11006846510239283LL;

	t72 = (x289&(x290^(x291<x292)));

	if (t72 != -143559723188223LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -10031369LL;
	int16_t x294 = -211;
	volatile uint64_t x295 = 6LLU;
	volatile int64_t x296 = 52790834692208LL;

	t73 = (x293&(x294^(x295<x296)));

	if (t73 != -10031580LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x297 = INT32_MIN;
	uint16_t x298 = 7301U;
	volatile int8_t x299 = 11;
	int32_t t74 = 7807620;

	t74 = (x297&(x298^(x299<x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = -21192239865065411LL;
	static int16_t x302 = 1;
	static uint8_t x303 = UINT8_MAX;
	uint8_t x304 = 15U;
	volatile int64_t t75 = -517102433550LL;

	t75 = (x301&(x302^(x303<x304)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int32_t t76 = 0;

	t76 = (x305&(x306^(x307<x308)));

	if (t76 != 43) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 0U;
	static int64_t x310 = -17411968920123LL;
	static int8_t x311 = INT8_MAX;
	uint8_t x312 = 20U;
	int64_t t77 = 43LL;

	t77 = (x309&(x310^(x311<x312)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x314 = 55556495395881LL;
	volatile int8_t x316 = -5;
	uint64_t t78 = 104LLU;

	t78 = (x313&(x314^(x315<x316)));

	if (t78 != 55556495395880LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x318 = -1;
	uint32_t x319 = 348138U;
	uint16_t x320 = 72U;
	int64_t t79 = INT64_MAX;

	t79 = (x317&(x318^(x319<x320)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = -15730;
	volatile uint16_t x322 = UINT16_MAX;
	int32_t x323 = -5160059;
	volatile int8_t x324 = INT8_MIN;

	t80 = (x321&(x322^(x323<x324)));

	if (t80 != 49806) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = INT8_MAX;
	uint64_t x326 = 996921LLU;
	int64_t x327 = -4871621LL;
	volatile uint8_t x328 = 1U;

	t81 = (x325&(x326^(x327<x328)));

	if (t81 != 56LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x329 = INT64_MAX;
	int8_t x331 = 1;
	int32_t x332 = 4298;
	volatile int64_t t82 = -294LL;

	t82 = (x329&(x330^(x331<x332)));

	if (t82 != 4294967294LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x335 = INT8_MIN;
	uint32_t x336 = 14U;
	volatile int64_t t83 = -2698189333064716LL;

	t83 = (x333&(x334^(x335<x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 0U;
	volatile int32_t x338 = INT32_MIN;
	static volatile int8_t x339 = INT8_MAX;
	int32_t x340 = 3605;
	volatile uint32_t t84 = 140U;

	t84 = (x337&(x338^(x339<x340)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MAX;
	static uint64_t x343 = 62486LLU;
	int8_t x344 = INT8_MAX;
	int32_t t85 = -5;

	t85 = (x341&(x342^(x343<x344)));

	if (t85 != 14) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	uint8_t x347 = 24U;

	t86 = (x345&(x346^(x347<x348)));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile uint32_t x351 = 0U;
	volatile int16_t x352 = -1;
	static volatile int32_t t87 = 10972;

	t87 = (x349&(x350^(x351<x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = 0;
	static int64_t x355 = 989LL;
	uint64_t x356 = UINT64_MAX;

	t88 = (x353&(x354^(x355<x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	volatile uint64_t x358 = 208437698429LLU;
	volatile int16_t x359 = INT16_MIN;
	static int32_t x360 = -1;
	uint64_t t89 = 258970LLU;

	t89 = (x357&(x358^(x359<x360)));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x361 = -48001236462LL;
	uint16_t x364 = 8807U;
	static int64_t t90 = -37481819878119136LL;

	t90 = (x361&(x362^(x363<x364)));

	if (t90 != 82432LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x367 = -1;
	int64_t x368 = INT64_MIN;
	static volatile int32_t t91 = -1;

	t91 = (x365&(x366^(x367<x368)));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x370 = 23U;
	static int32_t x371 = 93211;
	uint32_t x372 = 43U;

	t92 = (x369&(x370^(x371<x372)));

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	int8_t x375 = 20;
	int32_t x376 = INT32_MAX;
	volatile uint32_t t93 = 161106566U;

	t93 = (x373&(x374^(x375<x376)));

	if (t93 != 11U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	uint64_t x378 = 3LLU;
	uint16_t x380 = UINT16_MAX;

	t94 = (x377&(x378^(x379<x380)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint64_t x381 = UINT64_MAX;
	static int16_t x383 = -1;
	uint16_t x384 = 5529U;

	t95 = (x381&(x382^(x383<x384)));

	if (t95 != 18446744073709550483LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 106643434U;
	int32_t x386 = 625;
	volatile int8_t x387 = INT8_MIN;
	uint32_t t96 = 243960U;

	t96 = (x385&(x386^(x387<x388)));

	if (t96 != 608U) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	static int16_t x392 = INT16_MAX;
	static volatile int32_t t97 = 996;

	t97 = (x389&(x390^(x391<x392)));

	if (t97 != 2147483521) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = 371515307237LLU;
	volatile uint64_t x396 = 3976400631698838LLU;
	static volatile uint64_t t98 = 47782LLU;

	t98 = (x393&(x394^(x395<x396)));

	if (t98 != 371515307236LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -74LL;
	int8_t x398 = INT8_MIN;
	uint64_t x399 = 5621074617LLU;
	int8_t x400 = INT8_MAX;

	t99 = (x397&(x398^(x399<x400)));

	if (t99 != -128LL) { NG(); } else { ; }
	
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

