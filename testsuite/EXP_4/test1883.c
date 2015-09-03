#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 54416298863041446LL;
int32_t x5 = 0;
uint64_t x6 = UINT64_MAX;
uint8_t x8 = UINT8_MAX;
uint8_t x16 = UINT8_MAX;
volatile int64_t x19 = 47767LL;
volatile int64_t t4 = 128477159400LL;
int64_t x22 = INT64_MIN;
uint8_t x26 = UINT8_MAX;
int64_t x27 = -1LL;
uint64_t x34 = 270785744394005901LLU;
uint8_t x35 = 0U;
int16_t x36 = -1;
uint64_t x38 = 122462LLU;
volatile uint16_t x39 = UINT16_MAX;
volatile uint16_t x43 = 2175U;
int32_t x45 = -1;
static volatile uint64_t x58 = UINT64_MAX;
volatile uint64_t t13 = 16LLU;
static volatile int64_t x71 = 6847950376974559LL;
volatile int64_t x79 = INT64_MIN;
int64_t t17 = 2LL;
uint16_t x84 = 3U;
int64_t x93 = -1LL;
int32_t x95 = INT32_MIN;
static uint64_t x105 = UINT64_MAX;
static int64_t x111 = -1LL;
int16_t x112 = -1;
volatile int8_t x113 = INT8_MIN;
static uint8_t x114 = UINT8_MAX;
uint32_t t25 = 29924124U;
volatile uint16_t x121 = UINT16_MAX;
static int64_t x123 = INT64_MIN;
int64_t x129 = INT64_MAX;
volatile uint64_t t28 = 519259713196LLU;
uint16_t x136 = 12U;
static uint8_t x145 = 25U;
uint64_t x147 = 130240764579795015LLU;
uint64_t t31 = 2225944729742264LLU;
volatile int64_t t32 = 1052025228LL;
int32_t x156 = -2;
int16_t x165 = -1;
volatile int64_t t37 = -261095642699LL;
static int32_t x175 = INT32_MIN;
int32_t t38 = -6020;
volatile uint32_t t42 = 3109476U;
uint16_t x197 = UINT16_MAX;
int16_t x203 = -1;
uint32_t x204 = 61262087U;
uint32_t t47 = 1243U;
static int64_t x216 = -73LL;
uint16_t x223 = 13U;
static uint8_t x224 = UINT8_MAX;
int64_t x229 = INT64_MAX;
uint64_t t52 = 37755804LLU;
int64_t x234 = INT64_MAX;
int64_t t53 = 2724954LL;
int64_t x261 = 164314057224587459LL;
volatile int8_t x262 = -1;
uint64_t x263 = UINT64_MAX;
volatile int32_t x268 = INT32_MIN;
int32_t x269 = -1;
static uint16_t x273 = UINT16_MAX;
volatile int32_t x280 = INT32_MIN;
volatile int32_t x288 = 43516630;
static uint32_t t67 = 2117200U;
uint64_t x310 = 242652496526164478LLU;
static volatile int16_t x312 = 0;
static int16_t x319 = INT16_MAX;
static int32_t x330 = -11050634;
int32_t x333 = 227001471;
static volatile int16_t x334 = -1;
uint8_t x348 = UINT8_MAX;
volatile uint64_t t79 = 1466LLU;
int16_t x352 = INT16_MIN;
int8_t x359 = -1;
volatile int8_t x361 = 20;
uint64_t x366 = 5052809991296LLU;
int32_t x367 = 448279;
uint8_t x384 = 7U;
static volatile uint32_t x393 = 16426U;
int16_t x395 = INT16_MIN;
static int64_t t91 = -4LL;
static volatile uint8_t x399 = UINT8_MAX;
static int16_t x415 = -1;
volatile int64_t t95 = -690508655678LL;
static uint8_t x423 = 5U;
uint32_t x429 = UINT32_MAX;


void f0(void) {
	static int64_t x1 = -3551054LL;
	int64_t x2 = -1LL;
	static int16_t x3 = INT16_MIN;
	static volatile int8_t x4 = INT8_MIN;

	t0 = (x1&(x2-(x3|x4)));

	if (t0 != 50LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 2LLU;

	t1 = (x5&(x6-(x7|x8)));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 48LLU;
	static int16_t x10 = INT16_MIN;
	int64_t x11 = 39049930057167LL;
	uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 38562000873LLU;

	t2 = (x9&(x10-(x11|x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 282;
	int16_t x14 = 4408;
	volatile uint32_t x15 = 227711U;
	static volatile uint32_t t3 = 4U;

	t3 = (x13&(x14-(x15|x16)));

	if (t3 != 280U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int8_t x18 = INT8_MAX;
	static int32_t x20 = -1;

	t4 = (x17&(x18-(x19|x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x23 = INT16_MIN;
	static uint8_t x24 = 10U;
	volatile uint64_t t5 = 7981262LLU;

	t5 = (x21&(x22-(x23|x24)));

	if (t5 != 9223372036854808566LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int32_t x28 = INT32_MIN;
	int64_t t6 = 572LL;

	t6 = (x25&(x26-(x27|x28)));

	if (t6 != 256LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = -1LL;
	volatile uint64_t t7 = 226381168LLU;

	t7 = (x33&(x34-(x35|x36)));

	if (t7 != 270785744394005902LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x37 = 29223161;
	volatile int8_t x40 = INT8_MIN;
	uint64_t t8 = 7597924715LLU;

	t8 = (x37&(x38-(x39|x40)));

	if (t8 != 116825LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = -5;
	int64_t x42 = -1080129355881LL;
	uint64_t x44 = 3635124559986102273LLU;
	volatile uint64_t t9 = 122360425LLU;

	t9 = (x41&(x42-(x43|x44)));

	if (t9 != 14811618433594091288LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x46 = 15148U;
	int8_t x47 = -5;
	static uint16_t x48 = UINT16_MAX;
	int32_t t10 = 0;

	t10 = (x45&(x46-(x47|x48)));

	if (t10 != 15149) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = -1;
	int16_t x51 = INT16_MIN;
	static int8_t x52 = INT8_MIN;
	volatile uint64_t t11 = 15581039888LLU;

	t11 = (x49&(x50-(x51|x52)));

	if (t11 != 127LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x53 = 11516U;
	int8_t x54 = 9;
	static volatile int64_t x55 = -1143LL;
	static int64_t x56 = -1LL;
	static volatile int64_t t12 = 410885792785LL;

	t12 = (x53&(x54-(x55|x56)));

	if (t12 != 8LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = UINT16_MAX;
	volatile int8_t x59 = INT8_MIN;
	int64_t x60 = INT64_MAX;

	t13 = (x57&(x58-(x59|x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int16_t x62 = INT16_MIN;
	int16_t x63 = 1;
	int64_t x64 = -24117302LL;
	int64_t t14 = 18361619044LL;

	t14 = (x61&(x62-(x63|x64)));

	if (t14 != 53LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = INT32_MIN;
	static int16_t x70 = -1;
	uint32_t x72 = 14U;
	int64_t t15 = -447731871LL;

	t15 = (x69&(x70-(x71|x72)));

	if (t15 != -6847951691317248LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x73 = 521648497398840LLU;
	int32_t x74 = -38;
	int32_t x75 = INT32_MIN;
	volatile int64_t x76 = INT64_MIN;
	static volatile uint64_t t16 = 8688260484569104798LLU;

	t16 = (x73&(x74-(x75|x76)));

	if (t16 != 1096979480LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = -1LL;
	int64_t x80 = -1LL;

	t17 = (x77&(x78-(x79|x80)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = -1;
	uint8_t x82 = 30U;
	uint16_t x83 = 453U;
	volatile int32_t t18 = -42;

	t18 = (x81&(x82-(x83|x84)));

	if (t18 != -425) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = INT16_MIN;
	volatile int8_t x86 = 0;
	uint8_t x87 = 94U;
	volatile int16_t x88 = 6;
	static int32_t t19 = -120133259;

	t19 = (x85&(x86-(x87|x88)));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x94 = INT8_MIN;
	volatile int16_t x96 = INT16_MIN;
	int64_t t20 = -116LL;

	t20 = (x93&(x94-(x95|x96)));

	if (t20 != 32640LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x101 = INT16_MIN;
	uint32_t x102 = 167U;
	uint16_t x103 = 1972U;
	static int8_t x104 = INT8_MIN;
	volatile uint32_t t21 = 1073655599U;

	t21 = (x101&(x102-(x103|x104)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	volatile uint8_t x108 = 9U;
	volatile uint64_t t22 = 2862LLU;

	t22 = (x105&(x106-(x107|x108)));

	if (t22 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x109 = 107265353U;
	static volatile int32_t x110 = -58019;
	static int64_t t23 = 33925777602678LL;

	t23 = (x109&(x110-(x111|x112)));

	if (t23 != 107224392LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x115 = INT32_MAX;
	uint32_t x116 = 83916182U;
	static volatile uint32_t t24 = 12015849U;

	t24 = (x113&(x114-(x115|x116)));

	if (t24 != 2147483904U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	uint32_t x119 = 200952U;
	static int32_t x120 = INT32_MIN;

	t25 = (x117&(x118-(x119|x120)));

	if (t25 != 2147282568U) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x122 = 5472845U;
	int64_t x124 = -1LL;
	volatile int64_t t26 = 30506847LL;

	t26 = (x121&(x122-(x123|x124)));

	if (t26 != 33358LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = 7;
	uint32_t x126 = 2U;
	static int16_t x127 = INT16_MIN;
	static volatile int32_t x128 = -58;
	static uint32_t t27 = 53U;

	t27 = (x125&(x126-(x127|x128)));

	if (t27 != 4U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x130 = UINT64_MAX;
	int64_t x131 = INT64_MIN;
	volatile uint64_t x132 = 538LLU;

	t28 = (x129&(x130-(x131|x132)));

	if (t28 != 9223372036854775269LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x133 = 86U;
	int64_t x134 = -1LL;
	int64_t x135 = INT64_MAX;
	volatile int64_t t29 = -27114LL;

	t29 = (x133&(x134-(x135|x136)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = INT32_MAX;
	uint8_t x138 = UINT8_MAX;
	volatile uint32_t x139 = 0U;
	int16_t x140 = 7;
	uint32_t t30 = 96797974U;

	t30 = (x137&(x138-(x139|x140)));

	if (t30 != 248U) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x146 = 25047U;
	volatile int16_t x148 = INT16_MIN;

	t31 = (x145&(x146-(x147|x148)));

	if (t31 != 16LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x149 = -1LL;
	volatile uint32_t x150 = 3U;
	static int64_t x151 = 18292LL;
	static volatile int16_t x152 = INT16_MIN;

	t32 = (x149&(x150-(x151|x152)));

	if (t32 != 14479LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	uint32_t x154 = 5168651U;
	int32_t x155 = INT32_MIN;
	volatile uint32_t t33 = 124U;

	t33 = (x153&(x154-(x155|x156)));

	if (t33 != 5168653U) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = INT64_MIN;
	uint32_t x158 = UINT32_MAX;
	int8_t x159 = 6;
	int16_t x160 = INT16_MIN;
	int64_t t34 = 11408LL;

	t34 = (x157&(x158-(x159|x160)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x161 = -34;
	uint8_t x162 = 0U;
	uint16_t x163 = 4598U;
	volatile int64_t x164 = -470181733202074964LL;
	int64_t t35 = -507398477LL;

	t35 = (x161&(x162-(x163|x164)));

	if (t35 != 470181733202070530LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x166 = -2370LL;
	volatile int32_t x167 = -1;
	int32_t x168 = INT32_MAX;
	volatile int64_t t36 = 40LL;

	t36 = (x165&(x166-(x167|x168)));

	if (t36 != -2369LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x169 = 8U;
	int64_t x170 = -149LL;
	int64_t x171 = INT64_MIN;
	static int32_t x172 = INT32_MIN;

	t37 = (x169&(x170-(x171|x172)));

	if (t37 != 8LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x173 = INT32_MAX;
	volatile uint16_t x174 = 3545U;
	volatile int32_t x176 = -1;

	t38 = (x173&(x174-(x175|x176)));

	if (t38 != 3546) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x177 = INT16_MIN;
	int16_t x178 = -1;
	int16_t x179 = -1150;
	static int16_t x180 = INT16_MIN;
	int32_t t39 = 16499906;

	t39 = (x177&(x178-(x179|x180)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = 0;
	int32_t x182 = -1;
	int64_t x183 = -1LL;
	static int64_t x184 = INT64_MAX;
	int64_t t40 = 1LL;

	t40 = (x181&(x182-(x183|x184)));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x185 = UINT16_MAX;
	static int8_t x186 = 7;
	static int16_t x187 = 810;
	uint64_t x188 = UINT64_MAX;
	uint64_t t41 = 299567300LLU;

	t41 = (x185&(x186-(x187|x188)));

	if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = UINT8_MAX;
	static uint32_t x190 = 2U;
	static int32_t x191 = 498543;
	volatile int8_t x192 = -27;

	t42 = (x189&(x190-(x191|x192)));

	if (t42 != 19U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = -1;
	static int64_t x194 = INT64_MIN;
	volatile int16_t x195 = INT16_MIN;
	int64_t x196 = INT64_MIN;
	int64_t t43 = -38943363LL;

	t43 = (x193&(x194-(x195|x196)));

	if (t43 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint16_t x198 = 104U;
	volatile int32_t x199 = INT32_MIN;
	int8_t x200 = -1;
	volatile int32_t t44 = 1216;

	t44 = (x197&(x198-(x199|x200)));

	if (t44 != 105) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x201 = INT64_MIN;
	volatile int8_t x202 = INT8_MIN;
	static int64_t t45 = -6386LL;

	t45 = (x201&(x202-(x203|x204)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = UINT8_MAX;
	static int8_t x206 = INT8_MIN;
	uint32_t x207 = 36U;
	int32_t x208 = -2;
	volatile uint32_t t46 = 20902099U;

	t46 = (x205&(x206-(x207|x208)));

	if (t46 != 130U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = -398604679;
	uint32_t x210 = 20913U;
	static int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MAX;

	t47 = (x209&(x210-(x211|x212)));

	if (t47 != 16432U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MAX;
	int16_t x214 = INT16_MIN;
	int32_t x215 = INT32_MAX;
	static volatile int64_t t48 = -351822759617156647LL;

	t48 = (x213&(x214-(x215|x216)));

	if (t48 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x217 = UINT32_MAX;
	volatile int8_t x218 = INT8_MAX;
	int16_t x219 = INT16_MIN;
	int16_t x220 = 3;
	uint32_t t49 = 1U;

	t49 = (x217&(x218-(x219|x220)));

	if (t49 != 32892U) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x221 = INT16_MAX;
	static int64_t x222 = -1LL;
	int64_t t50 = 1666539LL;

	t50 = (x221&(x222-(x223|x224)));

	if (t50 != 32512LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x225 = 87U;
	uint8_t x226 = 0U;
	int32_t x227 = INT32_MAX;
	uint64_t x228 = UINT64_MAX;
	uint64_t t51 = 52327LLU;

	t51 = (x225&(x226-(x227|x228)));

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x230 = -3;
	static uint64_t x231 = 830LLU;
	volatile int64_t x232 = -27LL;

	t52 = (x229&(x230-(x231|x232)));

	if (t52 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -1LL;
	static int8_t x235 = INT8_MAX;
	uint16_t x236 = 8520U;

	t53 = (x233&(x234-(x235|x236)));

	if (t53 != 9223372036854767232LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x237 = 1U;
	static uint32_t x238 = UINT32_MAX;
	int8_t x239 = INT8_MAX;
	int8_t x240 = -39;
	volatile uint32_t t54 = 31103504U;

	t54 = (x237&(x238-(x239|x240)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x241 = 3U;
	uint8_t x242 = 41U;
	int32_t x243 = -358;
	int64_t x244 = -1LL;
	volatile int64_t t55 = -1750LL;

	t55 = (x241&(x242-(x243|x244)));

	if (t55 != 2LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x245 = INT16_MIN;
	int64_t x246 = -1LL;
	uint8_t x247 = 81U;
	static uint64_t x248 = UINT64_MAX;
	uint64_t t56 = 7758889477441364LLU;

	t56 = (x245&(x246-(x247|x248)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x249 = INT16_MIN;
	static int32_t x250 = INT32_MIN;
	int8_t x251 = INT8_MAX;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t57 = -243475725;

	t57 = (x249&(x250-(x251|x252)));

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = 1132397880633306631LLU;
	int8_t x258 = INT8_MIN;
	static int32_t x259 = INT32_MIN;
	volatile int64_t x260 = -1LL;
	volatile uint64_t t58 = 49764LLU;

	t58 = (x257&(x258-(x259|x260)));

	if (t58 != 1132397880633306625LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x264 = 56;
	uint64_t t59 = 4459211994298LLU;

	t59 = (x261&(x262-(x263|x264)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x265 = 1U;
	uint16_t x266 = UINT16_MAX;
	int64_t x267 = -3028480183838317LL;
	volatile int64_t t60 = -29333979716LL;

	t60 = (x265&(x266-(x267|x268)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x270 = 3948146281647854LL;
	uint8_t x271 = UINT8_MAX;
	volatile int32_t x272 = 2829;
	int64_t t61 = -6178492575226LL;

	t61 = (x269&(x270-(x271|x272)));

	if (t61 != 3948146281644783LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x274 = 0LL;
	uint64_t x275 = 142208896514231972LLU;
	int32_t x276 = 192105;
	volatile uint64_t t62 = 0LLU;

	t62 = (x273&(x274-(x275|x276)));

	if (t62 != 4371LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x277 = -394620306587LL;
	uint32_t x278 = 264146U;
	int8_t x279 = 6;
	int64_t t63 = 106362835629LL;

	t63 = (x277&(x278-(x279|x280)));

	if (t63 != 836LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x281 = UINT16_MAX;
	int8_t x282 = 22;
	uint16_t x283 = 15518U;
	int64_t x284 = -215444LL;
	int64_t t64 = 301345980LL;

	t64 = (x281&(x282-(x283|x284)));

	if (t64 != 16664LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int16_t x286 = INT16_MAX;
	static volatile uint16_t x287 = 207U;
	volatile int32_t t65 = -342;

	t65 = (x285&(x286-(x287|x288)));

	if (t65 != 32032) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x289 = INT8_MIN;
	int64_t x290 = INT64_MAX;
	static uint64_t x291 = 23461707473074LLU;
	int8_t x292 = 1;
	uint64_t t66 = 67129385281625LLU;

	t66 = (x289&(x290-(x291|x292)));

	if (t66 != 9223348575147302656LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x293 = -158;
	uint16_t x294 = 19U;
	int32_t x295 = INT32_MAX;
	volatile uint32_t x296 = UINT32_MAX;

	t67 = (x293&(x294-(x295|x296)));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = -1;
	int64_t x298 = -1162886LL;
	int32_t x299 = 215;
	static volatile uint32_t x300 = 0U;
	int64_t t68 = 113130769705059LL;

	t68 = (x297&(x298-(x299|x300)));

	if (t68 != -1163101LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x301 = INT64_MAX;
	volatile int64_t x302 = INT64_MAX;
	volatile int32_t x303 = -106622560;
	static uint64_t x304 = UINT64_MAX;
	uint64_t t69 = 119175LLU;

	t69 = (x301&(x302-(x303|x304)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x305 = 9U;
	int8_t x306 = 1;
	int64_t x307 = INT64_MIN;
	static int32_t x308 = 23632506;
	volatile int64_t t70 = -3372234LL;

	t70 = (x305&(x306-(x307|x308)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = INT16_MIN;
	int64_t x311 = INT64_MIN;
	volatile uint64_t t71 = 308964114255999199LLU;

	t71 = (x309&(x310-(x311|x312)));

	if (t71 != 9466024533380923392LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x317 = 84U;
	uint32_t x318 = 468U;
	int32_t x320 = -1;
	volatile uint32_t t72 = 15156U;

	t72 = (x317&(x318-(x319|x320)));

	if (t72 != 84U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x321 = 1896U;
	uint64_t x322 = 8443456565244149LLU;
	volatile int64_t x323 = -6659219903903LL;
	int64_t x324 = -21LL;
	static volatile uint64_t t73 = 3817405357736LLU;

	t73 = (x321&(x322-(x323|x324)));

	if (t73 != 264LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x325 = UINT32_MAX;
	volatile int8_t x326 = 1;
	volatile uint8_t x327 = 2U;
	volatile uint16_t x328 = 224U;
	volatile uint32_t t74 = 3U;

	t74 = (x325&(x326-(x327|x328)));

	if (t74 != 4294967071U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x329 = -1;
	static int16_t x331 = -1;
	static volatile int64_t x332 = -118588600LL;
	int64_t t75 = 3766569207782792LL;

	t75 = (x329&(x330-(x331|x332)));

	if (t75 != -11050633LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x335 = -1LL;
	int64_t x336 = 273416218400LL;
	volatile int64_t t76 = -280LL;

	t76 = (x333&(x334-(x335|x336)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x337 = 69;
	int64_t x338 = -1LL;
	int8_t x339 = INT8_MAX;
	static int64_t x340 = INT64_MIN;
	volatile int64_t t77 = -4984953642335333LL;

	t77 = (x337&(x338-(x339|x340)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = -11488047216845609LL;
	volatile uint64_t x344 = 358376013LLU;
	uint64_t t78 = 2LLU;

	t78 = (x341&(x342-(x343|x344)));

	if (t78 != 11488043231870976LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int8_t x346 = INT8_MIN;
	volatile uint32_t x347 = 4U;

	t79 = (x345&(x346-(x347|x348)));

	if (t79 != 4294966913LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x349 = 1632322LLU;
	int8_t x350 = 2;
	volatile uint16_t x351 = UINT16_MAX;
	static uint64_t t80 = 167089627LLU;

	t80 = (x349&(x350-(x351|x352)));

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = 85935359383449311LL;
	volatile int64_t x354 = 20867LL;
	uint8_t x355 = 49U;
	int64_t x356 = -1LL;
	int64_t t81 = 141884481LL;

	t81 = (x353&(x354-(x355|x356)));

	if (t81 != 132LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x357 = 1;
	uint16_t x358 = UINT16_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t82 = 2956;

	t82 = (x357&(x358-(x359|x360)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x362 = INT8_MAX;
	int16_t x363 = 7191;
	static int32_t x364 = 63494419;
	static int32_t t83 = -1789;

	t83 = (x361&(x362-(x363|x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x365 = -213772085458826LL;
	int64_t x368 = 2950466LL;
	uint64_t t84 = 31226688482468LLU;

	t84 = (x365&(x366-(x367|x368)));

	if (t84 != 5017641715744LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x369 = INT16_MIN;
	volatile uint16_t x370 = UINT16_MAX;
	int8_t x371 = -1;
	uint32_t x372 = UINT32_MAX;
	volatile uint32_t t85 = 6U;

	t85 = (x369&(x370-(x371|x372)));

	if (t85 != 65536U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x373 = -3770;
	int16_t x374 = INT16_MAX;
	int16_t x375 = -58;
	int32_t x376 = INT32_MIN;
	volatile int32_t t86 = -8955;

	t86 = (x373&(x374-(x375|x376)));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x377 = INT8_MIN;
	int8_t x378 = INT8_MAX;
	uint8_t x379 = UINT8_MAX;
	volatile uint16_t x380 = 3U;
	int32_t t87 = -360;

	t87 = (x377&(x378-(x379|x380)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x381 = 135887618925LLU;
	uint32_t x382 = UINT32_MAX;
	volatile int16_t x383 = 4;
	uint64_t t88 = 7953523917588LLU;

	t88 = (x381&(x382-(x383|x384)));

	if (t88 != 2743632744LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x385 = INT8_MIN;
	volatile int16_t x386 = 5593;
	int32_t x387 = -1;
	int64_t x388 = INT64_MIN;
	volatile int64_t t89 = 3558085436919933892LL;

	t89 = (x385&(x386-(x387|x388)));

	if (t89 != 5504LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x389 = -1;
	volatile int8_t x390 = INT8_MAX;
	static uint16_t x391 = 29998U;
	int64_t x392 = INT64_MIN;
	int64_t t90 = 390712396996LL;

	t90 = (x389&(x390-(x391|x392)));

	if (t90 != 9223372036854745937LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x394 = INT64_MIN;
	static int8_t x396 = -1;

	t91 = (x393&(x394-(x395|x396)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x397 = 2919U;
	int8_t x398 = INT8_MIN;
	static int32_t x400 = 38324140;
	volatile int32_t t92 = 27054;

	t92 = (x397&(x398-(x399|x400)));

	if (t92 != 769) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x405 = INT32_MAX;
	static int8_t x406 = -1;
	int8_t x407 = INT8_MIN;
	int64_t x408 = INT64_MIN;
	static int64_t t93 = 392995361941773672LL;

	t93 = (x405&(x406-(x407|x408)));

	if (t93 != 127LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x409 = -1;
	int8_t x410 = INT8_MIN;
	int16_t x411 = 14862;
	int64_t x412 = -1452358190LL;
	volatile int64_t t94 = -1800968706316650258LL;

	t94 = (x409&(x410-(x411|x412)));

	if (t94 != 1452343202LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x413 = 0U;
	int8_t x414 = -1;
	volatile int64_t x416 = INT64_MAX;

	t95 = (x413&(x414-(x415|x416)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x417 = 6;
	static int8_t x418 = INT8_MIN;
	int8_t x419 = INT8_MAX;
	static uint16_t x420 = 10055U;
	int32_t t96 = 7296937;

	t96 = (x417&(x418-(x419|x420)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x421 = INT32_MIN;
	int16_t x422 = -6659;
	int64_t x424 = 12865430943568LL;
	volatile int64_t t97 = 8568662702LL;

	t97 = (x421&(x422-(x423|x424)));

	if (t97 != -12865574535168LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x425 = 3U;
	uint16_t x426 = UINT16_MAX;
	uint8_t x427 = 2U;
	uint32_t x428 = 29634U;
	uint32_t t98 = 120221U;

	t98 = (x425&(x426-(x427|x428)));

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x430 = -6;
	static uint64_t x431 = 27378LLU;
	static volatile uint8_t x432 = 2U;
	static volatile uint64_t t99 = 6005794205343LLU;

	t99 = (x429&(x430-(x431|x432)));

	if (t99 != 4294939912LLU) { NG(); } else { ; }
	
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

