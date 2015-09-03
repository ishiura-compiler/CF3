#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 6544100293710993LLU;
volatile int32_t t1 = -25;
int32_t x9 = -855084192;
int8_t x10 = -1;
static int64_t x12 = -60141763879876301LL;
int8_t x13 = INT8_MIN;
int8_t x27 = INT8_MIN;
int32_t x43 = 23110223;
uint64_t t8 = 1092149251LLU;
int8_t x45 = INT8_MIN;
volatile uint8_t x46 = UINT8_MAX;
uint32_t x48 = UINT32_MAX;
int64_t x51 = 38479134074LL;
int32_t x52 = -21;
volatile uint32_t x53 = 865U;
int32_t x62 = INT32_MIN;
volatile int64_t t13 = -2673421800631LL;
int64_t x68 = -1LL;
uint64_t t14 = 112256889835831125LLU;
int8_t x69 = -51;
static int32_t t15 = 8696529;
uint8_t x73 = UINT8_MAX;
int16_t x74 = 748;
volatile int64_t x75 = INT64_MIN;
uint32_t x76 = UINT32_MAX;
int32_t x79 = -3073696;
volatile int64_t x81 = 12912290477346LL;
static uint32_t x83 = 32U;
int64_t x85 = -1LL;
int16_t x90 = INT16_MAX;
int16_t x95 = INT16_MIN;
static volatile uint8_t x101 = 11U;
int64_t x105 = INT64_MIN;
int8_t x106 = 51;
static int64_t x113 = -5915346957LL;
uint64_t t26 = 29459785LLU;
volatile int32_t t27 = 349623;
int16_t x121 = -1792;
volatile int32_t t28 = -13068037;
uint32_t x133 = 169558U;
int64_t t31 = 53239LL;
volatile int64_t x138 = -1LL;
static int64_t x145 = INT64_MAX;
int8_t x146 = INT8_MIN;
uint64_t x147 = 6815513856331LLU;
int64_t x149 = -4LL;
uint16_t x156 = UINT16_MAX;
static volatile int16_t x163 = INT16_MIN;
uint16_t x172 = 4U;
static volatile int64_t x177 = INT64_MIN;
int8_t x178 = INT8_MAX;
static uint8_t x179 = 9U;
int64_t x189 = 2062562LL;
static int8_t x190 = -21;
int32_t x193 = INT32_MIN;
int32_t x195 = 8;
static volatile uint32_t x198 = UINT32_MAX;
static int32_t x205 = INT32_MIN;
static uint64_t x208 = 139690652LLU;
volatile uint64_t t48 = 2104422810206LLU;
uint16_t x209 = 329U;
int32_t t49 = 14196046;
int8_t x213 = 7;
static int32_t x216 = INT32_MAX;
volatile int32_t t50 = 5749;
static volatile uint32_t x225 = UINT32_MAX;
int64_t x226 = -6304973392331LL;
static int64_t t53 = -12852578746930581LL;
int8_t x247 = -43;
int8_t x248 = -1;
static volatile uint64_t t56 = 6225748LLU;
uint8_t x250 = 17U;
int64_t t58 = 2630491LL;
uint32_t x262 = UINT32_MAX;
uint64_t x266 = UINT64_MAX;
volatile int32_t x285 = -27;
int8_t x286 = INT8_MAX;
int8_t x291 = INT8_MIN;
volatile int16_t x297 = INT16_MIN;
volatile uint32_t t69 = 215494678U;
int64_t x308 = INT64_MAX;
volatile uint8_t x316 = UINT8_MAX;
int8_t x318 = 9;
static uint8_t x319 = 2U;
int64_t t73 = -3557686LL;
volatile int8_t x330 = 59;
int16_t x337 = INT16_MIN;
volatile uint64_t t78 = 753322537LLU;
int8_t x342 = INT8_MAX;
static int32_t x344 = 260708;
uint8_t x363 = 0U;
static volatile int32_t t82 = -6767238;
int64_t x368 = INT64_MIN;
static volatile int32_t x369 = INT32_MIN;
static int16_t x385 = INT16_MIN;
static int8_t x390 = INT8_MIN;
int64_t t89 = -52805139902581LL;
int64_t t90 = -52136LL;
int8_t x418 = 38;
int64_t x420 = INT64_MIN;
uint64_t x426 = UINT64_MAX;
int64_t x431 = INT64_MIN;
uint8_t x432 = UINT8_MAX;
static volatile int64_t t97 = -7LL;
uint64_t x442 = 1828LLU;
uint16_t x444 = 296U;


void f0(void) {
	uint8_t x2 = 1U;
	volatile int16_t x3 = INT16_MAX;
	static volatile uint32_t x4 = 26U;
	uint64_t t0 = 1LLU;

	t0 = (x1+(x2-(x3%x4)));

	if (t0 != 6544104588678283LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MIN;
	static uint8_t x6 = 1U;
	static volatile int32_t x7 = INT32_MAX;
	static int8_t x8 = -1;

	t1 = (x5+(x6-(x7%x8)));

	if (t1 != -32767) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x11 = INT32_MIN;
	int64_t t2 = 3448LL;

	t2 = (x9+(x10-(x11%x12)));

	if (t2 != 1292399455LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MAX;
	static uint8_t x15 = 4U;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -57;

	t3 = (x13+(x14-(x15%x16)));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = -12295964;
	uint32_t x22 = UINT32_MAX;
	volatile int32_t x23 = -444121430;
	int8_t x24 = INT8_MAX;
	volatile uint32_t t4 = 710695U;

	t4 = (x21+(x22-(x23%x24)));

	if (t4 != 4282671348U) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	uint8_t x26 = 61U;
	volatile int32_t x28 = -57299678;
	volatile int32_t t5 = -42;

	t5 = (x25+(x26-(x27%x28)));

	if (t5 != -2147483459) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = UINT64_MAX;
	uint32_t x30 = 224U;
	volatile int8_t x31 = 6;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 3161926734LLU;

	t6 = (x29+(x30-(x31%x32)));

	if (t6 != 217LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	volatile int64_t x34 = -3450024LL;
	static int8_t x35 = INT8_MIN;
	uint16_t x36 = 59U;
	volatile int64_t t7 = -53347457325LL;

	t7 = (x33+(x34-(x35%x36)));

	if (t7 != 9223372036851325793LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x41 = -1;
	uint64_t x42 = 0LLU;
	volatile uint64_t x44 = UINT64_MAX;

	t8 = (x41+(x42-(x43%x44)));

	if (t8 != 18446744073686441392LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x47 = -1;
	volatile uint32_t t9 = 106U;

	t9 = (x45+(x46-(x47%x48)));

	if (t9 != 127U) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = -44707243;
	uint8_t x50 = 1U;
	static int64_t t10 = 59154LL;

	t10 = (x49+(x50-(x51%x52)));

	if (t10 != -44707259LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x54 = INT32_MIN;
	volatile int8_t x55 = INT8_MAX;
	int64_t x56 = -1LL;
	int64_t t11 = -57109LL;

	t11 = (x53+(x54-(x55%x56)));

	if (t11 != -2147482783LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = UINT8_MAX;
	int64_t x58 = INT64_MIN;
	static int32_t x59 = INT32_MIN;
	int64_t x60 = -27334647LL;
	static int64_t t12 = -8109LL;

	t12 = (x57+(x58-(x59%x60)));

	if (t12 != -9223372036839394371LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = 0;
	volatile int64_t x63 = INT64_MIN;
	uint16_t x64 = 1910U;

	t13 = (x61+(x62-(x63%x64)));

	if (t13 != -2147482680LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 19427423497025842LLU;
	int8_t x66 = INT8_MAX;
	int64_t x67 = INT64_MIN;

	t14 = (x65+(x66-(x67%x68)));

	if (t14 != 19427423497025969LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x70 = 55U;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = -2015948;

	t15 = (x69+(x70-(x71%x72)));

	if (t15 != 132) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t t16 = 12620354223024883LL;

	t16 = (x73+(x74-(x75%x76)));

	if (t16 != 2147484651LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = -176554;
	static int32_t x78 = -1;
	int16_t x80 = -60;
	static volatile int32_t t17 = -193055245;

	t17 = (x77+(x78-(x79%x80)));

	if (t17 != -176539) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x82 = UINT32_MAX;
	int16_t x84 = INT16_MIN;
	int64_t t18 = -69826115935906846LL;

	t18 = (x81+(x82-(x83%x84)));

	if (t18 != 12916585444609LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int8_t x86 = -14;
	uint32_t x87 = 74934U;
	static int64_t x88 = INT64_MAX;
	volatile int64_t t19 = 19857687711341LL;

	t19 = (x85+(x86-(x87%x88)));

	if (t19 != -74949LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x89 = 0;
	static int16_t x91 = INT16_MAX;
	int64_t x92 = -1LL;
	static volatile int64_t t20 = 509LL;

	t20 = (x89+(x90-(x91%x92)));

	if (t20 != 32767LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 1;
	static int32_t x94 = 884137583;
	static int64_t x96 = -1LL;
	volatile int64_t t21 = 3016750609794918LL;

	t21 = (x93+(x94-(x95%x96)));

	if (t21 != 884137584LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x97 = INT32_MAX;
	int8_t x98 = 2;
	static uint64_t x99 = UINT64_MAX;
	uint16_t x100 = UINT16_MAX;
	static volatile uint64_t t22 = 22LLU;

	t22 = (x97+(x98-(x99%x100)));

	if (t22 != 2147483649LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x102 = -1LL;
	int8_t x103 = INT8_MAX;
	static int16_t x104 = INT16_MIN;
	static int64_t t23 = 304899066804LL;

	t23 = (x101+(x102-(x103%x104)));

	if (t23 != -117LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x107 = -1LL;
	volatile uint8_t x108 = UINT8_MAX;
	volatile int64_t t24 = -5876LL;

	t24 = (x105+(x106-(x107%x108)));

	if (t24 != -9223372036854775756LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x109 = 6;
	volatile int64_t x110 = -1LL;
	uint64_t x111 = 92463927304925388LLU;
	static int32_t x112 = INT32_MIN;
	volatile uint64_t t25 = 271LLU;

	t25 = (x109+(x110-(x111%x112)));

	if (t25 != 18354280146404626233LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x114 = -2173;
	static uint64_t x115 = 9489743LLU;
	int32_t x116 = -148715;

	t26 = (x113+(x114-(x115%x116)));

	if (t26 != 18446744067784712743LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 0;
	int8_t x118 = INT8_MIN;
	volatile int32_t x119 = INT32_MAX;
	static volatile uint8_t x120 = UINT8_MAX;

	t27 = (x117+(x118-(x119%x120)));

	if (t27 != -255) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x122 = 1;
	uint8_t x123 = 1U;
	int32_t x124 = INT32_MAX;

	t28 = (x121+(x122-(x123%x124)));

	if (t28 != -1792) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x125 = INT16_MAX;
	uint16_t x126 = 4469U;
	volatile uint16_t x127 = 19U;
	uint32_t x128 = 23U;
	uint32_t t29 = 6643286U;

	t29 = (x125+(x126-(x127%x128)));

	if (t29 != 37217U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = -179;
	volatile int8_t x130 = -1;
	static int8_t x131 = -1;
	int8_t x132 = -1;
	volatile int32_t t30 = 1;

	t30 = (x129+(x130-(x131%x132)));

	if (t30 != -180) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x134 = 4032139U;
	int64_t x135 = -13651483104469LL;
	int64_t x136 = INT64_MIN;

	t31 = (x133+(x134-(x135%x136)));

	if (t31 != 13651487306166LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x137 = INT32_MIN;
	static uint8_t x139 = UINT8_MAX;
	int64_t x140 = INT64_MIN;
	int64_t t32 = 257932503LL;

	t32 = (x137+(x138-(x139%x140)));

	if (t32 != -2147483904LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 4U;
	static int8_t x142 = INT8_MIN;
	volatile int8_t x143 = INT8_MIN;
	int64_t x144 = INT64_MIN;
	volatile int64_t t33 = -39278969LL;

	t33 = (x141+(x142-(x143%x144)));

	if (t33 != 4LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x148 = INT32_MIN;
	volatile uint64_t t34 = 4052316199440LLU;

	t34 = (x145+(x146-(x147%x148)));

	if (t34 != 9223365221340919348LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = INT32_MAX;
	uint32_t x151 = UINT32_MAX;
	int16_t x152 = INT16_MIN;
	int64_t t35 = 5LL;

	t35 = (x149+(x150-(x151%x152)));

	if (t35 != 2147450876LL) { NG(); } else { ; }
	
}

void f36(void) {
	static uint32_t x153 = UINT32_MAX;
	static int32_t x154 = -1;
	static volatile int64_t x155 = INT64_MAX;
	int64_t t36 = 7909726447929041LL;

	t36 = (x153+(x154-(x155%x156)));

	if (t36 != 4294934527LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	volatile uint32_t x158 = UINT32_MAX;
	int32_t x159 = -3437527;
	static int8_t x160 = 5;
	int64_t t37 = -1344066131071LL;

	t37 = (x157+(x158-(x159%x160)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = 505504LLU;
	uint32_t x162 = UINT32_MAX;
	uint8_t x164 = 92U;
	uint64_t t38 = 30225130170255823LLU;

	t38 = (x161+(x162-(x163%x164)));

	if (t38 != 505519LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	int64_t x168 = 55435LL;
	static int64_t t39 = -7516LL;

	t39 = (x165+(x166-(x167%x168)));

	if (t39 != 32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x169 = -1;
	volatile uint64_t x170 = 0LLU;
	int8_t x171 = INT8_MIN;
	volatile uint64_t t40 = UINT64_MAX;

	t40 = (x169+(x170-(x171%x172)));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MIN;
	int16_t x174 = INT16_MAX;
	static int32_t x175 = -1;
	int8_t x176 = INT8_MIN;
	volatile int32_t t41 = 0;

	t41 = (x173+(x174-(x175%x176)));

	if (t41 != -2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x180 = INT16_MIN;
	static volatile int64_t t42 = -7059637345LL;

	t42 = (x177+(x178-(x179%x180)));

	if (t42 != -9223372036854775690LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x181 = INT64_MIN;
	uint64_t x182 = 7652170768400LLU;
	uint8_t x183 = 3U;
	int32_t x184 = -1;
	volatile uint64_t t43 = 1LLU;

	t43 = (x181+(x182-(x183%x184)));

	if (t43 != 9223379689025544208LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = 13036U;
	volatile int32_t x186 = INT32_MAX;
	int32_t x187 = -32;
	volatile int64_t x188 = -1LL;
	int64_t t44 = -7690531489863LL;

	t44 = (x185+(x186-(x187%x188)));

	if (t44 != 2147496683LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x191 = INT8_MIN;
	volatile uint8_t x192 = UINT8_MAX;
	volatile int64_t t45 = -95LL;

	t45 = (x189+(x190-(x191%x192)));

	if (t45 != 2062669LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x194 = 2038744U;
	uint8_t x196 = 23U;
	volatile uint32_t t46 = 76783770U;

	t46 = (x193+(x194-(x195%x196)));

	if (t46 != 2149522384U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x197 = INT32_MAX;
	int8_t x199 = -18;
	volatile int8_t x200 = INT8_MAX;
	uint32_t t47 = 7573642U;

	t47 = (x197+(x198-(x199%x200)));

	if (t47 != 2147483664U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x206 = -1LL;
	int8_t x207 = INT8_MIN;

	t48 = (x205+(x206-(x207%x208)));

	if (t48 != 18446744071444754347LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x210 = UINT16_MAX;
	int8_t x211 = 8;
	uint8_t x212 = UINT8_MAX;

	t49 = (x209+(x210-(x211%x212)));

	if (t49 != 65856) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x214 = 25;
	uint8_t x215 = 0U;

	t50 = (x213+(x214-(x215%x216)));

	if (t50 != 32) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = UINT32_MAX;
	int8_t x218 = -1;
	static int32_t x219 = INT32_MIN;
	volatile uint8_t x220 = 21U;
	uint32_t t51 = 181672886U;

	t51 = (x217+(x218-(x219%x220)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x227 = 419151826U;
	int32_t x228 = -406098;
	static int64_t t52 = -412967097456LL;

	t52 = (x225+(x226-(x227%x228)));

	if (t52 != -6301097576862LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = 219LL;
	static uint8_t x234 = UINT8_MAX;
	int32_t x235 = INT32_MIN;
	volatile int32_t x236 = INT32_MAX;

	t53 = (x233+(x234-(x235%x236)));

	if (t53 != 475LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -61324LL;
	uint8_t x238 = 24U;
	int64_t x239 = INT64_MIN;
	int64_t x240 = -1LL;
	volatile int64_t t54 = 6239847023835LL;

	t54 = (x237+(x238-(x239%x240)));

	if (t54 != -61300LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x241 = 3U;
	int64_t x242 = -1LL;
	uint32_t x243 = 853271495U;
	static uint64_t x244 = 36534766548420LLU;
	static uint64_t t55 = 202LLU;

	t55 = (x241+(x242-(x243%x244)));

	if (t55 != 18446744072856280123LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x245 = 144;
	volatile uint64_t x246 = 7LLU;

	t56 = (x245+(x246-(x247%x248)));

	if (t56 != 151LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MAX;
	volatile uint16_t x251 = 15276U;
	uint8_t x252 = UINT8_MAX;
	int32_t t57 = -493542;

	t57 = (x249+(x250-(x251%x252)));

	if (t57 != 32553) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x253 = 32545536LL;
	uint32_t x254 = 50669U;
	uint8_t x255 = 1U;
	int8_t x256 = -1;

	t58 = (x253+(x254-(x255%x256)));

	if (t58 != 32596205LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x257 = -3707346LL;
	uint16_t x258 = UINT16_MAX;
	int64_t x259 = INT64_MAX;
	uint16_t x260 = UINT16_MAX;
	int64_t t59 = -802270094LL;

	t59 = (x257+(x258-(x259%x260)));

	if (t59 != -3674578LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x261 = UINT8_MAX;
	static volatile uint64_t x263 = UINT64_MAX;
	volatile int8_t x264 = 2;
	uint64_t t60 = 808LLU;

	t60 = (x261+(x262-(x263%x264)));

	if (t60 != 4294967549LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	volatile int8_t x267 = 1;
	volatile int64_t x268 = INT64_MIN;
	uint64_t t61 = 3844136399LLU;

	t61 = (x265+(x266-(x267%x268)));

	if (t61 != 125LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x269 = UINT8_MAX;
	int8_t x270 = INT8_MAX;
	int8_t x271 = 7;
	volatile int8_t x272 = -1;
	volatile int32_t t62 = -3610;

	t62 = (x269+(x270-(x271%x272)));

	if (t62 != 382) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x277 = 11U;
	static uint64_t x278 = 7062476918LLU;
	int8_t x279 = -1;
	volatile uint32_t x280 = UINT32_MAX;
	volatile uint64_t t63 = 3034259766092LLU;

	t63 = (x277+(x278-(x279%x280)));

	if (t63 != 7062476929LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x281 = -1;
	int16_t x282 = 55;
	static volatile uint8_t x283 = 7U;
	int64_t x284 = -1LL;
	int64_t t64 = -16642202586LL;

	t64 = (x281+(x282-(x283%x284)));

	if (t64 != 54LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x287 = 7588002305793LLU;
	uint64_t x288 = 265301069498LLU;
	uint64_t t65 = 745843625217LLU;

	t65 = (x285+(x286-(x287%x288)));

	if (t65 != 18446743914137191867LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x289 = 0U;
	static int8_t x290 = -1;
	int64_t x292 = -469LL;
	volatile int64_t t66 = -9797901771LL;

	t66 = (x289+(x290-(x291%x292)));

	if (t66 != 127LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x293 = 1182472037U;
	static int32_t x294 = -1;
	int64_t x295 = INT64_MIN;
	int32_t x296 = INT32_MAX;
	volatile int64_t t67 = 151736504687LL;

	t67 = (x293+(x294-(x295%x296)));

	if (t67 != 1182472038LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x298 = -23;
	uint16_t x299 = 1U;
	int32_t x300 = INT32_MIN;
	static volatile int32_t t68 = -1;

	t68 = (x297+(x298-(x299%x300)));

	if (t68 != -32792) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x301 = INT8_MIN;
	int16_t x302 = 2;
	volatile uint8_t x303 = 20U;
	uint32_t x304 = 118U;

	t69 = (x301+(x302-(x303%x304)));

	if (t69 != 4294967150U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x305 = 129;
	int16_t x306 = INT16_MIN;
	uint32_t x307 = 2U;
	static volatile int64_t t70 = 1005826316701348901LL;

	t70 = (x305+(x306-(x307%x308)));

	if (t70 != -32641LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x309 = 216U;
	int64_t x310 = 1LL;
	int64_t x311 = -59022LL;
	int16_t x312 = INT16_MAX;
	int64_t t71 = -1LL;

	t71 = (x309+(x310-(x311%x312)));

	if (t71 != 26472LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x313 = INT32_MIN;
	int16_t x314 = -1;
	volatile int8_t x315 = INT8_MIN;
	int32_t t72 = -356746;

	t72 = (x313+(x314-(x315%x316)));

	if (t72 != -2147483521) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = -30;
	int64_t x320 = INT64_MAX;

	t73 = (x317+(x318-(x319%x320)));

	if (t73 != -23LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = INT32_MIN;
	uint32_t x322 = 13511579U;
	int8_t x323 = INT8_MAX;
	int32_t x324 = -4034815;
	volatile uint32_t t74 = 5236235U;

	t74 = (x321+(x322-(x323%x324)));

	if (t74 != 2160995100U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x325 = 123;
	int64_t x326 = -1LL;
	volatile int8_t x327 = 23;
	volatile uint8_t x328 = UINT8_MAX;
	int64_t t75 = -19875LL;

	t75 = (x325+(x326-(x327%x328)));

	if (t75 != 99LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x329 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	volatile int16_t x332 = -1;
	volatile int32_t t76 = -1327;

	t76 = (x329+(x330-(x331%x332)));

	if (t76 != -2147483589) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x333 = 26241LLU;
	volatile int8_t x334 = INT8_MIN;
	static uint8_t x335 = 51U;
	static int32_t x336 = INT32_MIN;
	uint64_t t77 = 2535989926361270LLU;

	t77 = (x333+(x334-(x335%x336)));

	if (t77 != 26062LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x338 = 1586LLU;
	int32_t x339 = 15075118;
	int32_t x340 = -473662;

	t78 = (x337+(x338-(x339%x340)));

	if (t78 != 18446744073709128838LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x341 = 31;
	uint32_t x343 = 23204U;
	volatile uint32_t t79 = 63U;

	t79 = (x341+(x342-(x343%x344)));

	if (t79 != 4294944250U) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = 47U;
	uint64_t x350 = 3477996516497905LLU;
	int32_t x351 = INT32_MIN;
	static int16_t x352 = INT16_MIN;
	volatile uint64_t t80 = 23420642252217LLU;

	t80 = (x349+(x350-(x351%x352)));

	if (t80 != 3477996516497952LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = -1;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = 18695147LLU;
	uint16_t x360 = 4U;
	uint64_t t81 = 4674570266LLU;

	t81 = (x357+(x358-(x359%x360)));

	if (t81 != 9223372036854775804LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x361 = UINT8_MAX;
	volatile int32_t x362 = INT32_MIN;
	int32_t x364 = INT32_MAX;

	t82 = (x361+(x362-(x363%x364)));

	if (t82 != -2147483393) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x365 = -1;
	int16_t x366 = 1340;
	volatile int64_t x367 = INT64_MIN;
	static volatile int64_t t83 = -884737315LL;

	t83 = (x365+(x366-(x367%x368)));

	if (t83 != 1339LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x370 = 23U;
	uint64_t x371 = 292LLU;
	int32_t x372 = INT32_MAX;
	volatile uint64_t t84 = 152328480807161LLU;

	t84 = (x369+(x370-(x371%x372)));

	if (t84 != 18446744071562067699LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x373 = INT16_MAX;
	volatile int32_t x374 = -1;
	static int8_t x375 = -3;
	uint64_t x376 = 3074LLU;
	uint64_t t85 = 132988627374729897LLU;

	t85 = (x373+(x374-(x375%x376)));

	if (t85 != 31005LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x377 = INT16_MIN;
	volatile int8_t x378 = -29;
	static uint64_t x379 = 9801489LLU;
	static int32_t x380 = -18896472;
	static volatile uint64_t t86 = 5907146006257LLU;

	t86 = (x377+(x378-(x379%x380)));

	if (t86 != 18446744073699717330LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = 1911384;
	static uint32_t x382 = 474U;
	static int8_t x383 = 0;
	int16_t x384 = INT16_MAX;
	static volatile uint32_t t87 = 24881U;

	t87 = (x381+(x382-(x383%x384)));

	if (t87 != 1911858U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x386 = -1;
	int16_t x387 = INT16_MIN;
	static uint64_t x388 = 53468943252LLU;
	uint64_t t88 = 4LLU;

	t88 = (x385+(x386-(x387%x388)));

	if (t88 != 18446744036977922951LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x389 = INT64_MAX;
	int32_t x391 = -1;
	static uint8_t x392 = 50U;

	t89 = (x389+(x390-(x391%x392)));

	if (t89 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x393 = -1;
	uint32_t x394 = 9U;
	int64_t x395 = 734591LL;
	int64_t x396 = 3456150188543909359LL;

	t90 = (x393+(x394-(x395%x396)));

	if (t90 != -734583LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x401 = INT8_MIN;
	static volatile int64_t x402 = INT64_MAX;
	int16_t x403 = 2;
	int16_t x404 = 474;
	volatile int64_t t91 = 2454115629495468LL;

	t91 = (x401+(x402-(x403%x404)));

	if (t91 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x409 = 50U;
	uint16_t x410 = 1U;
	uint8_t x411 = 53U;
	volatile int16_t x412 = 10007;
	volatile int32_t t92 = 1031764;

	t92 = (x409+(x410-(x411%x412)));

	if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x413 = -6464318LL;
	uint32_t x414 = 2389U;
	int64_t x415 = -1LL;
	static volatile int64_t x416 = INT64_MIN;
	static int64_t t93 = 12373785609663174LL;

	t93 = (x413+(x414-(x415%x416)));

	if (t93 != -6461928LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x417 = -1LL;
	int8_t x419 = INT8_MAX;
	volatile int64_t t94 = -1071226457447495LL;

	t94 = (x417+(x418-(x419%x420)));

	if (t94 != -90LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x425 = 377U;
	static int8_t x427 = -1;
	int8_t x428 = -1;
	uint64_t t95 = 11181254793LLU;

	t95 = (x425+(x426-(x427%x428)));

	if (t95 != 376LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x429 = INT16_MIN;
	static uint64_t x430 = 1964932420478410LLU;
	uint64_t t96 = 413389910LLU;

	t96 = (x429+(x430-(x431%x432)));

	if (t96 != 1964932420445770LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x433 = INT8_MAX;
	uint8_t x434 = 1U;
	int32_t x435 = -166178;
	int64_t x436 = INT64_MIN;

	t97 = (x433+(x434-(x435%x436)));

	if (t97 != 166306LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x441 = INT16_MIN;
	static uint16_t x443 = 9030U;
	volatile uint64_t t98 = 735906236432LLU;

	t98 = (x441+(x442-(x443%x444)));

	if (t98 != 18446744073709520526LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x449 = INT8_MIN;
	static uint8_t x450 = UINT8_MAX;
	uint8_t x451 = UINT8_MAX;
	uint64_t x452 = UINT64_MAX;
	uint64_t t99 = 27LLU;

	t99 = (x449+(x450-(x451%x452)));

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

