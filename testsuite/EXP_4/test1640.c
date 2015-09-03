#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1225U;
int32_t t0 = 2;
int64_t x7 = INT64_MAX;
static int32_t x8 = 124;
uint8_t x9 = UINT8_MAX;
int64_t x12 = INT64_MIN;
int8_t x14 = -1;
int32_t x16 = INT32_MIN;
static uint8_t x18 = UINT8_MAX;
int16_t x19 = INT16_MIN;
uint16_t x21 = 3141U;
static uint32_t x23 = 6965755U;
static volatile int32_t t5 = 1401;
int16_t x27 = INT16_MIN;
volatile int16_t x33 = INT16_MIN;
static uint8_t x35 = 25U;
uint32_t x36 = UINT32_MAX;
uint16_t x37 = 51U;
uint32_t x46 = 54U;
uint64_t x47 = UINT64_MAX;
volatile int32_t t11 = 399;
int8_t x62 = 1;
static uint64_t x71 = 619934625883027LLU;
int32_t x79 = 57;
uint64_t x80 = 34944908153930520LLU;
static int8_t x89 = INT8_MAX;
volatile uint16_t x90 = 631U;
int32_t x92 = -721;
int32_t t19 = 716;
int64_t x96 = INT64_MIN;
int8_t x97 = INT8_MIN;
uint64_t x106 = 92617017LLU;
int32_t x107 = INT32_MIN;
static volatile int32_t t23 = 32568;
uint32_t x113 = 13U;
int8_t x116 = INT8_MAX;
int16_t x124 = INT16_MIN;
static int32_t x125 = 1;
uint8_t x130 = 2U;
volatile int32_t t29 = -1276899;
int16_t x150 = -1;
volatile int32_t t31 = -1067462450;
int8_t x156 = -1;
uint16_t x160 = 149U;
volatile int8_t x161 = INT8_MIN;
uint32_t x162 = 55002U;
int32_t t34 = -1083571;
uint32_t x166 = UINT32_MAX;
uint64_t x169 = 19958298710306LLU;
uint32_t x187 = 11462U;
volatile int32_t t40 = -27;
uint16_t x196 = 29U;
volatile int8_t x202 = -1;
static uint32_t x203 = 698315U;
static uint64_t t44 = 102302987441LLU;
int8_t x212 = INT8_MIN;
int32_t t46 = 417632070;
static volatile int8_t x214 = INT8_MAX;
int64_t t47 = 15122361LL;
uint64_t x219 = UINT64_MAX;
static int8_t x227 = INT8_MAX;
volatile uint32_t t50 = 7700U;
int32_t x234 = -1;
uint64_t x235 = 1497853556776784523LLU;
volatile uint32_t x252 = 267338046U;
int16_t x269 = INT16_MIN;
uint32_t x272 = 6395757U;
uint8_t x274 = 22U;
int8_t x284 = -1;
int32_t t62 = 307764;
int64_t x286 = INT64_MAX;
uint8_t x288 = UINT8_MAX;
int64_t x290 = 2437778202339210LL;
static uint8_t x294 = 27U;
uint8_t x302 = UINT8_MAX;
int32_t x304 = INT32_MAX;
int16_t x305 = -1;
static volatile int32_t x316 = INT32_MAX;
volatile uint32_t t71 = 94651490U;
static int32_t t72 = INT32_MIN;
volatile uint64_t x326 = 3986910LLU;
int32_t x330 = -1;
volatile uint32_t x333 = 21734U;
uint32_t x335 = 1021369U;
uint32_t t75 = 7948U;
int32_t x349 = -270;
int32_t x361 = -13429616;
int64_t x362 = -1LL;
int64_t x365 = INT64_MAX;
int16_t x369 = 7;
uint16_t x377 = 633U;
volatile uint16_t x379 = UINT16_MAX;
static volatile int32_t x384 = INT32_MIN;
volatile int64_t t87 = 11LL;
int16_t x398 = INT16_MIN;
int32_t x400 = INT32_MIN;
volatile int32_t x403 = INT32_MIN;
volatile int32_t t96 = 0;
volatile int16_t x431 = 13;
static uint16_t x434 = 7480U;


void f0(void) {
	int8_t x1 = 1;
	static volatile uint16_t x3 = 936U;
	uint16_t x4 = 3683U;

	t0 = (x1-(x2<=(x3<=x4)));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = 10570958LL;
	int16_t x6 = 51;
	volatile int64_t t1 = 462LL;

	t1 = (x5-(x6<=(x7<=x8)));

	if (t1 != 10570958LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = 161U;
	volatile uint64_t x11 = 44082529LLU;
	volatile int32_t t2 = 8439;

	t2 = (x9-(x10<=(x11<=x12)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = 1;
	int16_t x15 = INT16_MAX;
	static volatile int32_t t3 = -2339;

	t3 = (x13-(x14<=(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int16_t x20 = INT16_MIN;
	static volatile int64_t t4 = INT64_MIN;

	t4 = (x17-(x18<=(x19<=x20)));

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	static int64_t x24 = -1LL;

	t5 = (x21-(x22<=(x23<=x24)));

	if (t5 != 3140) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 77LLU;
	int8_t x26 = INT8_MIN;
	static int8_t x28 = INT8_MIN;
	static volatile uint64_t t6 = 7911801563307200LLU;

	t6 = (x25-(x26<=(x27<=x28)));

	if (t6 != 76LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	uint16_t x30 = UINT16_MAX;
	int8_t x31 = INT8_MIN;
	static int32_t x32 = INT32_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (x29-(x30<=(x31<=x32)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x34 = -861LL;
	int32_t t8 = 650;

	t8 = (x33-(x34<=(x35<=x36)));

	if (t8 != -32769) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = INT16_MAX;
	volatile int8_t x39 = INT8_MIN;
	static int64_t x40 = -1LL;
	volatile int32_t t9 = -7482617;

	t9 = (x37-(x38<=(x39<=x40)));

	if (t9 != 51) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x45 = 915110;
	uint32_t x48 = 2461623U;
	int32_t t10 = -2503015;

	t10 = (x45-(x46<=(x47<=x48)));

	if (t10 != 915110) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MIN;
	uint32_t x54 = 2053U;
	uint32_t x55 = 3U;
	int32_t x56 = -437041;

	t11 = (x53-(x54<=(x55<=x56)));

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 157U;
	uint64_t x59 = 2690350LLU;
	static int64_t x60 = 901030357137370908LL;
	volatile int64_t t12 = INT64_MAX;

	t12 = (x57-(x58<=(x59<=x60)));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x61 = INT64_MAX;
	uint16_t x63 = 472U;
	uint32_t x64 = 47509595U;
	volatile int64_t t13 = 4068558407086LL;

	t13 = (x61-(x62<=(x63<=x64)));

	if (t13 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = INT32_MAX;
	int16_t x66 = INT16_MAX;
	volatile uint64_t x67 = UINT64_MAX;
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t14 = INT32_MAX;

	t14 = (x65-(x66<=(x67<=x68)));

	if (t14 != INT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 13U;
	int16_t x70 = -1;
	int32_t x72 = INT32_MIN;
	int32_t t15 = -4938;

	t15 = (x69-(x70<=(x71<=x72)));

	if (t15 != 12) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x77 = -1;
	volatile int16_t x78 = -1;
	int32_t t16 = -2337195;

	t16 = (x77-(x78<=(x79<=x80)));

	if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = -48;
	static int64_t x83 = INT64_MAX;
	int16_t x84 = 3;
	volatile int32_t t17 = 5136611;

	t17 = (x81-(x82<=(x83<=x84)));

	if (t17 != 126) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x85 = 3570697;
	volatile int64_t x86 = INT64_MIN;
	static int16_t x87 = INT16_MIN;
	volatile uint16_t x88 = 2U;
	volatile int32_t t18 = -1;

	t18 = (x85-(x86<=(x87<=x88)));

	if (t18 != 3570696) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x91 = 0;

	t19 = (x89-(x90<=(x91<=x92)));

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x93 = UINT8_MAX;
	static volatile int64_t x94 = -1LL;
	uint32_t x95 = 476U;
	int32_t t20 = -162929;

	t20 = (x93-(x94<=(x95<=x96)));

	if (t20 != 254) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x98 = INT8_MIN;
	volatile int32_t x99 = INT32_MIN;
	uint32_t x100 = UINT32_MAX;
	int32_t t21 = 229343042;

	t21 = (x97-(x98<=(x99<=x100)));

	if (t21 != -129) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x101 = 59U;
	static int32_t x102 = 1;
	uint8_t x103 = 111U;
	static volatile int8_t x104 = INT8_MIN;
	volatile int32_t t22 = 1;

	t22 = (x101-(x102<=(x103<=x104)));

	if (t22 != 59) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x105 = 488U;
	uint32_t x108 = UINT32_MAX;

	t23 = (x105-(x106<=(x107<=x108)));

	if (t23 != 488) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x109 = 61856120U;
	static int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MAX;
	uint8_t x112 = 14U;
	volatile uint32_t t24 = 21U;

	t24 = (x109-(x110<=(x111<=x112)));

	if (t24 != 61856119U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x114 = -152;
	static uint32_t x115 = 60717U;
	volatile uint32_t t25 = 480447714U;

	t25 = (x113-(x114<=(x115<=x116)));

	if (t25 != 12U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x121 = -1034840744385015LL;
	uint16_t x122 = 8717U;
	static int8_t x123 = 1;
	int64_t t26 = -537071163LL;

	t26 = (x121-(x122<=(x123<=x124)));

	if (t26 != -1034840744385015LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x126 = UINT16_MAX;
	int32_t x127 = INT32_MIN;
	uint8_t x128 = UINT8_MAX;
	static int32_t t27 = -61;

	t27 = (x125-(x126<=(x127<=x128)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = INT8_MAX;
	volatile int64_t x131 = INT64_MAX;
	static uint64_t x132 = UINT64_MAX;
	volatile int32_t t28 = 4042;

	t28 = (x129-(x130<=(x131<=x132)));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	volatile int32_t x134 = INT32_MIN;
	volatile int8_t x135 = INT8_MIN;
	int64_t x136 = 44568548574069LL;

	t29 = (x133-(x134<=(x135<=x136)));

	if (t29 != -129) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	int64_t x138 = 54143484982LL;
	int64_t x139 = -1LL;
	uint16_t x140 = 2U;
	int32_t t30 = -487;

	t30 = (x137-(x138<=(x139<=x140)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = -1;
	static uint16_t x151 = 25892U;
	int32_t x152 = INT32_MIN;

	t31 = (x149-(x150<=(x151<=x152)));

	if (t31 != -2) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x153 = 664U;
	int64_t x154 = 23413563343064LL;
	int64_t x155 = 2LL;
	volatile int32_t t32 = 446;

	t32 = (x153-(x154<=(x155<=x156)));

	if (t32 != 664) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x157 = -1;
	uint32_t x158 = 52392U;
	uint64_t x159 = 504092386476LLU;
	volatile int32_t t33 = -864674320;

	t33 = (x157-(x158<=(x159<=x160)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x163 = -11769123696233401LL;
	int64_t x164 = INT64_MAX;

	t34 = (x161-(x162<=(x163<=x164)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x165 = UINT64_MAX;
	static volatile int16_t x167 = -1;
	uint8_t x168 = 92U;
	volatile uint64_t t35 = UINT64_MAX;

	t35 = (x165-(x166<=(x167<=x168)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x170 = INT16_MAX;
	int32_t x171 = INT32_MAX;
	int8_t x172 = INT8_MAX;
	volatile uint64_t t36 = 110002823172913106LLU;

	t36 = (x169-(x170<=(x171<=x172)));

	if (t36 != 19958298710306LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x173 = 15U;
	int32_t x174 = -289627092;
	uint8_t x175 = UINT8_MAX;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t37 = -2870;

	t37 = (x173-(x174<=(x175<=x176)));

	if (t37 != 14) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x177 = UINT32_MAX;
	uint16_t x178 = UINT16_MAX;
	int64_t x179 = -1LL;
	int64_t x180 = INT64_MIN;
	uint32_t t38 = UINT32_MAX;

	t38 = (x177-(x178<=(x179<=x180)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = INT32_MAX;
	int8_t x182 = -22;
	uint16_t x183 = UINT16_MAX;
	volatile int16_t x184 = -1;
	static int32_t t39 = 11501;

	t39 = (x181-(x182<=(x183<=x184)));

	if (t39 != 2147483646) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 23U;
	volatile int32_t x186 = -1;
	volatile uint32_t x188 = UINT32_MAX;

	t40 = (x185-(x186<=(x187<=x188)));

	if (t40 != 22) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 310U;
	int32_t x190 = INT32_MIN;
	int32_t x191 = -1;
	uint8_t x192 = UINT8_MAX;
	int32_t t41 = -530659570;

	t41 = (x189-(x190<=(x191<=x192)));

	if (t41 != 309) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x193 = 63U;
	uint16_t x194 = 4U;
	volatile int16_t x195 = -1;
	volatile int32_t t42 = -324274495;

	t42 = (x193-(x194<=(x195<=x196)));

	if (t42 != 63) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x197 = 1929LL;
	uint16_t x198 = 10814U;
	uint32_t x199 = UINT32_MAX;
	uint32_t x200 = UINT32_MAX;
	volatile int64_t t43 = 322828LL;

	t43 = (x197-(x198<=(x199<=x200)));

	if (t43 != 1929LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int16_t x204 = INT16_MIN;

	t44 = (x201-(x202<=(x203<=x204)));

	if (t44 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = UINT8_MAX;
	int8_t x206 = INT8_MIN;
	int16_t x207 = 0;
	int8_t x208 = INT8_MIN;
	int32_t t45 = 157923;

	t45 = (x205-(x206<=(x207<=x208)));

	if (t45 != 254) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = INT8_MIN;
	volatile int8_t x210 = INT8_MIN;
	volatile int16_t x211 = INT16_MIN;

	t46 = (x209-(x210<=(x211<=x212)));

	if (t46 != -129) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x213 = -436034600LL;
	int8_t x215 = 1;
	int8_t x216 = -7;

	t47 = (x213-(x214<=(x215<=x216)));

	if (t47 != -436034600LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = INT8_MAX;
	uint32_t x218 = 215502U;
	int16_t x220 = INT16_MIN;
	static int32_t t48 = -2964;

	t48 = (x217-(x218<=(x219<=x220)));

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x221 = 90879U;
	int32_t x222 = -1;
	uint64_t x223 = 288579LLU;
	volatile int32_t x224 = -6;
	uint32_t t49 = 971U;

	t49 = (x221-(x222<=(x223<=x224)));

	if (t49 != 90878U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x225 = 19300979U;
	uint64_t x226 = 8395584659909085451LLU;
	int16_t x228 = INT16_MAX;

	t50 = (x225-(x226<=(x227<=x228)));

	if (t50 != 19300979U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x229 = INT8_MIN;
	static volatile int16_t x230 = -1;
	static int64_t x231 = -658877128LL;
	int8_t x232 = INT8_MIN;
	volatile int32_t t51 = 22322938;

	t51 = (x229-(x230<=(x231<=x232)));

	if (t51 != -129) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = -1;
	static uint8_t x236 = UINT8_MAX;
	int32_t t52 = 0;

	t52 = (x233-(x234<=(x235<=x236)));

	if (t52 != -2) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x237 = INT64_MAX;
	uint16_t x238 = 29U;
	volatile uint16_t x239 = 240U;
	static int8_t x240 = INT8_MIN;
	volatile int64_t t53 = INT64_MAX;

	t53 = (x237-(x238<=(x239<=x240)));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x241 = 814822814LLU;
	int64_t x242 = -337LL;
	volatile uint32_t x243 = 144358U;
	int8_t x244 = -1;
	volatile uint64_t t54 = 96LLU;

	t54 = (x241-(x242<=(x243<=x244)));

	if (t54 != 814822813LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 6066667U;
	static uint16_t x246 = UINT16_MAX;
	static volatile int64_t x247 = INT64_MIN;
	int32_t x248 = INT32_MAX;
	volatile uint32_t t55 = 396699479U;

	t55 = (x245-(x246<=(x247<=x248)));

	if (t55 != 6066667U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = UINT32_MAX;
	static int16_t x250 = 7;
	uint8_t x251 = 62U;
	uint32_t t56 = UINT32_MAX;

	t56 = (x249-(x250<=(x251<=x252)));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	uint8_t x258 = 2U;
	volatile int16_t x259 = -1;
	int16_t x260 = -14388;
	volatile int32_t t57 = 23082450;

	t57 = (x257-(x258<=(x259<=x260)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x261 = INT32_MIN;
	static int8_t x262 = 7;
	volatile int32_t x263 = -7322529;
	uint32_t x264 = 1U;
	volatile int32_t t58 = INT32_MIN;

	t58 = (x261-(x262<=(x263<=x264)));

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x265 = INT32_MAX;
	uint64_t x266 = 1927465LLU;
	int32_t x267 = -775678;
	int64_t x268 = INT64_MAX;
	int32_t t59 = INT32_MAX;

	t59 = (x265-(x266<=(x267<=x268)));

	if (t59 != INT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x270 = 2929346LLU;
	int16_t x271 = INT16_MIN;
	static volatile int32_t t60 = -58;

	t60 = (x269-(x270<=(x271<=x272)));

	if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x273 = UINT16_MAX;
	int8_t x275 = INT8_MIN;
	uint16_t x276 = 4U;
	int32_t t61 = -86;

	t61 = (x273-(x274<=(x275<=x276)));

	if (t61 != 65535) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x281 = 73U;
	static int16_t x282 = INT16_MAX;
	static volatile int64_t x283 = -1LL;

	t62 = (x281-(x282<=(x283<=x284)));

	if (t62 != 73) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = INT16_MIN;
	uint64_t x287 = 6LLU;
	static int32_t t63 = -1;

	t63 = (x285-(x286<=(x287<=x288)));

	if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = 2;
	int32_t x291 = 2;
	int64_t x292 = 504LL;
	volatile int32_t t64 = -602648951;

	t64 = (x289-(x290<=(x291<=x292)));

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x293 = INT32_MIN;
	uint32_t x295 = UINT32_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t65 = INT32_MIN;

	t65 = (x293-(x294<=(x295<=x296)));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x297 = INT16_MIN;
	uint16_t x298 = 110U;
	uint16_t x299 = UINT16_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t66 = 38;

	t66 = (x297-(x298<=(x299<=x300)));

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x301 = 565629255809LLU;
	uint8_t x303 = 1U;
	volatile uint64_t t67 = 8097372LLU;

	t67 = (x301-(x302<=(x303<=x304)));

	if (t67 != 565629255809LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x306 = INT32_MAX;
	static int64_t x307 = INT64_MIN;
	uint16_t x308 = 10887U;
	static volatile int32_t t68 = -5499;

	t68 = (x305-(x306<=(x307<=x308)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = -81662706258LL;
	static int32_t x310 = INT32_MIN;
	static uint64_t x311 = 4525929815572571567LLU;
	uint8_t x312 = UINT8_MAX;
	volatile int64_t t69 = 13456008462637994LL;

	t69 = (x309-(x310<=(x311<=x312)));

	if (t69 != -81662706259LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x313 = -1;
	static volatile int8_t x314 = 0;
	uint16_t x315 = 14U;
	int32_t t70 = -11305;

	t70 = (x313-(x314<=(x315<=x316)));

	if (t70 != -2) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = -1301;
	uint64_t x319 = UINT64_MAX;
	uint16_t x320 = 13833U;

	t71 = (x317-(x318<=(x319<=x320)));

	if (t71 != 4294967294U) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	static uint32_t x322 = 324759168U;
	volatile int32_t x323 = INT32_MIN;
	static int64_t x324 = INT64_MAX;

	t72 = (x321-(x322<=(x323<=x324)));

	if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x325 = INT16_MIN;
	int16_t x327 = 2964;
	int32_t x328 = INT32_MIN;
	volatile int32_t t73 = -3;

	t73 = (x325-(x326<=(x327<=x328)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -1;
	volatile int64_t x331 = INT64_MIN;
	static uint8_t x332 = UINT8_MAX;
	int32_t t74 = 0;

	t74 = (x329-(x330<=(x331<=x332)));

	if (t74 != -2) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x334 = 711534704005018LLU;
	static uint64_t x336 = 17LLU;

	t75 = (x333-(x334<=(x335<=x336)));

	if (t75 != 21734U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x337 = INT16_MIN;
	int64_t x338 = INT64_MIN;
	static uint8_t x339 = UINT8_MAX;
	int64_t x340 = INT64_MIN;
	int32_t t76 = 1729;

	t76 = (x337-(x338<=(x339<=x340)));

	if (t76 != -32769) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x341 = -22327LL;
	uint16_t x342 = 88U;
	int32_t x343 = INT32_MIN;
	uint8_t x344 = 0U;
	volatile int64_t t77 = -2155220912492320460LL;

	t77 = (x341-(x342<=(x343<=x344)));

	if (t77 != -22327LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = 51;
	uint64_t x346 = UINT64_MAX;
	static int8_t x347 = INT8_MAX;
	static uint64_t x348 = UINT64_MAX;
	static int32_t t78 = -937;

	t78 = (x345-(x346<=(x347<=x348)));

	if (t78 != 51) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x350 = -1;
	int32_t x351 = INT32_MAX;
	static int64_t x352 = -1LL;
	volatile int32_t t79 = -6360518;

	t79 = (x349-(x350<=(x351<=x352)));

	if (t79 != -271) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x353 = UINT16_MAX;
	uint8_t x354 = UINT8_MAX;
	volatile int16_t x355 = INT16_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t80 = 908302;

	t80 = (x353-(x354<=(x355<=x356)));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = 1;
	uint16_t x358 = 226U;
	static int16_t x359 = -2697;
	int8_t x360 = -1;
	int32_t t81 = 1;

	t81 = (x357-(x358<=(x359<=x360)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x363 = 56U;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t82 = 419;

	t82 = (x361-(x362<=(x363<=x364)));

	if (t82 != -13429617) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x366 = -6;
	volatile int8_t x367 = 1;
	volatile uint64_t x368 = 3274958286882871165LLU;
	int64_t t83 = 59LL;

	t83 = (x365-(x366<=(x367<=x368)));

	if (t83 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x370 = INT64_MIN;
	volatile uint64_t x371 = 2139013070814258237LLU;
	uint32_t x372 = 1306U;
	int32_t t84 = 1633;

	t84 = (x369-(x370<=(x371<=x372)));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x373 = UINT32_MAX;
	int8_t x374 = INT8_MAX;
	int64_t x375 = -1LL;
	volatile int32_t x376 = INT32_MIN;
	uint32_t t85 = UINT32_MAX;

	t85 = (x373-(x374<=(x375<=x376)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x378 = INT8_MAX;
	int8_t x380 = -4;
	volatile int32_t t86 = -3;

	t86 = (x377-(x378<=(x379<=x380)));

	if (t86 != 633) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x381 = -1LL;
	volatile int8_t x382 = INT8_MIN;
	int64_t x383 = 14LL;

	t87 = (x381-(x382<=(x383<=x384)));

	if (t87 != -2LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	static uint32_t x386 = 4477473U;
	int8_t x387 = -9;
	int8_t x388 = INT8_MIN;
	volatile int32_t t88 = -72464854;

	t88 = (x385-(x386<=(x387<=x388)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x393 = INT8_MAX;
	int32_t x394 = -442691;
	uint8_t x395 = UINT8_MAX;
	int16_t x396 = INT16_MIN;
	int32_t t89 = 484477;

	t89 = (x393-(x394<=(x395<=x396)));

	if (t89 != 126) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x397 = UINT16_MAX;
	int64_t x399 = INT64_MAX;
	int32_t t90 = -24336130;

	t90 = (x397-(x398<=(x399<=x400)));

	if (t90 != 65534) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = INT8_MIN;
	uint16_t x402 = 0U;
	int16_t x404 = -1;
	int32_t t91 = 14176795;

	t91 = (x401-(x402<=(x403<=x404)));

	if (t91 != -129) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x405 = 208441708042825LLU;
	uint8_t x406 = 0U;
	uint8_t x407 = UINT8_MAX;
	int8_t x408 = -26;
	uint64_t t92 = 803LLU;

	t92 = (x405-(x406<=(x407<=x408)));

	if (t92 != 208441708042824LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x409 = INT64_MAX;
	volatile int16_t x410 = 473;
	volatile int16_t x411 = 10520;
	int64_t x412 = -590022898476984LL;
	int64_t t93 = INT64_MAX;

	t93 = (x409-(x410<=(x411<=x412)));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x413 = 65452690U;
	volatile int64_t x414 = -2141933099510573760LL;
	static int16_t x415 = 0;
	int64_t x416 = INT64_MIN;
	uint32_t t94 = 925821U;

	t94 = (x413-(x414<=(x415<=x416)));

	if (t94 != 65452689U) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x417 = INT16_MAX;
	static int32_t x418 = INT32_MIN;
	int16_t x419 = INT16_MAX;
	uint64_t x420 = 70LLU;
	static int32_t t95 = 520342161;

	t95 = (x417-(x418<=(x419<=x420)));

	if (t95 != 32766) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MAX;
	int8_t x422 = -1;
	int16_t x423 = INT16_MAX;
	static int16_t x424 = INT16_MIN;

	t96 = (x421-(x422<=(x423<=x424)));

	if (t96 != 126) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x425 = INT16_MAX;
	uint16_t x426 = 1290U;
	int16_t x427 = -1;
	int16_t x428 = INT16_MIN;
	int32_t t97 = 453;

	t97 = (x425-(x426<=(x427<=x428)));

	if (t97 != 32767) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x429 = -41460469;
	uint16_t x430 = UINT16_MAX;
	int32_t x432 = INT32_MIN;
	static volatile int32_t t98 = -9;

	t98 = (x429-(x430<=(x431<=x432)));

	if (t98 != -41460469) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MAX;
	volatile uint64_t x435 = 17395104LLU;
	int16_t x436 = INT16_MIN;
	static int32_t t99 = INT32_MAX;

	t99 = (x433-(x434<=(x435<=x436)));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

