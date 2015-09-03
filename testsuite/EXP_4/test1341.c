#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 2150324907388LLU;
int64_t x14 = INT64_MAX;
volatile int8_t x22 = 6;
static volatile int16_t x26 = 0;
static int64_t x27 = -805771012240LL;
static volatile int8_t x32 = -2;
volatile int32_t t8 = 391623;
uint32_t x41 = 646309223U;
uint32_t t9 = 48808U;
uint64_t t10 = 384083263LLU;
int8_t x54 = INT8_MAX;
int8_t x56 = -1;
int16_t x72 = INT16_MIN;
volatile int32_t x73 = -1;
int8_t x78 = INT8_MIN;
int64_t t17 = 26613403748853368LL;
volatile int8_t x93 = INT8_MIN;
uint16_t x96 = 10183U;
int32_t x98 = -840976;
int32_t x100 = -10;
static int64_t t21 = 930224LL;
int8_t x111 = INT8_MIN;
uint16_t x121 = UINT16_MAX;
uint64_t x123 = 37203921906567LLU;
static int64_t x130 = -1LL;
int8_t x131 = INT8_MAX;
uint8_t x132 = UINT8_MAX;
int8_t x140 = INT8_MIN;
volatile int64_t t27 = 792748LL;
int8_t x143 = -1;
static int16_t x144 = INT16_MIN;
static int64_t t31 = -334LL;
static int32_t x157 = INT32_MIN;
uint64_t t32 = 8203464550779LLU;
volatile int32_t x162 = INT32_MIN;
int8_t x174 = -13;
int8_t x175 = 0;
int16_t x179 = -2;
volatile int32_t x182 = INT32_MAX;
int16_t x191 = -146;
static int64_t x193 = INT64_MAX;
int32_t x195 = 287583111;
static int32_t x203 = 17785089;
int32_t t43 = -10427;
uint8_t x212 = UINT8_MAX;
int64_t x216 = 34897969LL;
static volatile int32_t t45 = 2965;
uint64_t x228 = UINT64_MAX;
int8_t x231 = -53;
volatile int32_t t49 = -13896235;
uint32_t x238 = 15083656U;
uint64_t x239 = 180175LLU;
volatile int64_t t51 = 1LL;
int32_t x247 = INT32_MIN;
uint8_t x254 = 7U;
volatile int16_t x268 = -1;
uint32_t x270 = 11U;
uint32_t x273 = 58604U;
uint32_t x283 = 0U;
volatile int32_t x294 = INT32_MIN;
uint32_t x295 = 7566882U;
volatile uint64_t x301 = UINT64_MAX;
int16_t x302 = INT16_MAX;
uint8_t x310 = 19U;
uint8_t x312 = 7U;
uint32_t x320 = 5318U;
static int16_t x330 = INT16_MIN;
int32_t t72 = -7765419;
volatile int16_t x339 = -1;
volatile uint16_t x346 = UINT16_MAX;
volatile int64_t x348 = INT64_MIN;
int32_t x363 = INT32_MIN;
volatile uint32_t t80 = 1415734109U;
int32_t x366 = -1;
volatile int64_t t81 = -60666275187050LL;
volatile uint64_t t82 = 832LLU;
int8_t x382 = -1;
volatile uint16_t x384 = 229U;
int64_t x393 = -1LL;
volatile int32_t x396 = -29600649;
int64_t t86 = 7070911877LL;
static uint32_t x398 = 144035814U;
uint64_t x399 = 20811082510LLU;
int64_t x400 = INT64_MIN;
int64_t x401 = -1LL;
uint32_t x404 = 4445985U;
int32_t t89 = 7424703;
volatile int32_t t91 = 4;
int64_t x419 = -375444633789640717LL;
int32_t t94 = 22001564;
int8_t x430 = INT8_MIN;
volatile int64_t x438 = INT64_MIN;
volatile int16_t x439 = -1;
int8_t x445 = INT8_MIN;
uint64_t t99 = 4676966060430853291LLU;


void f0(void) {
	volatile int64_t x2 = INT64_MAX;
	static volatile uint32_t x3 = 1U;
	static int8_t x4 = INT8_MAX;
	volatile uint64_t t0 = 2077383923743090LLU;

	t0 = (x1-(x2^(x3==x4)));

	if (t0 != 9223374187179683197LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 319120472191LLU;
	int16_t x6 = -1;
	int8_t x7 = 59;
	uint32_t x8 = 344252U;
	volatile uint64_t t1 = 66330831380258LLU;

	t1 = (x5-(x6^(x7==x8)));

	if (t1 != 319120472192LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	volatile uint64_t x10 = 13596228302LLU;
	int16_t x11 = INT16_MIN;
	uint32_t x12 = UINT32_MAX;
	static volatile uint64_t t2 = 13589268285LLU;

	t2 = (x9-(x10^(x11==x12)));

	if (t2 != 18446744060113323313LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x15 = INT32_MAX;
	uint64_t x16 = UINT64_MAX;
	int64_t t3 = INT64_MIN;

	t3 = (x13-(x14^(x15==x16)));

	if (t3 != INT64_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int32_t x18 = 198;
	int16_t x19 = INT16_MIN;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t4 = 69845886163458LLU;

	t4 = (x17-(x18^(x19==x20)));

	if (t4 != 18446744073709551417LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -8LL;
	static uint32_t x23 = 48601157U;
	int64_t x24 = 0LL;
	static int64_t t5 = 1880350817180669LL;

	t5 = (x21-(x22^(x23==x24)));

	if (t5 != -14LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x28 = UINT16_MAX;
	static volatile int64_t t6 = INT64_MIN;

	t6 = (x25-(x26^(x27==x28)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	uint16_t x30 = 4693U;
	static int32_t x31 = -1;
	static int32_t t7 = -142937655;

	t7 = (x29-(x30^(x31==x32)));

	if (t7 != -4694) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = 16262U;
	int8_t x34 = INT8_MIN;
	uint64_t x35 = UINT64_MAX;
	int64_t x36 = INT64_MIN;

	t8 = (x33-(x34^(x35==x36)));

	if (t8 != 16390) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x42 = 1;
	int32_t x43 = 25;
	uint8_t x44 = 8U;

	t9 = (x41-(x42^(x43==x44)));

	if (t9 != 646309222U) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 90U;
	uint64_t x46 = UINT64_MAX;
	volatile int16_t x47 = 1302;
	int64_t x48 = INT64_MIN;

	t10 = (x45-(x46^(x47==x48)));

	if (t10 != 91LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MAX;
	int8_t x50 = 0;
	volatile int64_t x51 = INT64_MAX;
	volatile uint32_t x52 = 33524659U;
	static volatile int32_t t11 = INT32_MAX;

	t11 = (x49-(x50^(x51==x52)));

	if (t11 != INT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = UINT64_MAX;
	static volatile int8_t x55 = -1;
	volatile uint64_t t12 = 2974422LLU;

	t12 = (x53-(x54^(x55==x56)));

	if (t12 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = -12292912373182LL;
	int16_t x66 = INT16_MIN;
	int16_t x67 = INT16_MAX;
	int16_t x68 = INT16_MAX;
	int64_t t13 = -476990855552499776LL;

	t13 = (x65-(x66^(x67==x68)));

	if (t13 != -12292912340415LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MAX;
	volatile int32_t t14 = -4;

	t14 = (x69-(x70^(x71==x72)));

	if (t14 != 128) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint32_t x74 = 367U;
	uint32_t x75 = UINT32_MAX;
	int32_t x76 = -1;
	volatile uint32_t t15 = 215U;

	t15 = (x73-(x74^(x75==x76)));

	if (t15 != 4294966929U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x77 = -16;
	static uint8_t x79 = 77U;
	static volatile uint64_t x80 = UINT64_MAX;
	volatile int32_t t16 = -1;

	t16 = (x77-(x78^(x79==x80)));

	if (t16 != 112) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -40;
	int64_t x82 = 21757LL;
	volatile int64_t x83 = INT64_MIN;
	int16_t x84 = 113;

	t17 = (x81-(x82^(x83==x84)));

	if (t17 != -21797LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x94 = 1U;
	static uint32_t x95 = 60629U;
	volatile int32_t t18 = 20782038;

	t18 = (x93-(x94^(x95==x96)));

	if (t18 != -129) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x97 = 426673U;
	int32_t x99 = INT32_MIN;
	uint32_t t19 = 12228U;

	t19 = (x97-(x98^(x99==x100)));

	if (t19 != 1267649U) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x101 = -1LL;
	volatile uint16_t x102 = 1U;
	uint16_t x103 = 14U;
	int64_t x104 = INT64_MAX;
	static int64_t t20 = -207850LL;

	t20 = (x101-(x102^(x103==x104)));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x105 = -11251270838LL;
	static uint8_t x106 = 26U;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = UINT8_MAX;

	t21 = (x105-(x106^(x107==x108)));

	if (t21 != -11251270864LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = 1073120249586054117LLU;
	int8_t x110 = -1;
	static uint8_t x112 = 8U;
	static volatile uint64_t t22 = 982LLU;

	t22 = (x109-(x110^(x111==x112)));

	if (t22 != 1073120249586054118LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x117 = INT16_MIN;
	volatile uint32_t x118 = 2U;
	int64_t x119 = 59043717264441LL;
	uint64_t x120 = 34080786990LLU;
	uint32_t t23 = 111502U;

	t23 = (x117-(x118^(x119==x120)));

	if (t23 != 4294934526U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x122 = 514874401LL;
	static uint64_t x124 = 12589488077490LLU;
	int64_t t24 = 253414LL;

	t24 = (x121-(x122^(x123==x124)));

	if (t24 != -514808866LL) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int32_t x125 = -1;
	int8_t x126 = INT8_MAX;
	int32_t x127 = 1582716;
	int8_t x128 = -1;
	int32_t t25 = -66;

	t25 = (x125-(x126^(x127==x128)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int64_t t26 = 880347805576269029LL;

	t26 = (x129-(x130^(x131==x132)));

	if (t26 != 65536LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile int64_t x138 = INT64_MIN;
	uint64_t x139 = UINT64_MAX;

	t27 = (x137-(x138^(x139==x140)));

	if (t27 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x141 = UINT64_MAX;
	int16_t x142 = -1;
	volatile uint64_t t28 = 98968324LLU;

	t28 = (x141-(x142^(x143==x144)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x145 = -1;
	volatile int16_t x146 = 52;
	static uint32_t x147 = 81498475U;
	int16_t x148 = -1;
	int32_t t29 = -1297079;

	t29 = (x145-(x146^(x147==x148)));

	if (t29 != -53) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x149 = -32;
	int8_t x150 = -1;
	int64_t x151 = -1LL;
	volatile int64_t x152 = -1LL;
	int32_t t30 = 12;

	t30 = (x149-(x150^(x151==x152)));

	if (t30 != -30) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x153 = -1LL;
	static int16_t x154 = INT16_MAX;
	static uint16_t x155 = 3410U;
	int32_t x156 = INT32_MIN;

	t31 = (x153-(x154^(x155==x156)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x158 = 3534LLU;
	int16_t x159 = INT16_MIN;
	int32_t x160 = 20658;

	t32 = (x157-(x158^(x159==x160)));

	if (t32 != 18446744071562064434LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x161 = -1;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = UINT32_MAX;
	static volatile int32_t t33 = INT32_MAX;

	t33 = (x161-(x162^(x163==x164)));

	if (t33 != INT32_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = UINT16_MAX;
	int32_t x166 = -1;
	int64_t x167 = 47286836932531LL;
	int64_t x168 = 6616684LL;
	static int32_t t34 = -6317519;

	t34 = (x165-(x166^(x167==x168)));

	if (t34 != 65536) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x169 = UINT32_MAX;
	static volatile uint16_t x170 = 6U;
	static int32_t x171 = INT32_MAX;
	uint64_t x172 = 104412869LLU;
	static uint32_t t35 = 1192986989U;

	t35 = (x169-(x170^(x171==x172)));

	if (t35 != 4294967289U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int64_t x176 = 252582LL;
	uint32_t t36 = 4U;

	t36 = (x173-(x174^(x175==x176)));

	if (t36 != 12U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x177 = INT16_MIN;
	int8_t x178 = -51;
	int32_t x180 = -1;
	volatile int32_t t37 = 111102;

	t37 = (x177-(x178^(x179==x180)));

	if (t37 != -32717) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x181 = 85LLU;
	int8_t x183 = INT8_MIN;
	int8_t x184 = -31;
	uint64_t t38 = 9LLU;

	t38 = (x181-(x182^(x183==x184)));

	if (t38 != 18446744071562068054LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x189 = 8005U;
	volatile uint32_t x190 = UINT32_MAX;
	int16_t x192 = INT16_MIN;
	uint32_t t39 = 7718238U;

	t39 = (x189-(x190^(x191==x192)));

	if (t39 != 8006U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x194 = 351491595U;
	int8_t x196 = -1;
	int64_t t40 = -89386779LL;

	t40 = (x193-(x194^(x195==x196)));

	if (t40 != 9223372036503284212LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	volatile uint16_t x198 = 48U;
	volatile int64_t x199 = 582601099620LL;
	volatile int64_t x200 = 144005LL;
	volatile int32_t t41 = 2324;

	t41 = (x197-(x198^(x199==x200)));

	if (t41 != -49) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x201 = -63794402;
	static volatile int8_t x202 = INT8_MAX;
	static volatile int64_t x204 = -220734545880LL;
	volatile int32_t t42 = 80727;

	t42 = (x201-(x202^(x203==x204)));

	if (t42 != -63794529) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x205 = INT16_MAX;
	int16_t x206 = -3;
	static int32_t x207 = INT32_MAX;
	int64_t x208 = -1LL;

	t43 = (x205-(x206^(x207==x208)));

	if (t43 != 32770) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x209 = UINT64_MAX;
	static int8_t x210 = -1;
	uint64_t x211 = UINT64_MAX;
	volatile uint64_t t44 = 143313169090032257LLU;

	t44 = (x209-(x210^(x211==x212)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x213 = 0;
	uint16_t x214 = UINT16_MAX;
	int8_t x215 = 61;

	t45 = (x213-(x214^(x215==x216)));

	if (t45 != -65535) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x217 = INT32_MIN;
	int64_t x218 = 84988LL;
	int64_t x219 = 2124804LL;
	uint8_t x220 = UINT8_MAX;
	volatile int64_t t46 = 1508063157331LL;

	t46 = (x217-(x218^(x219==x220)));

	if (t46 != -2147568636LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x221 = INT32_MAX;
	uint16_t x222 = 3661U;
	static uint32_t x223 = 135225U;
	int32_t x224 = 92;
	volatile int32_t t47 = 58228;

	t47 = (x221-(x222^(x223==x224)));

	if (t47 != 2147479986) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 8532395LLU;
	int16_t x226 = -1;
	int32_t x227 = -1;
	static uint64_t t48 = 791512308317612114LLU;

	t48 = (x225-(x226^(x227==x228)));

	if (t48 != 8532397LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x229 = 2245U;
	static volatile int8_t x230 = 0;
	int32_t x232 = -1;

	t49 = (x229-(x230^(x231==x232)));

	if (t49 != 2245) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x233 = 497U;
	volatile int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	volatile int64_t x236 = INT64_MAX;
	static volatile uint32_t t50 = 144588U;

	t50 = (x233-(x234^(x235==x236)));

	if (t50 != 33265U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = 1LL;
	static int64_t x240 = INT64_MIN;

	t51 = (x237-(x238^(x239==x240)));

	if (t51 != -15083655LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x241 = 193U;
	int8_t x242 = INT8_MIN;
	uint16_t x243 = UINT16_MAX;
	static int64_t x244 = -109485LL;
	volatile uint32_t t52 = 56U;

	t52 = (x241-(x242^(x243==x244)));

	if (t52 != 321U) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MIN;
	int32_t x248 = -1292;
	volatile int64_t t53 = 802437827334022LL;

	t53 = (x245-(x246^(x247==x248)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int8_t x250 = INT8_MAX;
	uint32_t x251 = 46U;
	uint64_t x252 = 56500509784751936LLU;
	int32_t t54 = 244218107;

	t54 = (x249-(x250^(x251==x252)));

	if (t54 != 65408) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x253 = 1U;
	int32_t x255 = -1;
	static volatile uint32_t x256 = 63U;
	int32_t t55 = 33;

	t55 = (x253-(x254^(x255==x256)));

	if (t55 != -6) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x257 = UINT32_MAX;
	int64_t x258 = INT64_MAX;
	int64_t x259 = -1597691434LL;
	int8_t x260 = 7;
	static int64_t t56 = 113882402097425017LL;

	t56 = (x257-(x258^(x259==x260)));

	if (t56 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = 2U;
	uint64_t x266 = 23116LLU;
	volatile int64_t x267 = INT64_MIN;
	static uint64_t t57 = 55481LLU;

	t57 = (x265-(x266^(x267==x268)));

	if (t57 != 18446744073709528502LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MIN;
	uint8_t x271 = UINT8_MAX;
	volatile int16_t x272 = INT16_MIN;
	static volatile uint32_t t58 = 1814353473U;

	t58 = (x269-(x270^(x271==x272)));

	if (t58 != 4294934517U) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x274 = 0;
	uint32_t x275 = 150384U;
	uint8_t x276 = 0U;
	volatile uint32_t t59 = 1792U;

	t59 = (x273-(x274^(x275==x276)));

	if (t59 != 58604U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = 9350LL;
	int8_t x278 = -41;
	volatile int16_t x279 = 796;
	volatile int64_t x280 = INT64_MIN;
	int64_t t60 = -101378864890055LL;

	t60 = (x277-(x278^(x279==x280)));

	if (t60 != 9391LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x281 = INT8_MIN;
	uint8_t x282 = UINT8_MAX;
	static int16_t x284 = 986;
	static volatile int32_t t61 = 29699;

	t61 = (x281-(x282^(x283==x284)));

	if (t61 != -383) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x285 = INT64_MAX;
	uint8_t x286 = 3U;
	int8_t x287 = 3;
	int64_t x288 = 1LL;
	int64_t t62 = -204813LL;

	t62 = (x285-(x286^(x287==x288)));

	if (t62 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x289 = -1LL;
	int32_t x290 = -5064;
	int64_t x291 = INT64_MAX;
	volatile int8_t x292 = -14;
	volatile int64_t t63 = -696774541684941314LL;

	t63 = (x289-(x290^(x291==x292)));

	if (t63 != 5063LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 1743LLU;
	int32_t x296 = -1;
	volatile uint64_t t64 = 556476LLU;

	t64 = (x293-(x294^(x295==x296)));

	if (t64 != 2147485391LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x297 = INT16_MIN;
	static int8_t x298 = INT8_MAX;
	int8_t x299 = INT8_MIN;
	uint64_t x300 = 21770995563143LLU;
	volatile int32_t t65 = 311;

	t65 = (x297-(x298^(x299==x300)));

	if (t65 != -32895) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x303 = INT8_MIN;
	static int32_t x304 = -1;
	volatile uint64_t t66 = 1951477081500581300LLU;

	t66 = (x301-(x302^(x303==x304)));

	if (t66 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = 166122357561036317LL;
	volatile int32_t x306 = INT32_MIN;
	int8_t x307 = 0;
	static int64_t x308 = -15427501548110LL;
	static int64_t t67 = -281205306252048LL;

	t67 = (x305-(x306^(x307==x308)));

	if (t67 != 166122359708519965LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = INT64_MAX;
	int64_t x311 = INT64_MIN;
	static int64_t t68 = 1340197455822LL;

	t68 = (x309-(x310^(x311==x312)));

	if (t68 != 9223372036854775788LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x317 = -1;
	int32_t x318 = -1;
	uint8_t x319 = UINT8_MAX;
	volatile int32_t t69 = 5757343;

	t69 = (x317-(x318^(x319==x320)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x321 = 1;
	int16_t x322 = -1;
	int32_t x323 = INT32_MIN;
	volatile int32_t x324 = -7;
	static volatile int32_t t70 = 68812;

	t70 = (x321-(x322^(x323==x324)));

	if (t70 != 2) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MIN;
	volatile int32_t x326 = -1;
	int64_t x327 = -1LL;
	volatile int32_t x328 = INT32_MIN;
	static volatile int32_t t71 = -22302982;

	t71 = (x325-(x326^(x327==x328)));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x329 = 1165;
	int8_t x331 = 13;
	static int32_t x332 = -124431479;

	t72 = (x329-(x330^(x331==x332)));

	if (t72 != 33933) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x333 = -8LL;
	int8_t x334 = -1;
	int32_t x335 = INT32_MAX;
	uint64_t x336 = 319973120LLU;
	volatile int64_t t73 = -157513050236817043LL;

	t73 = (x333-(x334^(x335==x336)));

	if (t73 != -7LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x337 = 1;
	static uint16_t x338 = UINT16_MAX;
	int16_t x340 = -1;
	int32_t t74 = -18;

	t74 = (x337-(x338^(x339==x340)));

	if (t74 != -65533) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = 8201;
	int32_t x342 = INT32_MAX;
	volatile uint32_t x343 = 70761U;
	int16_t x344 = -29;
	volatile int32_t t75 = -27;

	t75 = (x341-(x342^(x343==x344)));

	if (t75 != -2147475446) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x345 = INT32_MAX;
	uint64_t x347 = 12467315969773686LLU;
	volatile int32_t t76 = 188378;

	t76 = (x345-(x346^(x347==x348)));

	if (t76 != 2147418112) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = -1;
	int64_t x350 = INT64_MAX;
	int16_t x351 = 15951;
	int64_t x352 = INT64_MAX;
	int64_t t77 = INT64_MIN;

	t77 = (x349-(x350^(x351==x352)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x353 = UINT32_MAX;
	uint32_t x354 = UINT32_MAX;
	uint8_t x355 = 3U;
	uint16_t x356 = 3U;
	volatile uint32_t t78 = 2066017U;

	t78 = (x353-(x354^(x355==x356)));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x357 = UINT32_MAX;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = INT32_MIN;
	int32_t x360 = INT32_MAX;
	uint32_t t79 = 1U;

	t79 = (x357-(x358^(x359==x360)));

	if (t79 != 4294967040U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x361 = 2U;
	int32_t x362 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;

	t80 = (x361-(x362^(x363==x364)));

	if (t80 != 2147483651U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x365 = INT64_MIN;
	int32_t x367 = INT32_MIN;
	uint32_t x368 = UINT32_MAX;

	t81 = (x365-(x366^(x367==x368)));

	if (t81 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x369 = 10086138880499LLU;
	int16_t x370 = -1;
	int8_t x371 = -1;
	static int8_t x372 = INT8_MIN;

	t82 = (x369-(x370^(x371==x372)));

	if (t82 != 10086138880500LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x381 = -1;
	static uint32_t x383 = UINT32_MAX;
	static volatile int32_t t83 = -76;

	t83 = (x381-(x382^(x383==x384)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x385 = INT16_MIN;
	static int32_t x386 = -1;
	volatile uint8_t x387 = 47U;
	int64_t x388 = -1LL;
	int32_t t84 = 4834997;

	t84 = (x385-(x386^(x387==x388)));

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = INT16_MAX;
	static volatile uint8_t x390 = UINT8_MAX;
	int64_t x391 = INT64_MIN;
	uint64_t x392 = 1613563123844985785LLU;
	static int32_t t85 = 1040820;

	t85 = (x389-(x390^(x391==x392)));

	if (t85 != 32512) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x394 = UINT16_MAX;
	int16_t x395 = INT16_MIN;

	t86 = (x393-(x394^(x395==x396)));

	if (t86 != -65536LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x397 = 0LL;
	volatile int64_t t87 = 86613108LL;

	t87 = (x397-(x398^(x399==x400)));

	if (t87 != -144035814LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x402 = INT8_MIN;
	uint16_t x403 = 380U;
	int64_t t88 = 1409LL;

	t88 = (x401-(x402^(x403==x404)));

	if (t88 != 127LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = UINT16_MAX;
	volatile int8_t x406 = -1;
	volatile uint32_t x407 = 2977U;
	int8_t x408 = INT8_MIN;

	t89 = (x405-(x406^(x407==x408)));

	if (t89 != 65536) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x409 = -1;
	int8_t x410 = INT8_MIN;
	uint16_t x411 = UINT16_MAX;
	static int8_t x412 = -8;
	int32_t t90 = 1035879208;

	t90 = (x409-(x410^(x411==x412)));

	if (t90 != 127) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = -1;
	int32_t x414 = 54390263;
	uint64_t x415 = UINT64_MAX;
	int64_t x416 = INT64_MIN;

	t91 = (x413-(x414^(x415==x416)));

	if (t91 != -54390264) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x417 = -1;
	int64_t x418 = INT64_MAX;
	static int8_t x420 = INT8_MAX;
	static volatile int64_t t92 = INT64_MIN;

	t92 = (x417-(x418^(x419==x420)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x421 = UINT8_MAX;
	uint16_t x422 = 1U;
	uint8_t x423 = 0U;
	static uint32_t x424 = 1009824741U;
	int32_t t93 = 16;

	t93 = (x421-(x422^(x423==x424)));

	if (t93 != 254) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x425 = 13;
	int16_t x426 = INT16_MIN;
	static uint16_t x427 = UINT16_MAX;
	uint16_t x428 = 3629U;

	t94 = (x425-(x426^(x427==x428)));

	if (t94 != 32781) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x429 = 7712736728306713LLU;
	int8_t x431 = 39;
	int16_t x432 = INT16_MAX;
	volatile uint64_t t95 = 58927995288LLU;

	t95 = (x429-(x430^(x431==x432)));

	if (t95 != 7712736728306841LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x433 = INT8_MIN;
	static volatile int8_t x434 = INT8_MIN;
	int16_t x435 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	int32_t t96 = 43268;

	t96 = (x433-(x434^(x435==x436)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x437 = -29;
	volatile uint8_t x440 = 13U;
	static int64_t t97 = -554327865461664046LL;

	t97 = (x437-(x438^(x439==x440)));

	if (t97 != 9223372036854775779LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x441 = -1;
	int64_t x442 = 20464371LL;
	static int8_t x443 = 0;
	int16_t x444 = -1;
	static volatile int64_t t98 = -1132LL;

	t98 = (x441-(x442^(x443==x444)));

	if (t98 != -20464372LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x446 = 25445609LLU;
	int32_t x447 = 2677;
	int16_t x448 = INT16_MIN;

	t99 = (x445-(x446^(x447==x448)));

	if (t99 != 18446744073684105879LLU) { NG(); } else { ; }
	
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

