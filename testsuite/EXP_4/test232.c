#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x8 = 83;
int8_t x9 = INT8_MIN;
int64_t x11 = INT64_MAX;
static int32_t x18 = INT32_MAX;
static volatile uint64_t t3 = 2275975LLU;
volatile int8_t x22 = -27;
volatile int64_t t7 = -7958802186139020LL;
uint32_t x57 = UINT32_MAX;
static int32_t x63 = INT32_MIN;
int64_t x69 = INT64_MAX;
int32_t x71 = -33601;
uint64_t x75 = 340042875356LLU;
int32_t x80 = -1;
volatile int16_t x95 = INT16_MAX;
int8_t x98 = -1;
static uint16_t x99 = UINT16_MAX;
volatile uint64_t t20 = 241043018LLU;
int64_t x113 = -1LL;
uint32_t x114 = 216177402U;
volatile uint16_t x121 = UINT16_MAX;
volatile int32_t t22 = 9329;
int64_t x125 = INT64_MIN;
int64_t x126 = INT64_MIN;
int16_t x130 = -1;
uint64_t x133 = UINT64_MAX;
static int8_t x134 = -8;
static uint16_t x144 = 31U;
int16_t x147 = 0;
static volatile uint64_t t29 = 114971511573759LLU;
uint64_t x160 = 17526675595274LLU;
int16_t x161 = -5541;
volatile uint32_t t31 = 56040U;
static int8_t x170 = 1;
uint8_t x180 = 43U;
uint64_t x181 = UINT64_MAX;
int16_t x183 = -1;
static uint8_t x186 = UINT8_MAX;
int16_t x196 = INT16_MIN;
volatile int64_t x206 = INT64_MAX;
int32_t x210 = 18124031;
int64_t x211 = -34141072255LL;
int8_t x214 = -1;
uint8_t x215 = 59U;
volatile int32_t x217 = INT32_MIN;
static uint16_t x228 = 8U;
int8_t x231 = 7;
static volatile uint64_t x236 = UINT64_MAX;
uint16_t x237 = 614U;
static int32_t t47 = 56210849;
uint16_t x246 = UINT16_MAX;
int64_t x248 = -1LL;
volatile int64_t t49 = 172140367604693LL;
static uint16_t x251 = UINT16_MAX;
volatile int32_t t50 = -485;
static int64_t x255 = -45161757450LL;
int64_t x260 = INT64_MIN;
uint8_t x266 = 1U;
static int16_t x271 = INT16_MAX;
volatile uint32_t t54 = 7484326U;
int64_t x277 = INT64_MIN;
uint16_t x280 = UINT16_MAX;
int16_t x281 = INT16_MIN;
int8_t x284 = -1;
int32_t x289 = -7929139;
int32_t t59 = -11;
volatile int16_t x306 = INT16_MIN;
uint16_t x321 = 25969U;
static uint16_t x328 = UINT16_MAX;
uint16_t x339 = UINT16_MAX;
volatile int16_t x340 = INT16_MIN;
static int64_t x342 = INT64_MAX;
int64_t x347 = INT64_MIN;
int8_t x349 = -1;
uint8_t x373 = 100U;
volatile uint64_t x374 = 4741773LLU;
volatile uint16_t x376 = 54U;
int8_t x381 = INT8_MAX;
static int16_t x388 = 0;
volatile int64_t t78 = 319715404804421LL;
volatile int64_t t79 = INT64_MIN;
int64_t x399 = 116705207LL;
static int32_t x414 = INT32_MIN;
volatile int32_t x416 = INT32_MIN;
uint64_t t83 = 11088373757678LLU;
static int16_t x423 = INT16_MIN;
int16_t x424 = -859;
uint64_t t87 = 231571507023LLU;
static volatile uint32_t x437 = UINT32_MAX;
volatile int16_t x438 = INT16_MIN;
int16_t x451 = 1;
uint64_t x458 = UINT64_MAX;
int32_t x464 = INT32_MAX;
volatile int32_t x472 = -36;
uint16_t x477 = 6U;
uint8_t x487 = 29U;
int64_t x491 = INT64_MIN;
int8_t x492 = INT8_MIN;


void f0(void) {
	static volatile int16_t x1 = -1;
	int16_t x2 = 0;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 1037U;
	int32_t t0 = -61661;

	t0 = (x1&(x2%(x3-x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MIN;
	int64_t x6 = 433891431LL;
	int16_t x7 = -25;
	volatile int64_t t1 = 198LL;

	t1 = (x5&(x6%(x7-x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = -1;
	int8_t x12 = INT8_MAX;
	int64_t t2 = -19666020LL;

	t2 = (x9&(x10%(x11-x12)));

	if (t2 != -128LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x17 = 0LL;
	static uint64_t x19 = 10LLU;
	static int64_t x20 = -1LL;

	t3 = (x17&(x18%(x19-x20)));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 126;
	int8_t x23 = INT8_MAX;
	static int8_t x24 = -42;
	volatile int32_t t4 = -26;

	t4 = (x21&(x22%(x23-x24)));

	if (t4 != 100) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x25 = INT32_MIN;
	int8_t x26 = -1;
	uint16_t x27 = 5882U;
	static int8_t x28 = INT8_MAX;
	static int32_t t5 = INT32_MIN;

	t5 = (x25&(x26%(x27-x28)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 105U;
	int64_t x30 = INT64_MIN;
	volatile int8_t x31 = INT8_MIN;
	static int32_t x32 = 247543863;
	int64_t t6 = 195559LL;

	t6 = (x29&(x30%(x31-x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -5;
	static volatile uint32_t x34 = UINT32_MAX;
	int64_t x35 = 145LL;
	volatile int16_t x36 = INT16_MIN;

	t7 = (x33&(x34%(x35-x36)));

	if (t7 != 18273LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = 30037604;
	int32_t x38 = -1;
	int32_t x39 = 377007200;
	static int32_t x40 = INT32_MAX;
	volatile int32_t t8 = 3348172;

	t8 = (x37&(x38%(x39-x40)));

	if (t8 != 30037604) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	int64_t x51 = 40LL;
	static uint8_t x52 = 33U;
	int64_t t9 = 1LL;

	t9 = (x49&(x50%(x51-x52)));

	if (t9 != -2147483648LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MAX;
	static int32_t x60 = -5414380;
	uint32_t t10 = 295U;

	t10 = (x57&(x58%(x59-x60)));

	if (t10 != 4294934528U) { NG(); } else { ; }
	
}

void f11(void) {
	static int32_t x61 = 3301815;
	uint8_t x62 = 39U;
	int32_t x64 = -1;
	int32_t t11 = -6500;

	t11 = (x61&(x62%(x63-x64)));

	if (t11 != 39) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x65 = INT32_MIN;
	uint16_t x66 = UINT16_MAX;
	int8_t x67 = -49;
	int64_t x68 = INT64_MIN;
	int64_t t12 = 29935LL;

	t12 = (x65&(x66%(x67-x68)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x70 = INT64_MAX;
	volatile int64_t x72 = INT64_MIN;
	volatile int64_t t13 = -35LL;

	t13 = (x69&(x70%(x71-x72)));

	if (t13 != 33600LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x73 = INT16_MAX;
	static uint64_t x74 = UINT64_MAX;
	int32_t x76 = 198266;
	volatile uint64_t t14 = 104LLU;

	t14 = (x73&(x74%(x75-x76)));

	if (t14 != 10495LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	static int64_t x79 = -43780315469LL;
	int64_t t15 = 142413915221LL;

	t15 = (x77&(x78%(x79-x80)));

	if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -188;
	static int64_t x82 = -1LL;
	static int8_t x83 = 60;
	static volatile int8_t x84 = INT8_MIN;
	volatile int64_t t16 = 6LL;

	t16 = (x81&(x82%(x83-x84)));

	if (t16 != -188LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = 350574;
	static int8_t x90 = INT8_MAX;
	int16_t x91 = INT16_MAX;
	static volatile int16_t x92 = INT16_MIN;
	volatile int32_t t17 = 22576;

	t17 = (x89&(x90%(x91-x92)));

	if (t17 != 110) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = -1;
	static uint16_t x94 = UINT16_MAX;
	uint16_t x96 = UINT16_MAX;
	volatile int32_t t18 = 5;

	t18 = (x93&(x94%(x95-x96)));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 15U;
	static int32_t x100 = -13501809;
	int32_t t19 = -3878998;

	t19 = (x97&(x98%(x99-x100)));

	if (t19 != 15) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x109 = 186278279U;
	uint32_t x110 = UINT32_MAX;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 1U;

	t20 = (x109&(x110%(x111-x112)));

	if (t20 != 186278279LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x115 = -2;
	uint32_t x116 = 81752U;
	int64_t t21 = -1367643460LL;

	t21 = (x113&(x114%(x115-x116)));

	if (t21 != 216177402LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x122 = INT8_MAX;
	static int32_t x123 = -1;
	int8_t x124 = 1;

	t22 = (x121&(x122%(x123-x124)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x127 = -1;
	int8_t x128 = INT8_MAX;
	int64_t t23 = -387384972220814071LL;

	t23 = (x125&(x126%(x127-x128)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x129 = INT64_MAX;
	int8_t x131 = INT8_MIN;
	volatile uint64_t x132 = UINT64_MAX;
	uint64_t t24 = 1011LLU;

	t24 = (x129&(x130%(x131-x132)));

	if (t24 != 126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x135 = INT32_MAX;
	int64_t x136 = 29427625886599503LL;
	static volatile uint64_t t25 = 478044188LLU;

	t25 = (x133&(x134%(x135-x136)));

	if (t25 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x137 = 769U;
	uint64_t x138 = 453LLU;
	volatile uint8_t x139 = 3U;
	volatile int16_t x140 = INT16_MIN;
	volatile uint64_t t26 = 34825408464046LLU;

	t26 = (x137&(x138%(x139-x140)));

	if (t26 != 257LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x141 = -1;
	int8_t x142 = 15;
	int64_t x143 = -6034644515482678LL;
	static volatile int64_t t27 = 9732LL;

	t27 = (x141&(x142%(x143-x144)));

	if (t27 != 15LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = INT16_MIN;
	uint8_t x146 = 71U;
	int32_t x148 = -473119466;
	volatile int32_t t28 = 0;

	t28 = (x145&(x146%(x147-x148)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x149 = -2062LL;
	int64_t x150 = INT64_MIN;
	static volatile uint64_t x151 = UINT64_MAX;
	static uint16_t x152 = UINT16_MAX;

	t29 = (x149&(x150%(x151-x152)));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x157 = -1;
	int64_t x158 = INT64_MAX;
	int16_t x159 = -1;
	static volatile uint64_t t30 = 39036396LLU;

	t30 = (x157&(x158%(x159-x160)));

	if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x162 = UINT16_MAX;
	uint16_t x163 = UINT16_MAX;
	uint32_t x164 = UINT32_MAX;

	t31 = (x161&(x162%(x163-x164)));

	if (t31 != 59995U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x165 = -46;
	uint64_t x166 = UINT64_MAX;
	int16_t x167 = INT16_MAX;
	volatile uint16_t x168 = UINT16_MAX;
	static volatile uint64_t t32 = 1007403LLU;

	t32 = (x165&(x166%(x167-x168)));

	if (t32 != 32722LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x169 = 0U;
	static int8_t x171 = INT8_MAX;
	int16_t x172 = INT16_MAX;
	static int32_t t33 = 776;

	t33 = (x169&(x170%(x171-x172)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = INT8_MAX;
	int32_t x178 = INT32_MIN;
	uint16_t x179 = 0U;
	int32_t t34 = -210114;

	t34 = (x177&(x178%(x179-x180)));

	if (t34 != 120) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x182 = INT32_MIN;
	static int8_t x184 = 3;
	volatile uint64_t t35 = 174077403LLU;

	t35 = (x181&(x182%(x183-x184)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = -1;
	int16_t x187 = INT16_MIN;
	static uint32_t x188 = UINT32_MAX;
	static uint32_t t36 = 7195041U;

	t36 = (x185&(x186%(x187-x188)));

	if (t36 != 255U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x189 = UINT32_MAX;
	uint32_t x190 = 504725370U;
	static int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MAX;
	static volatile uint32_t t37 = 3390030U;

	t37 = (x189&(x190%(x191-x192)));

	if (t37 != 504725370U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x193 = -1;
	int32_t x194 = INT32_MIN;
	uint32_t x195 = 1603U;
	static volatile uint32_t t38 = 255205U;

	t38 = (x193&(x194%(x195-x196)));

	if (t38 != 17939U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int32_t x207 = -51909;
	volatile int32_t x208 = INT32_MIN;
	volatile uint64_t t39 = 7938518377475306354LLU;

	t39 = (x205&(x206%(x207-x208)));

	if (t39 != 1094225083LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x209 = INT64_MAX;
	int8_t x212 = -1;
	volatile int64_t t40 = -4LL;

	t40 = (x209&(x210%(x211-x212)));

	if (t40 != 18124031LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x213 = UINT8_MAX;
	int8_t x216 = -1;
	static volatile int32_t t41 = -124316680;

	t41 = (x213&(x214%(x215-x216)));

	if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x218 = 2904261223LLU;
	volatile int64_t x219 = -470344854461463630LL;
	uint32_t x220 = 473U;
	uint64_t t42 = 278363256138617LLU;

	t42 = (x217&(x218%(x219-x220)));

	if (t42 != 2147483648LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x221 = 10660U;
	uint8_t x222 = 13U;
	int16_t x223 = INT16_MIN;
	int16_t x224 = -1;
	int32_t t43 = 136838981;

	t43 = (x221&(x222%(x223-x224)));

	if (t43 != 4) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x225 = -14;
	uint32_t x226 = 646062U;
	int8_t x227 = -1;
	volatile uint32_t t44 = 126U;

	t44 = (x225&(x226%(x227-x228)));

	if (t44 != 646050U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x229 = -1LL;
	uint8_t x230 = UINT8_MAX;
	uint64_t x232 = 177698666806LLU;
	volatile uint64_t t45 = 20856609970LLU;

	t45 = (x229&(x230%(x231-x232)));

	if (t45 != 255LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = -1;
	static volatile int32_t x234 = INT32_MIN;
	volatile int64_t x235 = 65506846124886LL;
	volatile uint64_t t46 = 74315339480869886LLU;

	t46 = (x233&(x234%(x235-x236)));

	if (t46 != 16202793888768LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x238 = INT16_MIN;
	uint16_t x239 = 1531U;
	int8_t x240 = -1;

	t47 = (x237&(x238%(x239-x240)));

	if (t47 != 36) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = -2597;
	uint64_t x242 = UINT64_MAX;
	volatile int32_t x243 = INT32_MIN;
	int64_t x244 = INT64_MIN;
	static uint64_t t48 = 32509LLU;

	t48 = (x241&(x242%(x243-x244)));

	if (t48 != 4294964699LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x245 = 0;
	static int8_t x247 = -29;

	t49 = (x245&(x246%(x247-x248)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MAX;
	int8_t x252 = INT8_MAX;

	t50 = (x249&(x250%(x251-x252)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x253 = INT16_MIN;
	int32_t x254 = -1;
	volatile uint8_t x256 = 87U;
	int64_t t51 = -4278337001675LL;

	t51 = (x253&(x254%(x255-x256)));

	if (t51 != -32768LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x257 = 21U;
	uint32_t x258 = 55U;
	int16_t x259 = INT16_MIN;
	volatile int64_t t52 = 497657LL;

	t52 = (x257&(x258%(x259-x260)));

	if (t52 != 21LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x265 = -6805950;
	int8_t x267 = INT8_MAX;
	uint8_t x268 = 9U;
	int32_t t53 = 1;

	t53 = (x265&(x266%(x267-x268)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x269 = INT32_MAX;
	volatile uint32_t x270 = 32U;
	int16_t x272 = 30;

	t54 = (x269&(x270%(x271-x272)));

	if (t54 != 32U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x273 = -1;
	volatile uint32_t x274 = 1497U;
	int8_t x275 = INT8_MAX;
	static int32_t x276 = -1;
	static uint32_t t55 = 3757U;

	t55 = (x273&(x274%(x275-x276)));

	if (t55 != 89U) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x278 = UINT64_MAX;
	int8_t x279 = INT8_MAX;
	volatile uint64_t t56 = 9961916735LLU;

	t56 = (x277&(x278%(x279-x280)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x282 = -1;
	int64_t x283 = INT64_MIN;
	int64_t t57 = -97285024LL;

	t57 = (x281&(x282%(x283-x284)));

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x285 = 6U;
	volatile uint32_t x286 = 1U;
	uint32_t x287 = UINT32_MAX;
	volatile int16_t x288 = INT16_MIN;
	volatile uint32_t t58 = 7508U;

	t58 = (x285&(x286%(x287-x288)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x290 = INT16_MAX;
	static uint8_t x291 = 71U;
	volatile int8_t x292 = INT8_MIN;

	t59 = (x289&(x290%(x291-x292)));

	if (t59 != 129) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MAX;
	int16_t x295 = 971;
	uint8_t x296 = UINT8_MAX;
	int64_t t60 = 1157LL;

	t60 = (x293&(x294%(x295-x296)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x301 = 1LL;
	int64_t x302 = INT64_MAX;
	static int16_t x303 = INT16_MAX;
	static int64_t x304 = -720626108932LL;
	int64_t t61 = -244527346LL;

	t61 = (x301&(x302%(x303-x304)));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x305 = UINT32_MAX;
	int16_t x307 = INT16_MIN;
	static volatile uint8_t x308 = 15U;
	uint32_t t62 = 370724219U;

	t62 = (x305&(x306%(x307-x308)));

	if (t62 != 4294934528U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x309 = UINT8_MAX;
	volatile uint8_t x310 = 113U;
	int32_t x311 = INT32_MAX;
	int32_t x312 = 143609;
	volatile int32_t t63 = -22578;

	t63 = (x309&(x310%(x311-x312)));

	if (t63 != 113) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x317 = -1LL;
	static uint16_t x318 = 95U;
	int8_t x319 = -20;
	static volatile int64_t x320 = INT64_MIN;
	volatile int64_t t64 = 1496LL;

	t64 = (x317&(x318%(x319-x320)));

	if (t64 != 95LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x322 = UINT32_MAX;
	uint32_t x323 = UINT32_MAX;
	volatile int8_t x324 = INT8_MAX;
	volatile uint32_t t65 = 61U;

	t65 = (x321&(x322%(x323-x324)));

	if (t65 != 113U) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x325 = 1002820367U;
	uint64_t x326 = 834466164498697LLU;
	uint32_t x327 = 1U;
	volatile uint64_t t66 = 1626149461507721215LLU;

	t66 = (x325&(x326%(x327-x328)));

	if (t66 != 33936129LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x337 = INT64_MIN;
	int16_t x338 = -1;
	int64_t t67 = INT64_MIN;

	t67 = (x337&(x338%(x339-x340)));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x341 = UINT32_MAX;
	static uint16_t x343 = 18702U;
	static uint16_t x344 = 1U;
	int64_t t68 = 2241945459461LL;

	t68 = (x341&(x342%(x343-x344)));

	if (t68 != 17109LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x345 = -1;
	int16_t x346 = INT16_MIN;
	volatile uint64_t x348 = 0LLU;
	uint64_t t69 = 1845734866379220LLU;

	t69 = (x345&(x346%(x347-x348)));

	if (t69 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x350 = INT8_MIN;
	uint8_t x351 = UINT8_MAX;
	int32_t x352 = 23801;
	int32_t t70 = 969886826;

	t70 = (x349&(x350%(x351-x352)));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = 443U;
	int16_t x363 = INT16_MIN;
	static int32_t x364 = -2338;
	int64_t t71 = 46956855651LL;

	t71 = (x361&(x362%(x363-x364)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x365 = INT32_MAX;
	volatile int16_t x366 = INT16_MAX;
	uint16_t x367 = 15U;
	int8_t x368 = INT8_MAX;
	volatile int32_t t72 = -146792;

	t72 = (x365&(x366%(x367-x368)));

	if (t72 != 63) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int16_t x369 = -1;
	uint16_t x370 = 1U;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MIN;
	static volatile int32_t t73 = 962463;

	t73 = (x369&(x370%(x371-x372)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x375 = -1;
	volatile uint64_t t74 = 2029745LLU;

	t74 = (x373&(x374%(x375-x376)));

	if (t74 != 4LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x377 = 3959902033031157008LL;
	static int8_t x378 = INT8_MIN;
	int8_t x379 = -1;
	volatile uint8_t x380 = 1U;
	volatile int64_t t75 = 1455849173692656491LL;

	t75 = (x377&(x378%(x379-x380)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x382 = -7;
	int8_t x383 = -1;
	volatile uint32_t x384 = 238429695U;
	uint32_t t76 = 55328U;

	t76 = (x381&(x382%(x383-x384)));

	if (t76 != 121U) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x385 = 510643U;
	uint32_t x386 = 120U;
	int8_t x387 = -1;
	uint32_t t77 = 17609092U;

	t77 = (x385&(x386%(x387-x388)));

	if (t77 != 48U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x389 = UINT16_MAX;
	static int64_t x390 = -1LL;
	static uint8_t x391 = 104U;
	int32_t x392 = -1;

	t78 = (x389&(x390%(x391-x392)));

	if (t78 != 65535LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x393 = INT64_MIN;
	volatile int8_t x394 = INT8_MIN;
	volatile int64_t x395 = 449708648267LL;
	static int64_t x396 = -27271442LL;

	t79 = (x393&(x394%(x395-x396)));

	if (t79 != INT64_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x397 = UINT32_MAX;
	volatile uint8_t x398 = 1U;
	int8_t x400 = 0;
	volatile int64_t t80 = 134615695876382LL;

	t80 = (x397&(x398%(x399-x400)));

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = INT32_MIN;
	static uint16_t x406 = UINT16_MAX;
	static uint16_t x407 = 6763U;
	int8_t x408 = INT8_MAX;
	int32_t t81 = 16332953;

	t81 = (x405&(x406%(x407-x408)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x409 = INT32_MAX;
	int8_t x410 = -1;
	uint8_t x411 = 23U;
	static volatile int8_t x412 = 0;
	int32_t t82 = INT32_MAX;

	t82 = (x409&(x410%(x411-x412)));

	if (t82 != INT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x413 = INT16_MIN;
	static uint64_t x415 = 9715964784118LLU;

	t83 = (x413&(x414%(x415-x416)));

	if (t83 != 8009021718528LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x417 = -2081670;
	volatile int8_t x418 = INT8_MIN;
	int32_t x419 = -28059;
	volatile uint32_t x420 = 837U;
	uint32_t t84 = 22325535U;

	t84 = (x417&(x418%(x419-x420)));

	if (t84 != 12384U) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x421 = 8002177532354577LL;
	uint32_t x422 = 10775U;
	static volatile int64_t t85 = 176615LL;

	t85 = (x421&(x422%(x423-x424)));

	if (t85 != 8209LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x429 = 88U;
	int8_t x430 = 1;
	int64_t x431 = -7813602994206LL;
	static int8_t x432 = 1;
	int64_t t86 = -1882LL;

	t86 = (x429&(x430%(x431-x432)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x433 = INT64_MAX;
	uint64_t x434 = UINT64_MAX;
	uint32_t x435 = UINT32_MAX;
	int32_t x436 = 13527669;

	t87 = (x433&(x434%(x435-x436)));

	if (t87 != 563134407LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x439 = 15785225U;
	uint32_t x440 = 18U;
	volatile uint32_t t88 = 0U;

	t88 = (x437&(x438%(x439-x440)));

	if (t88 != 1358224U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x441 = 30;
	uint32_t x442 = 246635138U;
	int64_t x443 = -791556232121941304LL;
	uint8_t x444 = UINT8_MAX;
	int64_t t89 = 3308LL;

	t89 = (x441&(x442%(x443-x444)));

	if (t89 != 2LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x449 = 124U;
	volatile uint16_t x450 = 7U;
	uint64_t x452 = UINT64_MAX;
	uint64_t t90 = 28022899148948LLU;

	t90 = (x449&(x450%(x451-x452)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x457 = INT16_MAX;
	volatile uint16_t x459 = 419U;
	int8_t x460 = -14;
	volatile uint64_t t91 = 18LLU;

	t91 = (x457&(x458%(x459-x460)));

	if (t91 != 295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x461 = UINT64_MAX;
	uint8_t x462 = UINT8_MAX;
	uint16_t x463 = 158U;
	volatile uint64_t t92 = 10268083LLU;

	t92 = (x461&(x462%(x463-x464)));

	if (t92 != 255LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x465 = -1;
	int16_t x466 = 191;
	int16_t x467 = INT16_MIN;
	static uint64_t x468 = 3LLU;
	uint64_t t93 = 56004487394094748LLU;

	t93 = (x465&(x466%(x467-x468)));

	if (t93 != 191LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x469 = 213033LLU;
	static uint32_t x470 = UINT32_MAX;
	volatile uint64_t x471 = 19603LLU;
	uint64_t t94 = 941LLU;

	t94 = (x469&(x470%(x471-x472)));

	if (t94 != 40LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x473 = INT64_MIN;
	static volatile int16_t x474 = 121;
	int8_t x475 = INT8_MIN;
	int16_t x476 = INT16_MIN;
	int64_t t95 = 151LL;

	t95 = (x473&(x474%(x475-x476)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x478 = INT64_MIN;
	int32_t x479 = -4203;
	int16_t x480 = -1;
	volatile int64_t t96 = -3493612LL;

	t96 = (x477&(x478%(x479-x480)));

	if (t96 != 2LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x481 = 3;
	static uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MIN;
	int32_t x484 = -15;
	volatile int32_t t97 = -185933;

	t97 = (x481&(x482%(x483-x484)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x485 = UINT16_MAX;
	int32_t x486 = -1;
	static int32_t x488 = INT32_MAX;
	int32_t t98 = 42410979;

	t98 = (x485&(x486%(x487-x488)));

	if (t98 != 65535) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x489 = INT16_MIN;
	volatile int32_t x490 = -1;
	static volatile int64_t t99 = -105685795362246892LL;

	t99 = (x489&(x490%(x491-x492)));

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

