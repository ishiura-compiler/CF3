#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
uint8_t x4 = 102U;
uint32_t t0 = 441803068U;
volatile uint64_t t1 = 2526LLU;
int16_t x9 = 94;
uint32_t x10 = 30949352U;
uint16_t x11 = UINT16_MAX;
uint32_t t2 = 1155U;
int8_t x17 = INT8_MAX;
static int8_t x18 = -1;
volatile uint64_t x27 = 1564866013676901LLU;
int32_t x29 = -1;
uint64_t t8 = 351364398LLU;
volatile int64_t t9 = 31578091642LL;
volatile uint64_t x57 = UINT64_MAX;
volatile uint64_t t10 = 32487786064LLU;
int32_t x61 = INT32_MIN;
static uint64_t x64 = 21377183601365LLU;
int16_t x69 = -1;
volatile int16_t x74 = -1;
int16_t x80 = INT16_MIN;
int64_t t15 = -3090070564694525LL;
int32_t x82 = -1;
uint64_t x85 = UINT64_MAX;
uint64_t t17 = 383804150306LLU;
static int32_t x89 = INT32_MIN;
int32_t x107 = INT32_MIN;
uint64_t x109 = 7365544907802LLU;
volatile uint64_t t26 = 115207808640060LLU;
int8_t x141 = INT8_MIN;
uint64_t x144 = 1787911LLU;
static int16_t x153 = -15252;
uint64_t t34 = 85859LLU;
uint64_t x165 = 14770313320139460LLU;
uint64_t x184 = 10787531LLU;
uint64_t t39 = 132827LLU;
int32_t x188 = -84;
uint32_t x195 = 235895U;
volatile uint64_t t43 = 23051LLU;
int64_t x202 = -18428066LL;
int16_t x205 = INT16_MIN;
int16_t x207 = INT16_MIN;
volatile uint64_t t45 = 0LLU;
static uint64_t x210 = UINT64_MAX;
static int64_t t47 = -171503620765597LL;
volatile int32_t t48 = -16;
int32_t x221 = INT32_MIN;
static uint16_t x223 = UINT16_MAX;
int64_t x235 = INT64_MIN;
volatile int64_t t52 = -3LL;
static uint32_t x250 = UINT32_MAX;
uint16_t x252 = 10979U;
uint32_t x263 = 119U;
int16_t x266 = INT16_MIN;
int16_t x267 = 13504;
static int16_t x271 = INT16_MIN;
uint32_t x279 = 17590529U;
uint64_t x288 = UINT64_MAX;
uint64_t t61 = 4860147222912961187LLU;
int8_t x289 = 5;
uint32_t x290 = 38U;
static uint32_t x301 = 225342U;
int16_t x302 = INT16_MIN;
static int64_t t67 = 1235148539409LL;
static int16_t x328 = -198;
volatile uint64_t x331 = 777278LLU;
uint32_t x343 = UINT32_MAX;
int64_t t74 = 17255309609207771LL;
int64_t t75 = -15937371146590LL;
volatile int16_t x365 = INT16_MIN;
int16_t x367 = -380;
static volatile uint16_t x384 = UINT16_MAX;
int32_t t80 = -169;
volatile uint64_t t81 = 468041896LLU;
static int8_t x397 = INT8_MIN;
static uint16_t x398 = 7U;
volatile int64_t t82 = 247249712701671LL;
uint32_t x405 = 2U;
volatile uint32_t t83 = 16U;
int64_t x413 = INT64_MAX;
static uint64_t x420 = 256LLU;
volatile uint64_t t86 = 1LLU;
int8_t x426 = INT8_MIN;
int32_t x428 = -1;
volatile uint16_t x432 = 1186U;
int64_t t88 = 225035975226272659LL;
int64_t x435 = INT64_MIN;
uint64_t t89 = 163LLU;
static volatile uint64_t x441 = 783558801533LLU;
int8_t x443 = INT8_MAX;
volatile uint64_t t90 = 3475620151669617LLU;
int32_t x453 = -32;
static int32_t x456 = -1;
static uint64_t x474 = 379423555391765LLU;
volatile uint64_t t96 = 1020988LLU;
int16_t x477 = -1;
uint32_t x479 = 3804326U;


void f0(void) {
	static uint32_t x1 = UINT32_MAX;
	int32_t x2 = -17225;

	t0 = (x1%((x2-x3)-x4));

	if (t0 != 17581U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 351230507934LLU;
	static int8_t x6 = INT8_MIN;
	static int8_t x7 = 24;
	int8_t x8 = 0;

	t1 = (x5%((x6-x7)-x8));

	if (t1 != 351230507934LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x12 = 2U;

	t2 = (x9%((x10-x11)-x12));

	if (t2 != 94U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x14 = 1U;
	int32_t x15 = 758;
	volatile int32_t x16 = -31;
	volatile int32_t t3 = 5869;

	t3 = (x13%((x14-x15)-x16));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x19 = -1;
	uint8_t x20 = 6U;
	volatile int32_t t4 = -1;

	t4 = (x17%((x18-x19)-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = INT32_MAX;
	int8_t x24 = -3;
	uint64_t t5 = 47575343LLU;

	t5 = (x21%((x22-x23)-x24));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x26 = INT8_MAX;
	volatile int32_t x28 = INT32_MAX;
	volatile uint64_t t6 = 721658222756481LLU;

	t6 = (x25%((x26-x27)-x28));

	if (t6 != 1564866013676773LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x30 = INT32_MIN;
	static volatile int8_t x31 = -1;
	int64_t x32 = INT64_MIN;
	static volatile int64_t t7 = -17638653LL;

	t7 = (x29%((x30-x31)-x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x45 = -1LL;
	int32_t x46 = INT32_MIN;
	uint64_t x47 = 197LLU;
	static volatile int16_t x48 = INT16_MIN;

	t8 = (x45%((x46-x47)-x48));

	if (t8 != 2147451076LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x53 = -1LL;
	static uint32_t x54 = UINT32_MAX;
	volatile int32_t x55 = 87210;
	int8_t x56 = INT8_MIN;

	t9 = (x53%((x54-x55)-x56));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x58 = INT64_MIN;
	int8_t x59 = INT8_MIN;
	int16_t x60 = 0;

	t10 = (x57%((x58-x59)-x60));

	if (t10 != 9223372036854775679LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x62 = -371473131LL;
	volatile int32_t x63 = INT32_MIN;
	uint64_t t11 = 4348960076589679912LLU;

	t11 = (x61%((x62-x63)-x64));

	if (t11 != 21373260107200LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x65 = 1542U;
	static volatile int8_t x66 = 0;
	int8_t x67 = INT8_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t12 = -4696692;

	t12 = (x65%((x66-x67)-x68));

	if (t12 != 18) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x70 = 2250841U;
	static int16_t x71 = INT16_MIN;
	volatile uint32_t x72 = 2998U;
	volatile uint32_t t13 = 377U;

	t13 = (x69%((x70-x71)-x72));

	if (t13 != 576782U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = -1;
	int64_t x75 = INT64_MIN;
	uint8_t x76 = UINT8_MAX;
	volatile int64_t t14 = -15LL;

	t14 = (x73%((x74-x75)-x76));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x77 = -42;
	uint16_t x78 = 235U;
	int64_t x79 = -1LL;

	t15 = (x77%((x78-x79)-x80));

	if (t15 != -42LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x81 = INT16_MIN;
	int64_t x83 = -4377764769535852LL;
	volatile int8_t x84 = INT8_MAX;
	int64_t t16 = 1817LL;

	t16 = (x81%((x82-x83)-x84));

	if (t16 != -32768LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x86 = 0U;
	uint8_t x87 = 2U;
	volatile int8_t x88 = -1;

	t17 = (x85%((x86-x87)-x88));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x90 = 31454LL;
	int16_t x91 = INT16_MAX;
	int8_t x92 = 0;
	volatile int64_t t18 = 3135364455723LL;

	t18 = (x89%((x90-x91)-x92));

	if (t18 != -1246LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x93 = 5U;
	int16_t x94 = INT16_MIN;
	int64_t x95 = -7123201332LL;
	int16_t x96 = 6638;
	volatile int64_t t19 = 1LL;

	t19 = (x93%((x94-x95)-x96));

	if (t19 != 5LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 1U;
	static int16_t x98 = INT16_MAX;
	int32_t x99 = -1;
	int16_t x100 = INT16_MIN;
	static volatile int32_t t20 = -7;

	t20 = (x97%((x98-x99)-x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MAX;
	int64_t x102 = -245264LL;
	static uint64_t x103 = 7423169LLU;
	int16_t x104 = INT16_MAX;
	uint64_t t21 = 262LLU;

	t21 = (x101%((x102-x103)-x104));

	if (t21 != 127LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -5;
	int8_t x106 = -1;
	uint32_t x108 = 711U;
	volatile uint32_t t22 = 766U;

	t22 = (x105%((x106-x107)-x108));

	if (t22 != 1419U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x110 = INT8_MIN;
	int16_t x111 = -1;
	uint16_t x112 = 537U;
	volatile uint64_t t23 = 22300370LLU;

	t23 = (x109%((x110-x111)-x112));

	if (t23 != 7365544907802LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 7U;
	static uint16_t x114 = 101U;
	int16_t x115 = 1437;
	static uint32_t x116 = 13980U;
	uint32_t t24 = 1010848862U;

	t24 = (x113%((x114-x115)-x116));

	if (t24 != 7U) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x117 = INT32_MIN;
	int16_t x118 = INT16_MIN;
	static volatile uint8_t x119 = 6U;
	uint32_t x120 = 133028U;
	static volatile uint32_t t25 = 4224610U;

	t25 = (x117%((x118-x119)-x120));

	if (t25 != 2147483648U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = UINT64_MAX;
	int32_t x122 = -246177350;
	uint16_t x123 = UINT16_MAX;
	volatile int64_t x124 = -3495916860407LL;

	t26 = (x121%((x122-x123)-x124));

	if (t26 != 2833280519565LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -1;
	static int8_t x126 = INT8_MIN;
	int16_t x127 = 2;
	static uint16_t x128 = 5U;
	int32_t t27 = -33398037;

	t27 = (x125%((x126-x127)-x128));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = -1;
	int32_t x130 = -1;
	static volatile int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MIN;
	int32_t t28 = 299;

	t28 = (x129%((x130-x131)-x132));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = UINT64_MAX;
	int8_t x134 = -13;
	int64_t x135 = INT64_MIN;
	uint8_t x136 = UINT8_MAX;
	uint64_t t29 = 7477LLU;

	t29 = (x133%((x134-x135)-x136));

	if (t29 != 535LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x142 = 3987U;
	volatile uint32_t x143 = UINT32_MAX;
	volatile uint64_t t30 = 383LLU;

	t30 = (x141%((x142-x143)-x144));

	if (t30 != 1783795LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x145 = 63U;
	int64_t x146 = INT64_MIN;
	volatile int64_t x147 = INT64_MIN;
	static int64_t x148 = INT64_MAX;
	int64_t t31 = -2950261908137LL;

	t31 = (x145%((x146-x147)-x148));

	if (t31 != 63LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x149 = -1;
	int8_t x150 = -2;
	uint16_t x151 = UINT16_MAX;
	int32_t x152 = -91491651;
	volatile int32_t t32 = -315;

	t32 = (x149%((x150-x151)-x152));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x154 = 52579;
	uint64_t x155 = 1186040236978172320LLU;
	static volatile uint64_t x156 = 160655885430761775LLU;
	volatile uint64_t t33 = 425099076608646LLU;

	t33 = (x153%((x154-x155)-x156));

	if (t33 != 1346696122408866264LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x157 = -1;
	static uint64_t x158 = 2495475944LLU;
	int32_t x159 = INT32_MIN;
	uint64_t x160 = 47823504054359399LLU;

	t34 = (x157%((x158-x159)-x160));

	if (t34 != 47823499411399806LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = 14204LL;
	volatile uint16_t x163 = 727U;
	int32_t x164 = 35;
	volatile int64_t t35 = 488611932591013328LL;

	t35 = (x161%((x162-x163)-x164));

	if (t35 != 6339LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x166 = 0;
	int32_t x167 = 6545383;
	uint8_t x168 = UINT8_MAX;
	uint64_t t36 = 512096340LLU;

	t36 = (x165%((x166-x167)-x168));

	if (t36 != 14770313320139460LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = 165410489U;
	static int8_t x174 = INT8_MIN;
	int32_t x175 = -1;
	int16_t x176 = -4;
	volatile uint32_t t37 = 4U;

	t37 = (x173%((x174-x175)-x176));

	if (t37 != 165410489U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x177 = 27LLU;
	int64_t x178 = INT64_MAX;
	volatile uint32_t x179 = 22872645U;
	int64_t x180 = INT64_MAX;
	uint64_t t38 = 40587035293195LLU;

	t38 = (x177%((x178-x179)-x180));

	if (t38 != 27LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -1;
	static uint16_t x182 = UINT16_MAX;
	uint8_t x183 = 0U;

	t39 = (x181%((x182-x183)-x184));

	if (t39 != 10721995LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x185 = 4U;
	uint16_t x186 = 14U;
	int8_t x187 = -28;
	int32_t t40 = 187;

	t40 = (x185%((x186-x187)-x188));

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -1;
	uint32_t x190 = 47471911U;
	volatile uint64_t x191 = UINT64_MAX;
	uint16_t x192 = 7U;
	uint64_t t41 = 43270228001678038LLU;

	t41 = (x189%((x190-x191)-x192));

	if (t41 != 47372795LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x193 = -1LL;
	volatile int16_t x194 = -63;
	static int32_t x196 = INT32_MIN;
	int64_t t42 = 69939409897778306LL;

	t42 = (x193%((x194-x195)-x196));

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 22076820LLU;
	uint16_t x198 = 26745U;
	uint32_t x199 = 4448837U;
	int64_t x200 = INT64_MAX;

	t43 = (x197%((x198-x199)-x200));

	if (t43 != 22076820LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x201 = 134;
	static volatile uint32_t x203 = 13U;
	static volatile int16_t x204 = INT16_MIN;
	static int64_t t44 = -8399448513722LL;

	t44 = (x201%((x202-x203)-x204));

	if (t44 != 134LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x206 = 140LLU;
	int32_t x208 = 204;

	t45 = (x205%((x206-x207)-x208));

	if (t45 != 960LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x209 = 1;
	int8_t x211 = -59;
	uint16_t x212 = 3U;
	static uint64_t t46 = 1658691132349952LLU;

	t46 = (x209%((x210-x211)-x212));

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = -1;
	volatile int8_t x214 = -14;
	int16_t x215 = -1;
	int64_t x216 = -1LL;

	t47 = (x213%((x214-x215)-x216));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x217 = UINT8_MAX;
	int16_t x218 = -1616;
	volatile int8_t x219 = 1;
	int16_t x220 = INT16_MIN;

	t48 = (x217%((x218-x219)-x220));

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x222 = 388576U;
	int32_t x224 = INT32_MIN;
	uint32_t t49 = 9U;

	t49 = (x221%((x222-x223)-x224));

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x233 = 1;
	int32_t x234 = -1;
	volatile uint32_t x236 = UINT32_MAX;
	volatile int64_t t50 = 34LL;

	t50 = (x233%((x234-x235)-x236));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = 0;
	int32_t x239 = -513065;
	int32_t x240 = 0;
	volatile int32_t t51 = -46540;

	t51 = (x237%((x238-x239)-x240));

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x245 = INT32_MAX;
	int64_t x246 = 882229LL;
	int16_t x247 = -1;
	int32_t x248 = 1045;

	t52 = (x245%((x246-x247)-x248));

	if (t52 != 35802LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x249 = -1LL;
	int32_t x251 = INT32_MIN;
	static int64_t t53 = 47123LL;

	t53 = (x249%((x250-x251)-x252));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x253 = INT32_MAX;
	static int16_t x254 = INT16_MIN;
	int32_t x255 = 25;
	int16_t x256 = 95;
	int32_t t54 = -1;

	t54 = (x253%((x254-x255)-x256));

	if (t54 != 28799) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -1;
	volatile int8_t x262 = INT8_MIN;
	volatile uint8_t x264 = UINT8_MAX;
	volatile uint32_t t55 = 1U;

	t55 = (x261%((x262-x263)-x264));

	if (t55 != 501U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = INT64_MIN;
	int16_t x268 = INT16_MIN;
	int64_t t56 = 35357982653020474LL;

	t56 = (x265%((x266-x267)-x268));

	if (t56 != -12800LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = 152365136;
	int64_t x270 = -1110439524050093611LL;
	int32_t x272 = -44632309;
	int64_t t57 = -752720554957321LL;

	t57 = (x269%((x270-x271)-x272));

	if (t57 != 152365136LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	int16_t x275 = 11757;
	int16_t x276 = -1;
	int32_t t58 = 27401053;

	t58 = (x273%((x274-x275)-x276));

	if (t58 != 21011) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = INT64_MIN;
	volatile uint64_t x278 = 73710065830062LLU;
	int16_t x280 = INT16_MIN;
	static uint64_t t59 = 4119LLU;

	t59 = (x277%((x278-x279)-x280));

	if (t59 != 33696541751678LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x281 = -4019;
	volatile int16_t x282 = INT16_MIN;
	volatile int64_t x283 = 7270698856441LL;
	uint8_t x284 = UINT8_MAX;
	static volatile int64_t t60 = 43219545LL;

	t60 = (x281%((x282-x283)-x284));

	if (t60 != -4019LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = 20U;
	static uint16_t x286 = UINT16_MAX;
	uint16_t x287 = 1U;

	t61 = (x285%((x286-x287)-x288));

	if (t61 != 20LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x291 = -1;
	volatile int16_t x292 = INT16_MAX;
	uint32_t t62 = 15096744U;

	t62 = (x289%((x290-x291)-x292));

	if (t62 != 5U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x297 = -1192922874067778LL;
	static uint8_t x298 = 32U;
	int8_t x299 = INT8_MAX;
	static int32_t x300 = 621;
	int64_t t63 = 219119007539840017LL;

	t63 = (x297%((x298-x299)-x300));

	if (t63 != -2LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x303 = INT32_MIN;
	volatile uint64_t x304 = UINT64_MAX;
	volatile uint64_t t64 = 50428LLU;

	t64 = (x301%((x302-x303)-x304));

	if (t64 != 225342LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MAX;
	int64_t x307 = 56819461044890LL;
	int8_t x308 = 5;
	volatile int64_t t65 = 11455930524898LL;

	t65 = (x305%((x306-x307)-x308));

	if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x313 = 5432721U;
	int16_t x314 = -1;
	int8_t x315 = -1;
	int16_t x316 = INT16_MAX;
	volatile uint32_t t66 = 25212938U;

	t66 = (x313%((x314-x315)-x316));

	if (t66 != 5432721U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x321 = -487106041LL;
	int32_t x322 = INT32_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;

	t67 = (x321%((x322-x323)-x324));

	if (t67 != -487106041LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MIN;
	uint16_t x326 = UINT16_MAX;
	volatile int32_t x327 = -1;
	volatile int32_t t68 = 1370;

	t68 = (x325%((x326-x327)-x328));

	if (t68 != -19602) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x329 = 364755663U;
	int32_t x330 = -51546;
	static volatile int64_t x332 = 30746LL;
	uint64_t t69 = 53033850666667781LLU;

	t69 = (x329%((x330-x331)-x332));

	if (t69 != 364755663LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x337 = INT64_MAX;
	static uint64_t x338 = UINT64_MAX;
	uint64_t x339 = UINT64_MAX;
	static volatile int8_t x340 = 6;
	volatile uint64_t t70 = 1991934246679LLU;

	t70 = (x337%((x338-x339)-x340));

	if (t70 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x341 = INT32_MAX;
	uint32_t x342 = 82319772U;
	int32_t x344 = 113197;
	uint32_t t71 = 1154391330U;

	t71 = (x341%((x342-x343)-x344));

	if (t71 != 10112671U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x345 = 16073405U;
	volatile int8_t x346 = INT8_MIN;
	volatile uint8_t x347 = 0U;
	int32_t x348 = INT32_MIN;
	uint32_t t72 = 110262946U;

	t72 = (x345%((x346-x347)-x348));

	if (t72 != 16073405U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x353 = INT16_MAX;
	int8_t x354 = -1;
	static int32_t x355 = 1;
	int8_t x356 = INT8_MAX;
	volatile int32_t t73 = -46144879;

	t73 = (x353%((x354-x355)-x356));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x357 = -301;
	volatile int16_t x358 = INT16_MIN;
	int64_t x359 = -1LL;
	int64_t x360 = INT64_MIN;

	t74 = (x357%((x358-x359)-x360));

	if (t74 != -301LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x361 = -1;
	uint16_t x362 = 0U;
	int64_t x363 = 924139975LL;
	int16_t x364 = INT16_MAX;

	t75 = (x361%((x362-x363)-x364));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x366 = INT8_MAX;
	static int16_t x368 = -1;
	static int32_t t76 = 4;

	t76 = (x365%((x366-x367)-x368));

	if (t76 != -256) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x369 = 2;
	uint64_t x370 = 1LLU;
	volatile int16_t x371 = -9;
	int16_t x372 = INT16_MIN;
	uint64_t t77 = 15796920878954883LLU;

	t77 = (x369%((x370-x371)-x372));

	if (t77 != 2LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x373 = 56;
	int16_t x374 = INT16_MIN;
	volatile int8_t x375 = -10;
	int8_t x376 = INT8_MIN;
	int32_t t78 = -688246222;

	t78 = (x373%((x374-x375)-x376));

	if (t78 != 56) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x381 = 13;
	int8_t x382 = INT8_MIN;
	uint16_t x383 = UINT16_MAX;
	static int32_t t79 = 33324669;

	t79 = (x381%((x382-x383)-x384));

	if (t79 != 13) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x389 = 409U;
	int8_t x390 = 0;
	int32_t x391 = -1;
	int16_t x392 = INT16_MIN;

	t80 = (x389%((x390-x391)-x392));

	if (t80 != 409) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x393 = UINT64_MAX;
	uint64_t x394 = 445720974857728104LLU;
	int32_t x395 = INT32_MIN;
	uint16_t x396 = 1123U;

	t81 = (x393%((x394-x395)-x396));

	if (t81 != 172184016495915826LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x399 = 1;
	volatile int64_t x400 = -1LL;

	t82 = (x397%((x398-x399)-x400));

	if (t82 != -2LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x406 = 8U;
	volatile int16_t x407 = INT16_MIN;
	static uint8_t x408 = 23U;

	t83 = (x405%((x406-x407)-x408));

	if (t83 != 2U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = 195066;
	int8_t x410 = -1;
	static int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	volatile int32_t t84 = 218095121;

	t84 = (x409%((x410-x411)-x412));

	if (t84 != 122) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x414 = UINT64_MAX;
	static volatile uint8_t x415 = UINT8_MAX;
	uint64_t x416 = 59071424885LLU;
	static volatile uint64_t t85 = 445041874240490979LLU;

	t85 = (x413%((x414-x415)-x416));

	if (t85 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x417 = 63U;
	int8_t x418 = -1;
	int8_t x419 = 15;

	t86 = (x417%((x418-x419)-x420));

	if (t86 != 63LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x425 = INT8_MIN;
	volatile int8_t x427 = 48;
	int32_t t87 = -4347376;

	t87 = (x425%((x426-x427)-x428));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x429 = INT64_MIN;
	int16_t x430 = INT16_MAX;
	int32_t x431 = -1;

	t88 = (x429%((x430-x431)-x432));

	if (t88 != -29788LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = 65404852410937581LL;
	volatile uint64_t x434 = UINT64_MAX;
	uint8_t x436 = 28U;

	t89 = (x433%((x434-x435)-x436));

	if (t89 != 65404852410937581LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x442 = UINT64_MAX;
	volatile int16_t x444 = 0;

	t90 = (x441%((x442-x443)-x444));

	if (t90 != 783558801533LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = -1334900;
	int8_t x446 = -1;
	int64_t x447 = -1LL;
	static int8_t x448 = -14;
	int64_t t91 = 95LL;

	t91 = (x445%((x446-x447)-x448));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int64_t x449 = 64680410565LL;
	int8_t x450 = INT8_MAX;
	uint32_t x451 = 501331U;
	static volatile uint16_t x452 = 15U;
	int64_t t92 = -4218353LL;

	t92 = (x449%((x450-x451)-x452));

	if (t92 != 263419410LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x454 = 2;
	static int8_t x455 = INT8_MIN;
	volatile int32_t t93 = 1736535;

	t93 = (x453%((x454-x455)-x456));

	if (t93 != -32) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x457 = 1338U;
	int8_t x458 = INT8_MIN;
	int32_t x459 = INT32_MIN;
	int8_t x460 = 0;
	volatile int32_t t94 = 9;

	t94 = (x457%((x458-x459)-x460));

	if (t94 != 1338) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x465 = 0;
	static uint8_t x466 = 1U;
	volatile uint16_t x467 = 32U;
	static int16_t x468 = INT16_MAX;
	static int32_t t95 = -1;

	t95 = (x465%((x466-x467)-x468));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x473 = INT64_MIN;
	int8_t x475 = INT8_MIN;
	uint8_t x476 = UINT8_MAX;

	t96 = (x473%((x474-x475)-x476));

	if (t96 != 344252394839304LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x478 = 786;
	int8_t x480 = -4;
	volatile uint32_t t97 = 522U;

	t97 = (x477%((x478-x479)-x480));

	if (t97 != 3803535U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x481 = 5U;
	int8_t x482 = -3;
	int32_t x483 = INT32_MIN;
	int32_t x484 = -1;
	int32_t t98 = 115267491;

	t98 = (x481%((x482-x483)-x484));

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x485 = 1;
	static volatile int16_t x486 = INT16_MAX;
	uint8_t x487 = UINT8_MAX;
	int16_t x488 = INT16_MIN;
	static int32_t t99 = -220944;

	t99 = (x485%((x486-x487)-x488));

	if (t99 != 1) { NG(); } else { ; }
	
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

