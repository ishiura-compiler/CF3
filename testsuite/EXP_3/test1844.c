#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -788354636872662LL;
volatile int64_t x9 = INT64_MAX;
uint64_t t2 = 1531941486LLU;
int64_t x13 = INT64_MIN;
int16_t x14 = 2145;
int8_t x17 = -1;
int32_t x24 = INT32_MAX;
static int64_t x25 = 948938LL;
uint16_t x28 = 2U;
uint64_t t8 = 62978444218840LLU;
uint64_t x38 = 141753992920LLU;
int64_t x39 = -1LL;
int8_t x55 = -1;
int16_t x67 = INT16_MIN;
int32_t x68 = -10289;
int32_t t17 = 48045908;
uint16_t x76 = 13144U;
volatile int16_t x87 = -767;
static int8_t x92 = -1;
static int64_t x93 = -1LL;
int32_t x94 = -127356719;
int32_t x96 = -506590;
uint8_t x110 = 0U;
volatile int64_t x118 = INT64_MIN;
int64_t x121 = INT64_MIN;
static uint64_t x125 = UINT64_MAX;
int32_t x127 = -1;
volatile uint64_t t31 = UINT64_MAX;
uint64_t x131 = 415474755LLU;
volatile int64_t x132 = INT64_MIN;
int32_t x135 = -1;
int32_t t33 = -6685;
static int16_t x158 = INT16_MIN;
uint64_t t39 = 4LLU;
int64_t x166 = INT64_MIN;
uint32_t x176 = UINT32_MAX;
uint64_t t45 = 298992868754778041LLU;
static uint64_t x185 = 221906LLU;
volatile int16_t x187 = 223;
uint32_t x192 = 7725U;
int64_t t47 = -73710666LL;
uint64_t x198 = 4009253LLU;
uint8_t x200 = UINT8_MAX;
volatile uint64_t t49 = 2792312188922394LLU;
int16_t x208 = -1;
volatile uint16_t x209 = UINT16_MAX;
uint16_t x215 = 1165U;
static int64_t x218 = INT64_MAX;
int64_t x222 = -1LL;
int8_t x228 = -9;
uint16_t x230 = 2907U;
int8_t x233 = INT8_MIN;
int32_t x235 = -62403;
int8_t x239 = -1;
int64_t x243 = INT64_MIN;
int8_t x246 = INT8_MIN;
volatile int32_t x247 = INT32_MIN;
static int64_t x249 = INT64_MIN;
uint32_t x252 = UINT32_MAX;
volatile int64_t t65 = -1808254126493295494LL;
uint64_t x265 = 42814225214LLU;
int32_t x286 = -1;
static volatile int32_t x287 = INT32_MAX;
volatile uint32_t x288 = 2U;
static volatile uint32_t x292 = 17898U;
int16_t x295 = INT16_MIN;
volatile int16_t x303 = -7;
uint32_t t75 = 908U;
int64_t x308 = INT64_MAX;
int8_t x313 = 12;
int64_t x315 = -1LL;
int64_t t78 = 174166163888LL;
int32_t x325 = -219443;
uint16_t x327 = 9U;
int32_t x333 = INT32_MAX;
int32_t x343 = 409;
uint8_t x351 = 0U;
uint16_t x354 = 17617U;
uint16_t x358 = 440U;
static uint32_t x359 = 12155U;
uint8_t x368 = 46U;
volatile int16_t x370 = INT16_MAX;
static uint64_t x371 = 1461843960LLU;
volatile int64_t t93 = 3477830768974LL;
int8_t x380 = INT8_MAX;
volatile int64_t x395 = INT64_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -1;
	int64_t x3 = INT64_MAX;
	static int16_t x4 = INT16_MIN;
	static int64_t t0 = -106177803LL;

	t0 = ((x1|x2)&(x3&x4));

	if (t0 != 4294934528LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 4255LL;
	int64_t x6 = INT64_MIN;
	static uint16_t x7 = 28U;
	volatile int32_t x8 = INT32_MIN;

	t1 = ((x5|x6)&(x7&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x10 = 18813088289408LLU;
	uint16_t x11 = 5409U;
	int32_t x12 = -132846;

	t2 = ((x9|x10)&(x11&x12));

	if (t2 != 4352LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x15 = INT8_MAX;
	int32_t x16 = 15132340;
	static int64_t t3 = 189LL;

	t3 = ((x13|x14)&(x15&x16));

	if (t3 != 32LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = 211U;
	uint8_t x19 = 0U;
	uint8_t x20 = 1U;
	volatile uint32_t t4 = 14715569U;

	t4 = ((x17|x18)&(x19&x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = 2;
	int32_t x22 = INT32_MIN;
	int8_t x23 = INT8_MIN;
	int32_t t5 = 4318;

	t5 = ((x21|x22)&(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 2U;
	int16_t x27 = INT16_MIN;
	int64_t t6 = -445LL;

	t6 = ((x25|x26)&(x27&x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint8_t x30 = 2U;
	uint16_t x31 = UINT16_MAX;
	int64_t x32 = -1LL;
	int64_t t7 = -3180296401113873043LL;

	t7 = ((x29|x30)&(x31&x32));

	if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -273223589726249LL;
	int8_t x34 = INT8_MIN;
	volatile uint16_t x35 = 216U;
	uint64_t x36 = 86535454170540415LLU;

	t8 = ((x33|x34)&(x35&x36));

	if (t8 != 80LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	volatile int32_t x40 = -7253075;
	static volatile uint64_t t9 = 3LLU;

	t9 = ((x37|x38)&(x39&x40));

	if (t9 != 9223372178606539400LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x41 = 106182718U;
	volatile uint16_t x42 = UINT16_MAX;
	int32_t x43 = INT32_MIN;
	static int8_t x44 = -38;
	uint32_t t10 = 174182174U;

	t10 = ((x41|x42)&(x43&x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int64_t x46 = INT64_MIN;
	volatile uint32_t x47 = UINT32_MAX;
	uint8_t x48 = UINT8_MAX;
	volatile int64_t t11 = -16541863LL;

	t11 = ((x45|x46)&(x47&x48));

	if (t11 != 255LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	volatile int16_t x50 = -1982;
	static int8_t x51 = INT8_MAX;
	static int32_t x52 = -143;
	volatile int32_t t12 = -4439794;

	t12 = ((x49|x50)&(x51&x52));

	if (t12 != 113) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int16_t x54 = -1;
	static uint16_t x56 = UINT16_MAX;
	static int32_t t13 = -2018;

	t13 = ((x53|x54)&(x55&x56));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	uint16_t x58 = 5160U;
	uint64_t x59 = 126131648LLU;
	static int8_t x60 = INT8_MIN;
	static uint64_t t14 = 138LLU;

	t14 = ((x57|x58)&(x59&x60));

	if (t14 != 126131584LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = 3245U;
	int64_t x62 = INT64_MAX;
	uint64_t x63 = 5869532457321435433LLU;
	volatile uint8_t x64 = 9U;
	volatile uint64_t t15 = 46731158355LLU;

	t15 = ((x61|x62)&(x63&x64));

	if (t15 != 9LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 6U;
	uint8_t x66 = 89U;
	volatile int32_t t16 = 89;

	t16 = ((x65|x66)&(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = -1;
	int32_t x70 = INT32_MIN;
	static uint8_t x71 = 26U;
	int32_t x72 = -507475569;

	t17 = ((x69|x70)&(x71&x72));

	if (t17 != 10) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = INT16_MAX;
	static int8_t x74 = 0;
	int8_t x75 = INT8_MIN;
	volatile int32_t t18 = -98467;

	t18 = ((x73|x74)&(x75&x76));

	if (t18 != 13056) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 251056590422LL;
	static uint16_t x78 = 15U;
	static volatile int8_t x79 = INT8_MAX;
	int8_t x80 = -12;
	int64_t t19 = -8465619451402878LL;

	t19 = ((x77|x78)&(x79&x80));

	if (t19 != 84LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -6;
	uint16_t x82 = UINT16_MAX;
	int32_t x83 = INT32_MIN;
	static int16_t x84 = INT16_MAX;
	int32_t t20 = 8;

	t20 = ((x81|x82)&(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 1U;
	static int8_t x86 = -4;
	static volatile uint16_t x88 = 5U;
	volatile int32_t t21 = 340;

	t21 = ((x85|x86)&(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 1715U;
	static uint8_t x90 = UINT8_MAX;
	uint8_t x91 = UINT8_MAX;
	int32_t t22 = 78182055;

	t22 = ((x89|x90)&(x91&x92));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x95 = INT16_MIN;
	static int64_t t23 = -2902353LL;

	t23 = ((x93|x94)&(x95&x96));

	if (t23 != -524288LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 43786717953831LLU;
	int16_t x98 = INT16_MAX;
	volatile int32_t x99 = 106642266;
	static uint16_t x100 = UINT16_MAX;
	volatile uint64_t t24 = 11167863278LLU;

	t24 = ((x97|x98)&(x99&x100));

	if (t24 != 15194LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MIN;
	uint16_t x102 = 1394U;
	volatile uint8_t x103 = 0U;
	volatile int16_t x104 = INT16_MAX;
	volatile int64_t t25 = 191LL;

	t25 = ((x101|x102)&(x103&x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int32_t x106 = INT32_MAX;
	static uint16_t x107 = UINT16_MAX;
	uint32_t x108 = 238830457U;
	volatile uint32_t t26 = 7610210U;

	t26 = ((x105|x106)&(x107&x108));

	if (t26 != 17273U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	volatile int32_t x111 = INT32_MIN;
	int64_t x112 = -1LL;
	int64_t t27 = 1LL;

	t27 = ((x109|x110)&(x111&x112));

	if (t27 != -2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = 558;
	uint64_t x114 = 3847829658057075LLU;
	int8_t x115 = -12;
	static int8_t x116 = INT8_MAX;
	uint64_t t28 = 5029109671LLU;

	t28 = ((x113|x114)&(x115&x116));

	if (t28 != 116LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -543;
	int32_t x119 = 1;
	volatile uint64_t x120 = 4288422246503LLU;
	volatile uint64_t t29 = 15168309501LLU;

	t29 = ((x117|x118)&(x119&x120));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x122 = 4LL;
	int8_t x123 = 1;
	volatile uint8_t x124 = 25U;
	volatile int64_t t30 = 502309LL;

	t30 = ((x121|x122)&(x123&x124));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x126 = INT32_MIN;
	int64_t x128 = -1LL;

	t31 = ((x125|x126)&(x127&x128));

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	static uint64_t t32 = 36LLU;

	t32 = ((x129|x130)&(x131&x132));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = -1;
	int8_t x134 = 13;
	int8_t x136 = -1;

	t33 = ((x133|x134)&(x135&x136));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	uint64_t x138 = 3748129944451366022LLU;
	int64_t x139 = -1LL;
	uint16_t x140 = 52U;
	volatile uint64_t t34 = 1089969479745983719LLU;

	t34 = ((x137|x138)&(x139&x140));

	if (t34 != 4LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 0U;
	volatile uint32_t x142 = UINT32_MAX;
	uint32_t x143 = UINT32_MAX;
	volatile uint32_t x144 = UINT32_MAX;
	uint32_t t35 = UINT32_MAX;

	t35 = ((x141|x142)&(x143&x144));

	if (t35 != UINT32_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	uint16_t x146 = 0U;
	int8_t x147 = INT8_MAX;
	volatile uint64_t x148 = UINT64_MAX;
	static uint64_t t36 = 5LLU;

	t36 = ((x145|x146)&(x147&x148));

	if (t36 != 127LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int16_t x150 = INT16_MIN;
	int64_t x151 = 22039LL;
	volatile uint64_t x152 = 386186492LLU;
	static volatile uint64_t t37 = 2716648084056745LLU;

	t37 = ((x149|x150)&(x151&x152));

	if (t37 != 5140LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	static int8_t x154 = INT8_MAX;
	uint16_t x155 = 13989U;
	uint16_t x156 = 3196U;
	static uint32_t t38 = 610U;

	t38 = ((x153|x154)&(x155&x156));

	if (t38 != 1060U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = -55;
	static uint64_t x159 = 242785749LLU;
	static uint16_t x160 = UINT16_MAX;

	t39 = ((x157|x158)&(x159&x160));

	if (t39 != 40385LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	static int16_t x162 = INT16_MIN;
	int64_t x163 = INT64_MIN;
	static uint16_t x164 = UINT16_MAX;
	static int64_t t40 = 70124LL;

	t40 = ((x161|x162)&(x163&x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int8_t x167 = INT8_MIN;
	int64_t x168 = INT64_MAX;
	static int64_t t41 = -82LL;

	t41 = ((x165|x166)&(x167&x168));

	if (t41 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x169 = 614U;
	int8_t x170 = -15;
	volatile int16_t x171 = -1;
	volatile int16_t x172 = 1;
	int32_t t42 = 818109;

	t42 = ((x169|x170)&(x171&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = -678474840060LL;
	int16_t x175 = -1;
	volatile int64_t t43 = -1120LL;

	t43 = ((x173|x174)&(x175&x176));

	if (t43 != 4294967172LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x177 = -7LL;
	int8_t x178 = 1;
	int32_t x179 = INT32_MIN;
	static uint32_t x180 = UINT32_MAX;
	static volatile int64_t t44 = 0LL;

	t44 = ((x177|x178)&(x179&x180));

	if (t44 != 2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x181 = INT32_MIN;
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	static uint8_t x184 = 1U;

	t45 = ((x181|x182)&(x183&x184));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x186 = 46440803U;
	static int8_t x188 = INT8_MIN;
	volatile uint64_t t46 = 38499917226397989LLU;

	t46 = ((x185|x186)&(x187&x188));

	if (t46 != 128LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x189 = 2;
	volatile int64_t x190 = -1LL;
	int32_t x191 = INT32_MIN;

	t47 = ((x189|x190)&(x191&x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 22U;
	volatile int32_t x194 = INT32_MAX;
	int32_t x195 = INT32_MIN;
	volatile int16_t x196 = -1;
	int32_t t48 = -93582;

	t48 = ((x193|x194)&(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static uint64_t x199 = 16389240850197831LLU;

	t49 = ((x197|x198)&(x199&x200));

	if (t49 != 5LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = UINT8_MAX;
	uint64_t x202 = 8542942900LLU;
	static volatile uint8_t x203 = UINT8_MAX;
	int64_t x204 = INT64_MIN;
	uint64_t t50 = 14913792443147LLU;

	t50 = ((x201|x202)&(x203&x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MAX;
	uint16_t x207 = 14U;
	static volatile int32_t t51 = -189037;

	t51 = ((x205|x206)&(x207&x208));

	if (t51 != 14) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -675;
	uint32_t x211 = 1U;
	int64_t x212 = -260804LL;
	static volatile int64_t t52 = -67802200662683LL;

	t52 = ((x209|x210)&(x211&x212));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x214 = INT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile uint64_t t53 = 432955434LLU;

	t53 = ((x213|x214)&(x215&x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	int32_t x219 = -1;
	int16_t x220 = -3223;
	static uint64_t t54 = 4030554111360LLU;

	t54 = ((x217|x218)&(x219&x220));

	if (t54 != 18446744073709548393LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static int64_t x223 = 34227648265526LL;
	volatile uint8_t x224 = 0U;
	volatile int64_t t55 = -3972154795LL;

	t55 = ((x221|x222)&(x223&x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x225 = UINT32_MAX;
	static int64_t x226 = 30886275074LL;
	uint8_t x227 = UINT8_MAX;
	int64_t t56 = 7255813LL;

	t56 = ((x225|x226)&(x227&x228));

	if (t56 != 247LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	uint64_t x231 = 1208218139LLU;
	int8_t x232 = INT8_MIN;
	uint64_t t57 = 2154921078352281206LLU;

	t57 = ((x229|x230)&(x231&x232));

	if (t57 != 1208218112LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = INT8_MIN;
	int32_t x236 = 192362712;
	int32_t t58 = 128867;

	t58 = ((x233|x234)&(x235&x236));

	if (t58 != 192350208) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x238 = UINT32_MAX;
	uint16_t x240 = 0U;
	volatile uint32_t t59 = 98442482U;

	t59 = ((x237|x238)&(x239&x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = UINT16_MAX;
	uint64_t x242 = UINT64_MAX;
	uint64_t x244 = 3853841694448LLU;
	uint64_t t60 = 16670891490864523LLU;

	t60 = ((x241|x242)&(x243&x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = 4899;
	int8_t x248 = -4;
	int32_t t61 = INT32_MIN;

	t61 = ((x245|x246)&(x247&x248));

	if (t61 != INT32_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = INT16_MAX;
	uint16_t x251 = UINT16_MAX;
	volatile int64_t t62 = 44660LL;

	t62 = ((x249|x250)&(x251&x252));

	if (t62 != 32767LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = -2;
	int64_t x254 = INT64_MIN;
	int8_t x255 = INT8_MIN;
	volatile uint32_t x256 = UINT32_MAX;
	volatile int64_t t63 = 447995679311273LL;

	t63 = ((x253|x254)&(x255&x256));

	if (t63 != 4294967168LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	static int8_t x258 = -1;
	volatile int32_t x259 = -1;
	uint32_t x260 = 2454971U;
	int64_t t64 = 124050LL;

	t64 = ((x257|x258)&(x259&x260));

	if (t64 != 2454971LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x261 = INT16_MIN;
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = 9364159;
	int64_t x264 = 33482624363782LL;

	t65 = ((x261|x262)&(x263&x264));

	if (t65 != 9330694LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 567629868510679LLU;
	int64_t x267 = INT64_MAX;
	volatile int32_t x268 = INT32_MIN;
	uint64_t t66 = 3LLU;

	t66 = ((x265|x266)&(x267&x268));

	if (t66 != 567663680028672LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = -113993;
	static uint32_t x270 = 312177024U;
	uint64_t x271 = UINT64_MAX;
	static int8_t x272 = INT8_MAX;
	uint64_t t67 = 687442270934916LLU;

	t67 = ((x269|x270)&(x271&x272));

	if (t67 != 55LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MIN;
	volatile int8_t x274 = -9;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = 10;
	int32_t t68 = 754;

	t68 = ((x273|x274)&(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x277 = 73U;
	static uint8_t x278 = 11U;
	int64_t x279 = INT64_MAX;
	int16_t x280 = -1;
	int64_t t69 = 1514504462393LL;

	t69 = ((x277|x278)&(x279&x280));

	if (t69 != 75LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x281 = INT8_MIN;
	volatile int32_t x282 = INT32_MIN;
	int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;
	volatile int64_t t70 = INT64_MIN;

	t70 = ((x281|x282)&(x283&x284));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	uint64_t t71 = 6832193806681LLU;

	t71 = ((x285|x286)&(x287&x288));

	if (t71 != 2LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = UINT8_MAX;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MAX;
	static volatile int64_t t72 = -260335071065551912LL;

	t72 = ((x289|x290)&(x291&x292));

	if (t72 != 17898LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x293 = -1LL;
	volatile int8_t x294 = -44;
	int32_t x296 = -14893;
	volatile int64_t t73 = 319615LL;

	t73 = ((x293|x294)&(x295&x296));

	if (t73 != -32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 6U;
	int16_t x298 = 324;
	int8_t x299 = -3;
	int32_t x300 = INT32_MAX;
	int32_t t74 = 51;

	t74 = ((x297|x298)&(x299&x300));

	if (t74 != 324) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MIN;
	uint32_t x304 = 19038U;

	t75 = ((x301|x302)&(x303&x304));

	if (t75 != 88U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x305 = 2077856;
	int8_t x306 = INT8_MAX;
	int16_t x307 = INT16_MAX;
	static int64_t t76 = -7679005597737337LL;

	t76 = ((x305|x306)&(x307&x308));

	if (t76 != 13567LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = -17;
	volatile uint64_t x310 = 735295550384LLU;
	int8_t x311 = -1;
	volatile int16_t x312 = -1;
	uint64_t t77 = UINT64_MAX;

	t77 = ((x309|x310)&(x311&x312));

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x314 = UINT16_MAX;
	int64_t x316 = -59612682947LL;

	t78 = ((x313|x314)&(x315&x316));

	if (t78 != 42301LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 5208841U;
	static int16_t x318 = INT16_MIN;
	uint32_t x319 = UINT32_MAX;
	int64_t x320 = INT64_MAX;
	int64_t t79 = -996107190898LL;

	t79 = ((x317|x318)&(x319&x320));

	if (t79 != 4294966025LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 0U;
	int8_t x322 = -1;
	uint64_t x323 = 17477668755LLU;
	uint64_t x324 = 3725921842791LLU;
	volatile uint64_t t80 = 3501926032LLU;

	t80 = ((x321|x322)&(x323&x324));

	if (t80 != 1539LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 1U;
	uint32_t x328 = 4U;
	volatile uint32_t t81 = 18050751U;

	t81 = ((x325|x326)&(x327&x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 314409U;
	uint32_t x330 = UINT32_MAX;
	int16_t x331 = INT16_MIN;
	static uint16_t x332 = UINT16_MAX;
	uint32_t t82 = 102563U;

	t82 = ((x329|x330)&(x331&x332));

	if (t82 != 32768U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x334 = INT16_MAX;
	uint64_t x335 = 4668LLU;
	int8_t x336 = INT8_MAX;
	uint64_t t83 = 4544LLU;

	t83 = ((x333|x334)&(x335&x336));

	if (t83 != 60LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x337 = UINT32_MAX;
	static int16_t x338 = -1790;
	int64_t x339 = INT64_MIN;
	int8_t x340 = INT8_MIN;
	volatile int64_t t84 = 90LL;

	t84 = ((x337|x338)&(x339&x340));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MAX;
	static volatile int64_t x342 = INT64_MAX;
	static volatile uint8_t x344 = 24U;
	int64_t t85 = -7930LL;

	t85 = ((x341|x342)&(x343&x344));

	if (t85 != 24LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	static volatile uint16_t x347 = 29703U;
	uint32_t x348 = UINT32_MAX;
	uint32_t t86 = 559330674U;

	t86 = ((x345|x346)&(x347&x348));

	if (t86 != 29703U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x349 = -1;
	volatile int32_t x350 = INT32_MAX;
	static uint32_t x352 = 2U;
	uint32_t t87 = 181126152U;

	t87 = ((x349|x350)&(x351&x352));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x355 = 217377208LLU;
	int32_t x356 = -1;
	volatile uint64_t t88 = 445LLU;

	t88 = ((x353|x354)&(x355&x356));

	if (t88 != 217366672LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = UINT32_MAX;
	int32_t x360 = -1;
	uint32_t t89 = 1U;

	t89 = ((x357|x358)&(x359&x360));

	if (t89 != 12155U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x361 = 23969U;
	int16_t x362 = 4388;
	int8_t x363 = -14;
	volatile int8_t x364 = INT8_MAX;
	int32_t t90 = -559887909;

	t90 = ((x361|x362)&(x363&x364));

	if (t90 != 32) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x365 = 1201421832LLU;
	int8_t x366 = -1;
	int16_t x367 = INT16_MIN;
	volatile uint64_t t91 = 546422649119641LLU;

	t91 = ((x365|x366)&(x367&x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -31617;
	int32_t x372 = -50913373;
	static uint64_t t92 = 1021910760LLU;

	t92 = ((x369|x370)&(x371&x372));

	if (t92 != 1411454880LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = -736LL;
	int16_t x374 = INT16_MAX;
	int8_t x375 = INT8_MIN;
	volatile int32_t x376 = -1;

	t93 = ((x373|x374)&(x375&x376));

	if (t93 != -128LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	static int8_t x378 = INT8_MIN;
	static uint16_t x379 = 0U;
	volatile int32_t t94 = -110178;

	t94 = ((x377|x378)&(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 5085253776294180LLU;
	static int64_t x382 = INT64_MAX;
	uint8_t x383 = UINT8_MAX;
	int8_t x384 = 0;
	volatile uint64_t t95 = 43201150LLU;

	t95 = ((x381|x382)&(x383&x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = UINT64_MAX;
	volatile int8_t x386 = 28;
	uint32_t x387 = 364718190U;
	int8_t x388 = INT8_MIN;
	volatile uint64_t t96 = 1371015727644LLU;

	t96 = ((x385|x386)&(x387&x388));

	if (t96 != 364718080LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x389 = INT8_MIN;
	uint32_t x390 = 6709305U;
	int8_t x391 = INT8_MAX;
	int32_t x392 = INT32_MIN;
	volatile uint32_t t97 = 3638U;

	t97 = ((x389|x390)&(x391&x392));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 42001U;
	int32_t x394 = INT32_MAX;
	static uint64_t x396 = UINT64_MAX;
	static volatile uint64_t t98 = 195LLU;

	t98 = ((x393|x394)&(x395&x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = 31U;
	static int16_t x398 = 3962;
	uint8_t x399 = 0U;
	int16_t x400 = -13;
	static volatile uint32_t t99 = 52U;

	t99 = ((x397|x398)&(x399&x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

