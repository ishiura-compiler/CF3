#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x13 = -1;
int32_t x16 = -263742284;
uint16_t x18 = 60U;
static uint16_t x20 = UINT16_MAX;
int32_t x24 = 81844;
uint32_t x28 = 10U;
uint16_t x29 = 5459U;
int64_t x33 = -979264522508621LL;
int64_t t8 = 2018453154LL;
static int8_t x38 = -6;
int8_t x49 = INT8_MIN;
static uint32_t x52 = UINT32_MAX;
static int64_t x54 = INT64_MIN;
uint32_t x55 = 2642203U;
uint64_t x59 = 70190041225679509LLU;
uint64_t x61 = 119700LLU;
uint64_t t15 = 2652253782LLU;
static int64_t x65 = INT64_MAX;
volatile int32_t x71 = INT32_MAX;
volatile int32_t t17 = 127876304;
static int16_t x74 = INT16_MIN;
uint32_t x83 = 232463U;
static int32_t x85 = 153;
volatile uint32_t t22 = 767U;
int8_t x93 = -1;
static uint8_t x96 = 97U;
static int32_t x99 = INT32_MAX;
int16_t x102 = -2;
uint64_t x103 = UINT64_MAX;
int32_t t25 = 0;
volatile int32_t t26 = -3;
volatile uint8_t x117 = 4U;
int16_t x118 = INT16_MIN;
volatile int32_t t29 = -4182178;
static int64_t x125 = INT64_MAX;
volatile uint32_t x127 = UINT32_MAX;
int8_t x131 = 0;
int8_t x144 = INT8_MIN;
static int8_t x145 = INT8_MIN;
int64_t x149 = INT64_MIN;
int64_t x150 = 2659853490211538468LL;
int64_t x152 = -1LL;
volatile uint16_t x153 = 24U;
int32_t x161 = INT32_MIN;
static int16_t x170 = -30;
static int32_t t42 = 744;
int8_t x180 = INT8_MIN;
int32_t t44 = 37908648;
volatile uint32_t x189 = 6U;
uint32_t t47 = 1469152738U;
static uint8_t x195 = 1U;
volatile int8_t x196 = -1;
uint16_t x203 = 10U;
uint64_t x224 = 42122011767167271LLU;
static uint32_t t56 = 242362U;
int32_t t57 = -3;
int32_t t58 = -2;
int32_t x237 = INT32_MAX;
int32_t x239 = INT32_MIN;
uint64_t x248 = 366901LLU;
volatile int32_t t61 = 239388;
int16_t x260 = INT16_MIN;
volatile uint32_t x262 = 2616290U;
int8_t x264 = 1;
uint32_t x286 = 481U;
int64_t t73 = 104913704066869297LL;
static int64_t x299 = INT64_MIN;
int64_t x303 = -31551976477LL;
int64_t x307 = INT64_MIN;
static volatile int64_t x313 = 211LL;
int32_t x316 = 9;
uint64_t x317 = 763295153LLU;
uint8_t x320 = UINT8_MAX;
int16_t x321 = -1;
uint32_t x330 = 54U;
int32_t x332 = 6;
static int32_t t82 = -1;
int64_t x335 = -1LL;
int32_t x347 = -1;
static uint64_t t87 = 530743LLU;
uint64_t x359 = 13685132813874LLU;
volatile int32_t x360 = INT32_MAX;
uint64_t x368 = 58440079469791527LLU;
volatile int64_t x372 = INT64_MIN;
volatile int32_t t94 = 28;
static int32_t t95 = 32432020;
int32_t x385 = 71;
static uint16_t x392 = 846U;
int8_t x394 = INT8_MAX;
volatile int32_t t98 = -997636299;
uint16_t x400 = 1U;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int32_t x2 = 18354;
	volatile int8_t x3 = INT8_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 128266355;

	t0 = (x1&(x2<=(x3<=x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	uint16_t x6 = 29U;
	static int64_t x7 = -1LL;
	volatile int16_t x8 = -1;
	static int32_t t1 = 57206;

	t1 = (x5&(x6<=(x7<=x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MIN;
	int64_t x11 = 256389LL;
	uint32_t x12 = UINT32_MAX;
	int32_t t2 = 57750817;

	t2 = (x9&(x10<=(x11<=x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = 28537U;
	static int64_t x15 = -727147320024962LL;
	static int32_t t3 = 1;

	t3 = (x13&(x14<=(x15<=x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = 1682;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = -1;

	t4 = (x17&(x18<=(x19<=x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	int16_t x22 = INT16_MIN;
	static uint8_t x23 = 8U;
	volatile int64_t t5 = -2022480630163LL;

	t5 = (x21&(x22<=(x23<=x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile uint8_t x26 = 9U;
	static volatile int8_t x27 = 0;
	int32_t t6 = -102;

	t6 = (x25&(x26<=(x27<=x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = 21;
	uint8_t x31 = 9U;
	static volatile uint16_t x32 = 218U;
	volatile int32_t t7 = -24900;

	t7 = (x29&(x30<=(x31<=x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = INT64_MIN;
	volatile int64_t x35 = INT64_MIN;
	uint32_t x36 = 2265U;

	t8 = (x33&(x34<=(x35<=x36)));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 98U;
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MIN;
	int32_t t9 = -112;

	t9 = (x37&(x38<=(x39<=x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	uint16_t x42 = 1017U;
	int16_t x43 = 872;
	volatile int8_t x44 = INT8_MAX;
	int32_t t10 = 26;

	t10 = (x41&(x42<=(x43<=x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = 28511129254143699LLU;
	volatile int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	int32_t x48 = -932887123;
	static volatile uint64_t t11 = 6728LLU;

	t11 = (x45&(x46<=(x47<=x48)));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = 0;
	uint8_t x51 = 52U;
	volatile int32_t t12 = -713129;

	t12 = (x49&(x50<=(x51<=x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 1;
	uint32_t x56 = 1710928U;
	static volatile int32_t t13 = 88917657;

	t13 = (x53&(x54<=(x55<=x56)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 5U;
	uint16_t x58 = 1U;
	int8_t x60 = 0;
	volatile int32_t t14 = 98364503;

	t14 = (x57&(x58<=(x59<=x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x62 = UINT16_MAX;
	int64_t x63 = -5585501336290LL;
	uint32_t x64 = UINT32_MAX;

	t15 = (x61&(x62<=(x63<=x64)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -2986309LL;
	int64_t x67 = INT64_MAX;
	int8_t x68 = 3;
	volatile int64_t t16 = 233892823963640446LL;

	t16 = (x65&(x66<=(x67<=x68)));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	uint32_t x70 = 1090257U;
	uint64_t x72 = UINT64_MAX;

	t17 = (x69&(x70<=(x71<=x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = -1;
	uint64_t x75 = UINT64_MAX;
	int16_t x76 = -958;
	volatile int32_t t18 = -59213;

	t18 = (x73&(x74<=(x75<=x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int16_t x78 = -1464;
	static uint32_t x79 = UINT32_MAX;
	int8_t x80 = 8;
	static volatile int32_t t19 = 400;

	t19 = (x77&(x78<=(x79<=x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -1;
	uint32_t x82 = 16397422U;
	int64_t x84 = -1LL;
	int32_t t20 = -527986267;

	t20 = (x81&(x82<=(x83<=x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MAX;
	volatile int64_t x87 = 1552048988402846LL;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = -1;

	t21 = (x85&(x86<=(x87<=x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 238945379U;
	uint64_t x90 = 498LLU;
	int8_t x91 = INT8_MAX;
	static int8_t x92 = INT8_MIN;

	t22 = (x89&(x90<=(x91<=x92)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x94 = 5;
	static volatile uint8_t x95 = 3U;
	int32_t t23 = 4214521;

	t23 = (x93&(x94<=(x95<=x96)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -54130533;
	volatile int64_t x98 = 26552LL;
	int16_t x100 = 0;
	int32_t t24 = 13;

	t24 = (x97&(x98<=(x99<=x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 3U;
	uint64_t x104 = 0LLU;

	t25 = (x101&(x102<=(x103<=x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = UINT32_MAX;
	volatile uint32_t x107 = UINT32_MAX;
	volatile int16_t x108 = INT16_MIN;

	t26 = (x105&(x106<=(x107<=x108)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	uint64_t x110 = 85197LLU;
	uint8_t x111 = 4U;
	int64_t x112 = INT64_MAX;
	volatile int32_t t27 = 224;

	t27 = (x109&(x110<=(x111<=x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -1;
	int64_t x114 = INT64_MIN;
	static uint16_t x115 = 517U;
	static uint16_t x116 = 98U;
	volatile int32_t t28 = -18;

	t28 = (x113&(x114<=(x115<=x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x119 = 949331;
	static int32_t x120 = 29;

	t29 = (x117&(x118<=(x119<=x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	volatile int8_t x122 = -1;
	uint64_t x123 = UINT64_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	volatile int32_t t30 = -870;

	t30 = (x121&(x122<=(x123<=x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint64_t x126 = UINT64_MAX;
	volatile int8_t x128 = INT8_MIN;
	static int64_t t31 = -372LL;

	t31 = (x125&(x126<=(x127<=x128)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	volatile int16_t x130 = -1;
	int64_t x132 = INT64_MAX;
	int32_t t32 = -57506509;

	t32 = (x129&(x130<=(x131<=x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MIN;
	int8_t x135 = 5;
	volatile uint64_t x136 = UINT64_MAX;
	int64_t t33 = -859207LL;

	t33 = (x133&(x134<=(x135<=x136)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 18830322;
	static int32_t x138 = 7468;
	int8_t x139 = -60;
	static int64_t x140 = 1271795076619050831LL;
	static int32_t t34 = -26;

	t34 = (x137&(x138<=(x139<=x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	static uint16_t x142 = 27440U;
	static int64_t x143 = INT64_MIN;
	int64_t t35 = -4310LL;

	t35 = (x141&(x142<=(x143<=x144)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = 31;
	volatile uint8_t x147 = UINT8_MAX;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -67557;

	t36 = (x145&(x146<=(x147<=x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x151 = 97LLU;
	static volatile int64_t t37 = 3637269515635310LL;

	t37 = (x149&(x150<=(x151<=x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 919U;
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t38 = -260767107;

	t38 = (x153&(x154<=(x155<=x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x157 = INT64_MIN;
	uint64_t x158 = 31LLU;
	int64_t x159 = -79777484717LL;
	volatile int64_t x160 = -1LL;
	static volatile int64_t t39 = 593633197563LL;

	t39 = (x157&(x158<=(x159<=x160)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x162 = UINT32_MAX;
	uint32_t x163 = UINT32_MAX;
	uint16_t x164 = UINT16_MAX;
	int32_t t40 = 195438328;

	t40 = (x161&(x162<=(x163<=x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = -1;
	int8_t x166 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int32_t x168 = -2;
	static int32_t t41 = -393;

	t41 = (x165&(x166<=(x167<=x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -1;
	uint64_t x171 = UINT64_MAX;
	uint32_t x172 = UINT32_MAX;

	t42 = (x169&(x170<=(x171<=x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 4291105158462629LLU;
	int32_t x174 = 381;
	volatile int8_t x175 = 1;
	uint8_t x176 = 1U;
	volatile uint64_t t43 = 201590166008214LLU;

	t43 = (x173&(x174<=(x175<=x176)));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MIN;
	uint64_t x179 = 1580287186485582LLU;

	t44 = (x177&(x178<=(x179<=x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -1LL;
	static volatile int64_t x182 = 91755444LL;
	int64_t x183 = INT64_MAX;
	static int8_t x184 = INT8_MIN;
	int64_t t45 = -5544547609759909LL;

	t45 = (x181&(x182<=(x183<=x184)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x185 = -1;
	int32_t x186 = INT32_MIN;
	int8_t x187 = -11;
	volatile int16_t x188 = INT16_MAX;
	volatile int32_t t46 = 1;

	t46 = (x185&(x186<=(x187<=x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x190 = -80;
	static int64_t x191 = INT64_MAX;
	int32_t x192 = -1;

	t47 = (x189&(x190<=(x191<=x192)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 266253725U;
	static int64_t x194 = INT64_MAX;
	volatile uint32_t t48 = 876469U;

	t48 = (x193&(x194<=(x195<=x196)));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = -15;
	int8_t x198 = INT8_MAX;
	int16_t x199 = -33;
	uint16_t x200 = 18U;
	int32_t t49 = -61049039;

	t49 = (x197&(x198<=(x199<=x200)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 13919999LLU;
	int8_t x202 = INT8_MAX;
	int64_t x204 = 50403895832050LL;
	volatile uint64_t t50 = 3538LLU;

	t50 = (x201&(x202<=(x203<=x204)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -354115;
	volatile int8_t x206 = 0;
	int16_t x207 = -1;
	int16_t x208 = INT16_MIN;
	static volatile int32_t t51 = -14674;

	t51 = (x205&(x206<=(x207<=x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 1;
	volatile int64_t x210 = INT64_MIN;
	int8_t x211 = -13;
	int16_t x212 = 99;
	volatile int32_t t52 = 36;

	t52 = (x209&(x210<=(x211<=x212)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint32_t x214 = 107113U;
	int32_t x215 = INT32_MIN;
	volatile uint16_t x216 = 12883U;
	int32_t t53 = 28092441;

	t53 = (x213&(x214<=(x215<=x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	volatile int8_t x218 = -1;
	uint64_t x219 = 333273556LLU;
	uint8_t x220 = UINT8_MAX;
	int32_t t54 = -7439711;

	t54 = (x217&(x218<=(x219<=x220)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x221 = INT64_MIN;
	static volatile uint16_t x222 = UINT16_MAX;
	volatile int64_t x223 = INT64_MIN;
	static volatile int64_t t55 = 472244622657987LL;

	t55 = (x221&(x222<=(x223<=x224)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 772481U;
	static int16_t x226 = INT16_MIN;
	volatile int64_t x227 = INT64_MIN;
	int64_t x228 = INT64_MIN;

	t56 = (x225&(x226<=(x227<=x228)));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = 1;
	uint32_t x230 = 218787U;
	static int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;

	t57 = (x229&(x230<=(x231<=x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MAX;
	int32_t x234 = INT32_MAX;
	uint32_t x235 = UINT32_MAX;
	static int16_t x236 = 1121;

	t58 = (x233&(x234<=(x235<=x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = 9338LLU;
	static int64_t x240 = -1LL;
	static volatile int32_t t59 = -4602116;

	t59 = (x237&(x238<=(x239<=x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 6;
	uint8_t x242 = UINT8_MAX;
	uint16_t x243 = UINT16_MAX;
	static uint8_t x244 = UINT8_MAX;
	static int32_t t60 = 1428425;

	t60 = (x241&(x242<=(x243<=x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x245 = 37U;
	int32_t x246 = -998971;
	uint64_t x247 = 7LLU;

	t61 = (x245&(x246<=(x247<=x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int64_t x250 = -1LL;
	static int8_t x251 = INT8_MAX;
	static uint32_t x252 = 226U;
	volatile int32_t t62 = 940765;

	t62 = (x249&(x250<=(x251<=x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	static volatile int16_t x254 = -123;
	int32_t x255 = -1;
	int16_t x256 = INT16_MIN;
	int64_t t63 = -3455239441806984LL;

	t63 = (x253&(x254<=(x255<=x256)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	static int16_t x258 = INT16_MIN;
	static volatile int8_t x259 = -3;
	volatile int32_t t64 = -963;

	t64 = (x257&(x258<=(x259<=x260)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = 3;
	int32_t x263 = INT32_MIN;
	volatile int32_t t65 = 3975360;

	t65 = (x261&(x262<=(x263<=x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = 28783208;
	static volatile int32_t x266 = -3499185;
	uint8_t x267 = 2U;
	int64_t x268 = INT64_MIN;
	int32_t t66 = 281341;

	t66 = (x265&(x266<=(x267<=x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 11530316U;
	int64_t x270 = INT64_MIN;
	volatile int64_t x271 = -132075110539LL;
	uint64_t x272 = 20LLU;
	uint32_t t67 = 5792U;

	t67 = (x269&(x270<=(x271<=x272)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x273 = 112901599U;
	int32_t x274 = -111;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = 20U;
	volatile uint32_t t68 = 3083053U;

	t68 = (x273&(x274<=(x275<=x276)));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	uint16_t x278 = 8U;
	static int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MIN;
	int32_t t69 = -228;

	t69 = (x277&(x278<=(x279<=x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MIN;
	int8_t x283 = 1;
	volatile int32_t x284 = INT32_MIN;
	int32_t t70 = 10;

	t70 = (x281&(x282<=(x283<=x284)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x285 = 115624U;
	static volatile uint64_t x287 = 258630349492963LLU;
	int16_t x288 = INT16_MIN;
	volatile uint32_t t71 = 1019U;

	t71 = (x285&(x286<=(x287<=x288)));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	int32_t x290 = 13;
	static uint32_t x291 = UINT32_MAX;
	uint64_t x292 = 53LLU;
	volatile int32_t t72 = -417864;

	t72 = (x289&(x290<=(x291<=x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -283087017222954526LL;
	static uint8_t x294 = 47U;
	volatile int64_t x295 = 29485925826826LL;
	int64_t x296 = -20249715686635832LL;

	t73 = (x293&(x294<=(x295<=x296)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static int32_t x298 = -1;
	uint16_t x300 = 54U;
	int32_t t74 = -136;

	t74 = (x297&(x298<=(x299<=x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	volatile int16_t x302 = INT16_MIN;
	uint16_t x304 = UINT16_MAX;
	int32_t t75 = 133983;

	t75 = (x301&(x302<=(x303<=x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 67868068058485306LL;
	static int64_t x306 = -1LL;
	int16_t x308 = -1;
	static volatile int64_t t76 = 11LL;

	t76 = (x305&(x306<=(x307<=x308)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = 30;
	int32_t x310 = 7988430;
	int32_t x311 = -1;
	uint64_t x312 = 31LLU;
	static volatile int32_t t77 = -580492;

	t77 = (x309&(x310<=(x311<=x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x314 = UINT32_MAX;
	int16_t x315 = -1;
	volatile int64_t t78 = -2LL;

	t78 = (x313&(x314<=(x315<=x316)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = INT32_MIN;
	uint32_t x319 = UINT32_MAX;
	volatile uint64_t t79 = 21111LLU;

	t79 = (x317&(x318<=(x319<=x320)));

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = -1;
	volatile int16_t x323 = -77;
	int8_t x324 = INT8_MAX;
	static volatile int32_t t80 = 14111;

	t80 = (x321&(x322<=(x323<=x324)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	int64_t x327 = INT64_MIN;
	volatile int32_t x328 = INT32_MIN;
	static int32_t t81 = -509306203;

	t81 = (x325&(x326<=(x327<=x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -1;
	int32_t x331 = INT32_MIN;

	t82 = (x329&(x330<=(x331<=x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x333 = INT64_MIN;
	static int64_t x334 = INT64_MIN;
	int16_t x336 = INT16_MIN;
	volatile int64_t t83 = -30063819LL;

	t83 = (x333&(x334<=(x335<=x336)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x337 = INT64_MIN;
	static uint32_t x338 = 64937093U;
	static volatile int64_t x339 = INT64_MIN;
	uint16_t x340 = UINT16_MAX;
	volatile int64_t t84 = -215659491LL;

	t84 = (x337&(x338<=(x339<=x340)));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 9964122;
	int32_t x342 = -324867;
	int16_t x343 = INT16_MIN;
	static int16_t x344 = INT16_MIN;
	int32_t t85 = -1;

	t85 = (x341&(x342<=(x343<=x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = -128LL;
	uint16_t x348 = 108U;
	static volatile int32_t t86 = -164984;

	t86 = (x345&(x346<=(x347<=x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 12771LLU;
	int32_t x350 = -1;
	static int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MIN;

	t87 = (x349&(x350<=(x351<=x352)));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = -39321;
	uint8_t x354 = 3U;
	static int16_t x355 = 362;
	volatile int32_t x356 = INT32_MIN;
	static int32_t t88 = 130372;

	t88 = (x353&(x354<=(x355<=x356)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = UINT8_MAX;
	static volatile int64_t x358 = INT64_MAX;
	volatile int32_t t89 = 24821210;

	t89 = (x357&(x358<=(x359<=x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -15;
	int8_t x362 = 11;
	static volatile uint16_t x363 = UINT16_MAX;
	int32_t x364 = INT32_MAX;
	volatile int32_t t90 = -76;

	t90 = (x361&(x362<=(x363<=x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = 144;
	int32_t x366 = INT32_MIN;
	uint64_t x367 = 34LLU;
	int32_t t91 = -903;

	t91 = (x365&(x366<=(x367<=x368)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x369 = 34737558U;
	volatile uint16_t x370 = UINT16_MAX;
	uint16_t x371 = 407U;
	uint32_t t92 = 1910775599U;

	t92 = (x369&(x370<=(x371<=x372)));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	static uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MIN;
	static uint64_t x376 = 3411763586444190LLU;
	volatile int32_t t93 = -6218352;

	t93 = (x373&(x374<=(x375<=x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	int32_t x378 = -48788134;
	int64_t x379 = INT64_MAX;
	volatile int8_t x380 = INT8_MAX;

	t94 = (x377&(x378<=(x379<=x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = UINT8_MAX;
	volatile int64_t x382 = 427293424325634LL;
	int16_t x383 = -6;
	int16_t x384 = -1;

	t95 = (x381&(x382<=(x383<=x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = 3954U;
	int8_t x387 = INT8_MAX;
	uint16_t x388 = 17U;
	int32_t t96 = -1;

	t96 = (x385&(x386<=(x387<=x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	uint16_t x390 = 3920U;
	volatile int8_t x391 = 2;
	int64_t t97 = -1160410993016988LL;

	t97 = (x389&(x390<=(x391<=x392)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x393 = INT8_MAX;
	int32_t x395 = -47845293;
	uint8_t x396 = 3U;

	t98 = (x393&(x394<=(x395<=x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x398 = 8649U;
	int64_t x399 = INT64_MIN;
	static volatile int64_t t99 = -87LL;

	t99 = (x397&(x398<=(x399<=x400)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

