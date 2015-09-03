#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = INT32_MAX;
static int32_t x10 = INT32_MIN;
int8_t x18 = INT8_MAX;
uint64_t x20 = UINT64_MAX;
static int32_t t5 = -807291093;
volatile int16_t x25 = INT16_MIN;
uint64_t x28 = 1613508211969996LLU;
static uint64_t t6 = 54162200499015427LLU;
static int8_t x34 = INT8_MAX;
int16_t x35 = 1590;
static int32_t x36 = -47;
int32_t x37 = INT32_MIN;
static int64_t t8 = 12551596729098LL;
int32_t x52 = 3;
volatile uint64_t t11 = 139165LLU;
volatile uint16_t x54 = 14U;
int32_t x55 = INT32_MIN;
volatile uint8_t x57 = 7U;
static uint32_t x60 = 1380U;
int8_t x64 = INT8_MIN;
volatile uint64_t t15 = 2236339964504035LLU;
static int32_t t16 = -709287876;
volatile int8_t x77 = -1;
volatile uint32_t t19 = 9741849U;
volatile uint64_t t20 = 294LLU;
uint64_t x90 = 269579818388463LLU;
volatile uint64_t t21 = 971955287LLU;
uint16_t x95 = UINT16_MAX;
static uint8_t x96 = 14U;
volatile int32_t t22 = 11240791;
volatile uint32_t t23 = 763127171U;
uint64_t x102 = 235414746377776LLU;
int32_t x105 = -16102578;
int16_t x106 = INT16_MAX;
volatile int64_t t26 = INT64_MAX;
uint64_t x119 = 30623024394921LLU;
uint8_t x120 = 1U;
uint8_t x124 = 1U;
uint32_t x125 = UINT32_MAX;
int64_t x126 = INT64_MIN;
int16_t x128 = INT16_MIN;
static int8_t x129 = 1;
static volatile int64_t x131 = -1LL;
uint64_t t31 = 3446540LLU;
int8_t x141 = 4;
uint64_t x148 = 226LLU;
volatile int64_t x153 = INT64_MIN;
uint64_t x154 = 26760LLU;
int16_t x155 = INT16_MIN;
uint32_t x157 = 10243807U;
uint64_t x161 = 12852122LLU;
volatile int64_t x162 = -6848482581LL;
volatile uint64_t t38 = 77613237446103185LLU;
volatile uint8_t x175 = 63U;
uint32_t x176 = UINT32_MAX;
uint8_t x182 = 26U;
static volatile int64_t t42 = INT64_MAX;
int16_t x185 = -1;
uint8_t x190 = 1U;
int16_t x191 = INT16_MIN;
static int32_t x192 = INT32_MAX;
static volatile uint32_t x196 = 12856U;
int64_t x197 = INT64_MIN;
int8_t x200 = -1;
static int64_t t48 = 1LL;
uint32_t t49 = 299367U;
static int8_t x214 = 2;
int64_t x217 = -1LL;
uint32_t x223 = 5371U;
uint32_t t53 = 3769283U;
int32_t x229 = -1;
uint32_t x238 = 49408U;
int32_t x239 = -1;
int16_t x246 = INT16_MIN;
static uint64_t x247 = 231LLU;
int16_t x249 = -1;
int32_t x256 = 8587625;
int32_t x261 = 0;
volatile int64_t t62 = 19100LL;
static uint8_t x270 = UINT8_MAX;
uint16_t x272 = 1004U;
int32_t x273 = -41281;
volatile uint32_t x282 = 108870342U;
volatile int64_t x283 = INT64_MIN;
uint8_t x284 = UINT8_MAX;
int64_t x300 = -1LL;
volatile uint64_t x310 = UINT64_MAX;
volatile uint64_t t75 = 78706565758487LLU;
int64_t x319 = -1LL;
int64_t x321 = INT64_MIN;
int8_t x330 = INT8_MAX;
volatile int64_t t79 = 5615347004337LL;
static int16_t x334 = -1;
static uint8_t x335 = 26U;
int64_t x336 = INT64_MIN;
int8_t x337 = 0;
volatile int64_t t82 = 10840LL;
uint16_t x347 = 17U;
int8_t x350 = 1;
int64_t x353 = -1LL;
uint32_t x356 = 7165271U;
int64_t x360 = INT64_MAX;
int32_t x369 = 10;
uint64_t x371 = UINT64_MAX;
uint8_t x374 = UINT8_MAX;
int32_t x377 = -19;
int64_t x389 = -19LL;
volatile uint64_t x392 = UINT64_MAX;
int64_t x393 = -1691876455295LL;
int64_t t94 = -548281154967LL;
int8_t x397 = INT8_MIN;
int32_t x407 = -423;
uint64_t t99 = 191897LLU;


void f0(void) {
	int64_t x1 = INT64_MAX;
	int8_t x2 = -1;
	static uint16_t x3 = 1531U;
	static int8_t x4 = INT8_MAX;
	volatile int64_t t0 = INT64_MAX;

	t0 = (x1&((x2%x3)|x4));

	if (t0 != INT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x6 = -4;
	volatile int8_t x7 = -1;
	volatile int64_t x8 = INT64_MIN;
	volatile int64_t t1 = -7326512LL;

	t1 = (x5&((x6%x7)|x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = INT8_MAX;
	static uint32_t t2 = 3U;

	t2 = (x9&((x10%x11)|x12));

	if (t2 != 127U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 3U;
	int64_t x14 = -1LL;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;
	volatile int64_t t3 = 406357872109LL;

	t3 = (x13&((x14%x15)|x16));

	if (t3 != 3LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int64_t x19 = INT64_MIN;
	uint64_t t4 = UINT64_MAX;

	t4 = (x17&((x18%x19)|x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MAX;
	static volatile int16_t x22 = 418;
	uint8_t x23 = UINT8_MAX;
	uint8_t x24 = 3U;

	t5 = (x21&((x22%x23)|x24));

	if (t5 != 35) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = INT8_MIN;
	uint16_t x27 = UINT16_MAX;

	t6 = (x25&((x26%x27)|x28));

	if (t6 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x33 = 62U;
	static volatile int32_t t7 = -1;

	t7 = (x33&((x34%x35)|x36));

	if (t7 != 62) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -1855268624175LL;
	int16_t x39 = -1;
	int32_t x40 = INT32_MIN;

	t8 = (x37&((x38%x39)|x40));

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x41 = 3LLU;
	static int64_t x42 = INT64_MAX;
	static uint64_t x43 = 4423607LLU;
	static int16_t x44 = INT16_MIN;
	volatile uint64_t t9 = 31737LLU;

	t9 = (x41&((x42%x43)|x44));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	static uint16_t x46 = UINT16_MAX;
	int16_t x47 = INT16_MIN;
	int64_t x48 = 15390160867512557LL;
	volatile int64_t t10 = 0LL;

	t10 = (x45&((x46%x47)|x48));

	if (t10 != 260800511LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 1LLU;
	static int32_t x50 = INT32_MAX;
	int64_t x51 = -1LL;

	t11 = (x49&((x50%x51)|x52));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	uint64_t x56 = 255067LLU;
	volatile uint64_t t12 = 51LLU;

	t12 = (x53&((x54%x55)|x56));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x58 = INT16_MAX;
	uint8_t x59 = UINT8_MAX;
	uint32_t t13 = 0U;

	t13 = (x57&((x58%x59)|x60));

	if (t13 != 7U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 15480937U;
	static uint64_t x62 = 203637LLU;
	uint64_t x63 = UINT64_MAX;
	static volatile uint64_t t14 = 1227LLU;

	t14 = (x61&((x62%x63)|x64));

	if (t14 != 15480929LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -6299LL;
	uint8_t x66 = 1U;
	uint64_t x67 = UINT64_MAX;
	volatile int64_t x68 = INT64_MIN;

	t15 = (x65&((x66%x67)|x68));

	if (t15 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = INT8_MIN;
	uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 267U;
	int8_t x72 = -1;

	t16 = (x69&((x70%x71)|x72));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x73 = INT16_MAX;
	uint16_t x74 = 4U;
	int8_t x75 = INT8_MAX;
	uint8_t x76 = 21U;
	volatile int32_t t17 = -3;

	t17 = (x73&((x74%x75)|x76));

	if (t17 != 21) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = -7446;
	int64_t x79 = -1LL;
	int16_t x80 = -1;
	static int64_t t18 = 15162904090698201LL;

	t18 = (x77&((x78%x79)|x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x81 = UINT32_MAX;
	volatile int16_t x82 = 3508;
	uint8_t x83 = 1U;
	int16_t x84 = INT16_MAX;

	t19 = (x81&((x82%x83)|x84));

	if (t19 != 32767U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = 1;
	uint8_t x86 = 4U;
	uint64_t x87 = 6419669119593LLU;
	uint16_t x88 = 58U;

	t20 = (x85&((x86%x87)|x88));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = UINT32_MAX;
	uint32_t x91 = UINT32_MAX;
	volatile uint16_t x92 = 0U;

	t21 = (x89&((x90%x91)|x92));

	if (t21 != 1901150493LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	static int8_t x94 = INT8_MIN;

	t22 = (x93&((x94%x95)|x96));

	if (t22 != 2147483534) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -21573771;
	int16_t x98 = INT16_MAX;
	static uint32_t x99 = 10888U;
	int32_t x100 = INT32_MIN;

	t23 = (x97&((x98%x99)|x100));

	if (t23 != 2147483749U) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 1;
	static int8_t x103 = INT8_MIN;
	static int8_t x104 = INT8_MAX;
	uint64_t t24 = 13673163865LLU;

	t24 = (x101&((x102%x103)|x104));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x107 = INT32_MIN;
	int16_t x108 = 1;
	volatile int32_t t25 = 8238;

	t25 = (x105&((x106%x107)|x108));

	if (t25 != 19278) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	uint32_t x111 = UINT32_MAX;
	int64_t x112 = INT64_MAX;

	t26 = (x109&((x110%x111)|x112));

	if (t26 != INT64_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = UINT8_MAX;
	int32_t x114 = -100;
	int8_t x115 = -14;
	volatile int32_t x116 = INT32_MIN;
	static int32_t t27 = -2531;

	t27 = (x113&((x114%x115)|x116));

	if (t27 != 254) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	uint64_t x118 = 123LLU;
	uint64_t t28 = 101964LLU;

	t28 = (x117&((x118%x119)|x120));

	if (t28 != 123LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x121 = 1U;
	static int32_t x122 = INT32_MAX;
	volatile uint8_t x123 = 1U;
	volatile int32_t t29 = -4;

	t29 = (x121&((x122%x123)|x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x127 = INT32_MAX;
	int64_t t30 = 1154463LL;

	t30 = (x125&((x126%x127)|x128));

	if (t30 != 4294967294LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x130 = UINT64_MAX;
	static int8_t x132 = 2;

	t31 = (x129&((x130%x131)|x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x133 = 1U;
	int32_t x134 = INT32_MIN;
	uint16_t x135 = 2199U;
	int16_t x136 = -140;
	static int32_t t32 = -22567;

	t32 = (x133&((x134%x135)|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x142 = INT8_MAX;
	int16_t x143 = -11026;
	int8_t x144 = 1;
	static volatile int32_t t33 = 0;

	t33 = (x141&((x142%x143)|x144));

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 81U;
	static int64_t x146 = INT64_MIN;
	static int32_t x147 = 38;
	uint64_t t34 = 55123927LLU;

	t34 = (x145&((x146%x147)|x148));

	if (t34 != 64LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int8_t x150 = 49;
	int64_t x151 = -473602735875428LL;
	static volatile int64_t x152 = -43030582309100956LL;
	static volatile int64_t t35 = INT64_MIN;

	t35 = (x149&((x150%x151)|x152));

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x156 = -1LL;
	uint64_t t36 = 968710LLU;

	t36 = (x153&((x154%x155)|x156));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x158 = -1;
	uint32_t x159 = UINT32_MAX;
	int16_t x160 = INT16_MIN;
	volatile uint32_t t37 = 75U;

	t37 = (x157&((x158%x159)|x160));

	if (t37 != 10223616U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x163 = -1;
	uint8_t x164 = UINT8_MAX;

	t38 = (x161&((x162%x163)|x164));

	if (t38 != 154LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x165 = -1;
	int8_t x166 = 10;
	volatile int16_t x167 = -4;
	volatile int32_t x168 = INT32_MAX;
	volatile int32_t t39 = INT32_MAX;

	t39 = (x165&((x166%x167)|x168));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = 1185U;
	static int32_t x170 = INT32_MIN;
	int8_t x171 = INT8_MIN;
	int64_t x172 = -430LL;
	int64_t t40 = -10731064LL;

	t40 = (x169&((x170%x171)|x172));

	if (t40 != 1024LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MAX;
	volatile int16_t x174 = INT16_MAX;
	static uint32_t t41 = 503564U;

	t41 = (x173&((x174%x175)|x176));

	if (t41 != 127U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x181 = INT64_MAX;
	static int32_t x183 = 48;
	int8_t x184 = -1;

	t42 = (x181&((x182%x183)|x184));

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x186 = 0;
	static uint16_t x187 = UINT16_MAX;
	int32_t x188 = INT32_MAX;
	int32_t t43 = INT32_MAX;

	t43 = (x185&((x186%x187)|x188));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = INT16_MIN;
	volatile int32_t t44 = 26452;

	t44 = (x189&((x190%x191)|x192));

	if (t44 != 2147450880) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x193 = 6244U;
	int8_t x194 = INT8_MIN;
	static int16_t x195 = INT16_MIN;
	volatile uint32_t t45 = 1348877293U;

	t45 = (x193&((x194%x195)|x196));

	if (t45 != 6176U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x198 = INT32_MAX;
	volatile int16_t x199 = INT16_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (x197&((x198%x199)|x200));

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = 27567LL;
	static uint64_t x202 = 69190335762LLU;
	volatile int8_t x203 = INT8_MIN;
	static volatile int64_t x204 = INT64_MIN;
	volatile uint64_t t47 = 253LLU;

	t47 = (x201&((x202%x203)|x204));

	if (t47 != 10498LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = -1;
	int64_t x206 = INT64_MIN;
	int8_t x207 = 2;
	uint16_t x208 = UINT16_MAX;

	t48 = (x205&((x206%x207)|x208));

	if (t48 != 65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x209 = UINT8_MAX;
	uint32_t x210 = 85464425U;
	volatile int16_t x211 = INT16_MIN;
	volatile uint32_t x212 = 459U;

	t49 = (x209&((x210%x211)|x212));

	if (t49 != 235U) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x213 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	uint32_t x216 = UINT32_MAX;
	static volatile uint32_t t50 = 453U;

	t50 = (x213&((x214%x215)|x216));

	if (t50 != 4294934528U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x218 = INT64_MAX;
	int64_t x219 = -5169LL;
	volatile uint64_t x220 = UINT64_MAX;
	volatile uint64_t t51 = UINT64_MAX;

	t51 = (x217&((x218%x219)|x220));

	if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x221 = 1U;
	volatile int32_t x222 = INT32_MIN;
	int8_t x224 = INT8_MIN;
	volatile uint32_t t52 = 4U;

	t52 = (x221&((x222%x223)|x224));

	if (t52 != 1U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x225 = 125;
	static volatile int8_t x226 = INT8_MIN;
	uint32_t x227 = UINT32_MAX;
	static uint8_t x228 = UINT8_MAX;

	t53 = (x225&((x226%x227)|x228));

	if (t53 != 125U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x230 = UINT32_MAX;
	uint32_t x231 = 117U;
	int64_t x232 = INT64_MIN;
	int64_t t54 = -3735LL;

	t54 = (x229&((x230%x231)|x232));

	if (t54 != -9223372036854775787LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x233 = -1;
	int8_t x234 = 0;
	int16_t x235 = INT16_MAX;
	volatile int32_t x236 = INT32_MIN;
	int32_t t55 = INT32_MIN;

	t55 = (x233&((x234%x235)|x236));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x237 = INT32_MIN;
	uint32_t x240 = 12356705U;
	uint32_t t56 = 6457U;

	t56 = (x237&((x238%x239)|x240));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x241 = 66867184U;
	uint16_t x242 = 30U;
	static int16_t x243 = INT16_MAX;
	uint8_t x244 = 1U;
	uint32_t t57 = 509185150U;

	t57 = (x241&((x242%x243)|x244));

	if (t57 != 16U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x245 = 12875LLU;
	uint16_t x248 = 395U;
	uint64_t t58 = 264LLU;

	t58 = (x245&((x246%x247)|x248));

	if (t58 != 11LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x250 = -1;
	int32_t x251 = -1;
	int64_t x252 = INT64_MAX;
	int64_t t59 = INT64_MAX;

	t59 = (x249&((x250%x251)|x252));

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x253 = INT8_MAX;
	int16_t x254 = INT16_MAX;
	int16_t x255 = -1;
	int32_t t60 = -14131;

	t60 = (x253&((x254%x255)|x256));

	if (t60 != 105) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x257 = INT16_MIN;
	int32_t x258 = -1917875;
	static uint16_t x259 = 1386U;
	uint32_t x260 = 46561995U;
	static uint32_t t61 = 10U;

	t61 = (x257&((x258%x259)|x260));

	if (t61 != 4294934528U) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x262 = -306529289740951542LL;
	uint8_t x263 = 55U;
	uint8_t x264 = 0U;

	t62 = (x261&((x262%x263)|x264));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x265 = 7U;
	volatile int8_t x266 = -1;
	int8_t x267 = 11;
	int32_t x268 = INT32_MIN;
	volatile int32_t t63 = -1536;

	t63 = (x265&((x266%x267)|x268));

	if (t63 != 7) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x269 = 4U;
	static int8_t x271 = INT8_MAX;
	int32_t t64 = -258043584;

	t64 = (x269&((x270%x271)|x272));

	if (t64 != 4) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x274 = 1U;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;
	int32_t t65 = -3939653;

	t65 = (x273&((x274%x275)|x276));

	if (t65 != -41343) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x277 = UINT16_MAX;
	volatile uint32_t x278 = 39300U;
	int64_t x279 = INT64_MAX;
	static uint8_t x280 = 17U;
	static int64_t t66 = 8236950035619LL;

	t66 = (x277&((x278%x279)|x280));

	if (t66 != 39317LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x281 = UINT64_MAX;
	volatile uint64_t t67 = 1008404LLU;

	t67 = (x281&((x282%x283)|x284));

	if (t67 != 108870399LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MAX;
	volatile int64_t x287 = INT64_MAX;
	static int16_t x288 = 828;
	int64_t t68 = -4336978LL;

	t68 = (x285&((x286%x287)|x288));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 628U;
	uint8_t x290 = UINT8_MAX;
	static int32_t x291 = INT32_MIN;
	static uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t69 = 270371LLU;

	t69 = (x289&((x290%x291)|x292));

	if (t69 != 628LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MIN;
	int16_t x294 = INT16_MAX;
	int64_t x295 = -414976233069LL;
	int64_t x296 = -1LL;
	static volatile int64_t t70 = INT64_MIN;

	t70 = (x293&((x294%x295)|x296));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x297 = INT8_MIN;
	int64_t x298 = -36158304034LL;
	int16_t x299 = -2;
	static volatile int64_t t71 = 356211374665961LL;

	t71 = (x297&((x298%x299)|x300));

	if (t71 != -128LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = INT64_MIN;
	volatile int64_t x302 = -958754500281085025LL;
	int16_t x303 = INT16_MIN;
	int64_t x304 = -1LL;
	int64_t t72 = INT64_MIN;

	t72 = (x301&((x302%x303)|x304));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x305 = 2999U;
	int8_t x306 = INT8_MAX;
	int32_t x307 = INT32_MAX;
	static int64_t x308 = -6LL;
	static int64_t t73 = 49812091365212361LL;

	t73 = (x305&((x306%x307)|x308));

	if (t73 != 2999LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x309 = UINT16_MAX;
	uint64_t x311 = 15510LLU;
	static uint8_t x312 = 11U;
	static volatile uint64_t t74 = 742770301455LLU;

	t74 = (x309&((x310%x311)|x312));

	if (t74 != 2987LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = 50746681;
	static uint64_t x314 = 1243350568779501LLU;
	static int16_t x315 = 4996;
	int32_t x316 = -24;

	t75 = (x313&((x314%x315)|x316));

	if (t75 != 50746665LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x317 = INT16_MAX;
	static uint64_t x318 = 51114839LLU;
	volatile int64_t x320 = INT64_MIN;
	volatile uint64_t t76 = 1041186972180LLU;

	t76 = (x317&((x318%x319)|x320));

	if (t76 != 29527LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x322 = -1;
	int32_t x323 = INT32_MIN;
	int64_t x324 = INT64_MAX;
	int64_t t77 = INT64_MIN;

	t77 = (x321&((x322%x323)|x324));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = 6392U;
	int32_t x326 = -92;
	volatile int16_t x327 = INT16_MAX;
	int64_t x328 = INT64_MAX;
	int64_t t78 = -265011856389410950LL;

	t78 = (x325&((x326%x327)|x328));

	if (t78 != 6392LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 115U;
	int64_t x331 = INT64_MIN;
	volatile uint8_t x332 = UINT8_MAX;

	t79 = (x329&((x330%x331)|x332));

	if (t79 != 115LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x333 = -1LL;
	volatile int64_t t80 = 5377764155LL;

	t80 = (x333&((x334%x335)|x336));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x338 = INT64_MIN;
	static uint32_t x339 = 281U;
	uint8_t x340 = UINT8_MAX;
	volatile int64_t t81 = 28346LL;

	t81 = (x337&((x338%x339)|x340));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x341 = UINT32_MAX;
	static int64_t x342 = -1LL;
	int16_t x343 = -1;
	int8_t x344 = 32;

	t82 = (x341&((x342%x343)|x344));

	if (t82 != 32LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MIN;
	int16_t x346 = 1;
	uint32_t x348 = UINT32_MAX;
	uint32_t t83 = 12U;

	t83 = (x345&((x346%x347)|x348));

	if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x349 = INT8_MIN;
	uint64_t x351 = 113372203275LLU;
	static volatile int16_t x352 = INT16_MIN;
	uint64_t t84 = 0LLU;

	t84 = (x349&((x350%x351)|x352));

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x354 = 6;
	volatile uint8_t x355 = 39U;
	volatile int64_t t85 = 3478657597025167278LL;

	t85 = (x353&((x354%x355)|x356));

	if (t85 != 7165271LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x357 = 364328LL;
	static volatile int16_t x358 = INT16_MAX;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int64_t t86 = -180209479LL;

	t86 = (x357&((x358%x359)|x360));

	if (t86 != 364328LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint8_t x365 = UINT8_MAX;
	static int16_t x366 = 34;
	int16_t x367 = INT16_MIN;
	int16_t x368 = INT16_MIN;
	volatile int32_t t87 = -20;

	t87 = (x365&((x366%x367)|x368));

	if (t87 != 34) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x370 = -15;
	uint16_t x372 = 26674U;
	uint64_t t88 = 21LLU;

	t88 = (x369&((x370%x371)|x372));

	if (t88 != 2LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x373 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	volatile int64_t x376 = -1LL;
	static int64_t t89 = -412431986LL;

	t89 = (x373&((x374%x375)|x376));

	if (t89 != -128LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x378 = UINT8_MAX;
	int16_t x379 = -4720;
	int32_t x380 = INT32_MAX;
	static int32_t t90 = -163433154;

	t90 = (x377&((x378%x379)|x380));

	if (t90 != 2147483629) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x381 = -4;
	uint32_t x382 = 260115U;
	int32_t x383 = -117013;
	uint8_t x384 = 3U;
	uint32_t t91 = 31056543U;

	t91 = (x381&((x382%x383)|x384));

	if (t91 != 260112U) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x385 = INT16_MIN;
	uint32_t x386 = UINT32_MAX;
	uint64_t x387 = 859663823LLU;
	int16_t x388 = -11;
	volatile uint64_t t92 = 6056582561LLU;

	t92 = (x385&((x386%x387)|x388));

	if (t92 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x390 = UINT8_MAX;
	volatile int8_t x391 = INT8_MIN;
	uint64_t t93 = 2198LLU;

	t93 = (x389&((x390%x391)|x392));

	if (t93 != 18446744073709551597LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int64_t x394 = INT64_MAX;
	int64_t x395 = 21239902LL;
	static int16_t x396 = 50;

	t94 = (x393&((x394%x395)|x396));

	if (t94 != 132225LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x398 = 1540U;
	int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MIN;
	static uint32_t t95 = 93796U;

	t95 = (x397&((x398%x399)|x400));

	if (t95 != 4294967168U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x401 = 818002U;
	int8_t x402 = -1;
	uint8_t x403 = UINT8_MAX;
	int32_t x404 = INT32_MIN;
	uint32_t t96 = 1409235U;

	t96 = (x401&((x402%x403)|x404));

	if (t96 != 818002U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x405 = 13U;
	static uint16_t x406 = 7U;
	int32_t x408 = INT32_MIN;
	volatile int32_t t97 = -129341;

	t97 = (x405&((x406%x407)|x408));

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x413 = UINT32_MAX;
	static volatile int32_t x414 = INT32_MIN;
	int32_t x415 = 924935;
	volatile uint16_t x416 = 3U;
	volatile uint32_t t98 = 160478953U;

	t98 = (x413&((x414%x415)|x416));

	if (t98 != 4294257783U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x417 = 470006862212455900LLU;
	int8_t x418 = -1;
	int64_t x419 = INT64_MIN;
	static volatile uint16_t x420 = UINT16_MAX;

	t99 = (x417&((x418%x419)|x420));

	if (t99 != 470006862212455900LLU) { NG(); } else { ; }
	
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

