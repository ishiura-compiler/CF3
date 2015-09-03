#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x21 = 659U;
uint16_t x22 = UINT16_MAX;
volatile int8_t x25 = 1;
static uint64_t x26 = 3067LLU;
volatile uint64_t t4 = 7830720206843LLU;
int64_t x33 = 474124LL;
static int32_t x34 = INT32_MIN;
volatile uint32_t x39 = 633U;
int16_t x44 = INT16_MIN;
int16_t x45 = INT16_MIN;
static volatile uint32_t t9 = 1435U;
int64_t x56 = 87024415011LL;
uint8_t x59 = 0U;
static uint16_t x60 = UINT16_MAX;
uint32_t x63 = 80U;
uint8_t x65 = UINT8_MAX;
int32_t x66 = 60392;
uint16_t x82 = 352U;
volatile int8_t x83 = -1;
static uint8_t x85 = UINT8_MAX;
uint64_t t16 = 520271959982884LLU;
uint16_t x89 = 128U;
static int32_t x92 = INT32_MIN;
int16_t x96 = 3;
int16_t x107 = -1;
volatile uint64_t x109 = 6469273564936569049LLU;
volatile int16_t x113 = INT16_MAX;
int8_t x117 = INT8_MIN;
uint32_t t22 = 871U;
volatile uint32_t t23 = 566436U;
uint32_t x133 = 49051226U;
uint64_t t25 = 136LLU;
static int8_t x150 = -12;
uint64_t x151 = 240LLU;
int8_t x154 = 1;
int8_t x165 = INT8_MAX;
int8_t x167 = INT8_MIN;
volatile int32_t t31 = -22286;
uint64_t x172 = 114210789761983LLU;
static uint32_t x185 = 121207963U;
int64_t x186 = 4526520559303LL;
int8_t x188 = INT8_MIN;
int64_t t36 = -3453126LL;
static uint32_t x206 = 165157U;
volatile int16_t x210 = -1;
uint32_t t40 = 505U;
static uint64_t x218 = UINT64_MAX;
int64_t t43 = 245623216261LL;
int64_t x225 = -1216527288948434LL;
int64_t x226 = -10129LL;
int16_t x231 = INT16_MIN;
volatile int32_t t45 = 189978;
int32_t x237 = 1;
int8_t x239 = INT8_MIN;
uint16_t x246 = 5U;
volatile uint32_t x251 = UINT32_MAX;
static int32_t x254 = -1;
int32_t x260 = INT32_MAX;
int32_t x289 = -1;
int32_t x301 = 1306;
static volatile int32_t t57 = 259;
static int16_t x309 = INT16_MIN;
int64_t x311 = -1LL;
static uint64_t x324 = UINT64_MAX;
uint8_t x326 = UINT8_MAX;
uint16_t x334 = UINT16_MAX;
int8_t x340 = -7;
uint64_t t67 = 180LLU;
uint64_t x356 = UINT64_MAX;
static int16_t x381 = -1;
int32_t t74 = 65893;
volatile uint64_t t75 = 381LLU;
uint8_t x394 = UINT8_MAX;
static uint64_t t76 = 159323794548614LLU;
volatile int64_t x401 = -900536406339LL;
int64_t x410 = -1LL;
int8_t x412 = -1;
uint32_t x416 = 2602034U;
uint16_t x436 = 4724U;
volatile uint32_t t83 = 2U;
int64_t x444 = 1550034LL;
int8_t x460 = -1;
int64_t t85 = -4365995074LL;
int8_t x461 = -1;
int8_t x462 = INT8_MAX;
uint8_t x469 = 17U;
volatile int64_t t87 = -1835258257309218LL;
int64_t x486 = -1LL;
int64_t x488 = 3839LL;
static int16_t x493 = INT16_MIN;
volatile int16_t x510 = INT16_MAX;
volatile int16_t x512 = INT16_MIN;
int32_t t93 = -988475;
static int32_t x520 = INT32_MIN;
uint8_t x531 = 0U;
uint8_t x533 = UINT8_MAX;


void f0(void) {
	int32_t x5 = -7;
	uint16_t x6 = UINT16_MAX;
	uint16_t x7 = UINT16_MAX;
	int16_t x8 = 0;
	int32_t t0 = 1027770168;

	t0 = ((x5/x6)*(x7+x8));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -82572;
	int8_t x10 = INT8_MAX;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = UINT8_MAX;
	uint64_t t1 = 29LLU;

	t1 = ((x9/x10)*(x11+x12));

	if (t1 != 18446744073709386516LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = INT8_MIN;
	volatile int16_t x15 = INT16_MAX;
	static int64_t x16 = 15219998188LL;
	static volatile int64_t t2 = -314750289285526LL;

	t2 = ((x13/x14)*(x15+x16));

	if (t2 != 3896327924480LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x23 = 2U;
	static volatile int32_t x24 = -36027;
	int32_t t3 = 3221217;

	t3 = ((x21/x22)*(x23+x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x27 = 834547894U;
	int8_t x28 = INT8_MAX;

	t4 = ((x25/x26)*(x27+x28));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 2092680U;
	static uint64_t x30 = 50041886LLU;
	int8_t x31 = -1;
	uint8_t x32 = 3U;
	volatile uint64_t t5 = 6115206566447912022LLU;

	t5 = ((x29/x30)*(x31+x32));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x35 = 74752076LLU;
	uint64_t x36 = 283832LLU;
	static volatile uint64_t t6 = 292747117989393689LLU;

	t6 = ((x33/x34)*(x35+x36));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = UINT8_MAX;
	static volatile int64_t x40 = -1LL;
	volatile uint64_t t7 = 5631LLU;

	t7 = ((x37/x38)*(x39+x40));

	if (t7 != 8825501086245354104LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 733;
	int32_t x42 = -20197083;
	int8_t x43 = -1;
	int32_t t8 = -2775;

	t8 = ((x41/x42)*(x43+x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x46 = UINT32_MAX;
	int32_t x47 = INT32_MIN;
	static uint32_t x48 = UINT32_MAX;

	t9 = ((x45/x46)*(x47+x48));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	uint64_t x50 = 19052084620LLU;
	static int32_t x51 = INT32_MIN;
	int16_t x52 = 2;
	static volatile uint64_t t10 = 5222804008LLU;

	t10 = ((x49/x50)*(x51+x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 19U;
	int32_t x54 = -1004118162;
	int16_t x55 = INT16_MAX;
	volatile int64_t t11 = 6294308740968LL;

	t11 = ((x53/x54)*(x55+x56));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x57 = 417U;
	int32_t x58 = INT32_MIN;
	volatile uint32_t t12 = 63399U;

	t12 = ((x57/x58)*(x59+x60));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = 6126;
	int8_t x62 = INT8_MIN;
	uint32_t x64 = 383U;
	uint32_t t13 = 19403931U;

	t13 = ((x61/x62)*(x63+x64));

	if (t13 != 4294945535U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x67 = UINT32_MAX;
	uint32_t x68 = 3U;
	uint32_t t14 = 2U;

	t14 = ((x65/x66)*(x67+x68));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int64_t x81 = 966181478LL;
	static uint8_t x84 = 27U;
	int64_t t15 = 79685630668LL;

	t15 = ((x81/x82)*(x83+x84));

	if (t15 != 71365658LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x86 = INT64_MAX;
	uint64_t x87 = 1030566LLU;
	static int8_t x88 = -21;

	t16 = ((x85/x86)*(x87+x88));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x90 = INT64_MAX;
	volatile uint8_t x91 = UINT8_MAX;
	volatile int64_t t17 = -690793264162976LL;

	t17 = ((x89/x90)*(x91+x92));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = 84U;
	int8_t x94 = INT8_MIN;
	volatile int16_t x95 = -1;
	int32_t t18 = -1;

	t18 = ((x93/x94)*(x95+x96));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x105 = -1;
	volatile int8_t x106 = INT8_MIN;
	int8_t x108 = INT8_MAX;
	int32_t t19 = -4534940;

	t19 = ((x105/x106)*(x107+x108));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x110 = -3;
	int32_t x111 = -1;
	uint8_t x112 = UINT8_MAX;
	static volatile uint64_t t20 = 61LLU;

	t20 = ((x109/x110)*(x111+x112));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x114 = 69U;
	static int32_t x115 = -1;
	volatile uint16_t x116 = UINT16_MAX;
	volatile int32_t t21 = 5192;

	t21 = ((x113/x114)*(x115+x116));

	if (t21 != 31063116) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x118 = INT8_MIN;
	static uint32_t x119 = UINT32_MAX;
	int8_t x120 = 4;

	t22 = ((x117/x118)*(x119+x120));

	if (t22 != 3U) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x125 = INT32_MAX;
	int8_t x126 = INT8_MAX;
	uint32_t x127 = 26280U;
	int32_t x128 = INT32_MIN;

	t23 = ((x125/x126)*(x127+x128));

	if (t23 != 1995298112U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x129 = UINT32_MAX;
	int16_t x130 = -279;
	int16_t x131 = INT16_MIN;
	volatile int64_t x132 = 359199069089103LL;
	volatile int64_t t24 = 2134092145402236LL;

	t24 = ((x129/x130)*(x131+x132));

	if (t24 != 359199069056335LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x134 = 50978264330LLU;
	static uint32_t x135 = UINT32_MAX;
	int8_t x136 = -4;

	t25 = ((x133/x134)*(x135+x136));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x137 = 37;
	int8_t x138 = INT8_MIN;
	int8_t x139 = 40;
	volatile int32_t x140 = INT32_MIN;
	volatile int32_t t26 = 833;

	t26 = ((x137/x138)*(x139+x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = 12665;
	volatile uint64_t x142 = 111790LLU;
	static int16_t x143 = INT16_MIN;
	uint8_t x144 = 68U;
	static uint64_t t27 = 315LLU;

	t27 = ((x141/x142)*(x143+x144));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x145 = -1;
	int32_t x146 = INT32_MAX;
	uint32_t x147 = 713960229U;
	int8_t x148 = -1;
	uint32_t t28 = 19U;

	t28 = ((x145/x146)*(x147+x148));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	uint8_t x152 = UINT8_MAX;
	uint64_t t29 = 7853LLU;

	t29 = ((x149/x150)*(x151+x152));

	if (t29 != 88583700150LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x153 = -1;
	int8_t x155 = INT8_MIN;
	int8_t x156 = -1;
	volatile int32_t t30 = -104849;

	t30 = ((x153/x154)*(x155+x156));

	if (t30 != 129) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x166 = 3U;
	int8_t x168 = INT8_MIN;

	t31 = ((x165/x166)*(x167+x168));

	if (t31 != -10752) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 22886LLU;
	volatile int32_t x170 = 1;
	int32_t x171 = 112260538;
	uint64_t t32 = 669559479111511LLU;

	t32 = ((x169/x170)*(x171+x172));

	if (t32 != 2613830703687415606LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x177 = INT32_MAX;
	int64_t x178 = -1LL;
	uint8_t x179 = 88U;
	int16_t x180 = INT16_MIN;
	static volatile int64_t t33 = -245369364114LL;

	t33 = ((x177/x178)*(x179+x180));

	if (t33 != 70179765583960LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x181 = 2270575381048095LLU;
	uint64_t x182 = 188456029704136LLU;
	static uint64_t x183 = UINT64_MAX;
	int16_t x184 = 0;
	volatile uint64_t t34 = 0LLU;

	t34 = ((x181/x182)*(x183+x184));

	if (t34 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x187 = INT64_MAX;
	int64_t t35 = -11760LL;

	t35 = ((x185/x186)*(x187+x188));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x189 = 727U;
	uint32_t x190 = 566U;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = UINT32_MAX;

	t36 = ((x189/x190)*(x191+x192));

	if (t36 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x197 = -28;
	volatile int8_t x198 = -21;
	int64_t x199 = -1LL;
	static volatile int16_t x200 = 9750;
	static int64_t t37 = 792554957738095553LL;

	t37 = ((x197/x198)*(x199+x200));

	if (t37 != 9749LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = -1;
	volatile uint64_t x202 = UINT64_MAX;
	uint64_t x203 = 1517517023LLU;
	uint16_t x204 = UINT16_MAX;
	uint64_t t38 = 7138540259284LLU;

	t38 = ((x201/x202)*(x203+x204));

	if (t38 != 1517582558LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x205 = 4051U;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;
	uint32_t t39 = 313041U;

	t39 = ((x205/x206)*(x207+x208));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x209 = -1;
	uint16_t x211 = 6489U;
	uint32_t x212 = 10U;

	t40 = ((x209/x210)*(x211+x212));

	if (t40 != 6499U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x213 = -1;
	uint16_t x214 = UINT16_MAX;
	static int32_t x215 = INT32_MIN;
	volatile int32_t x216 = INT32_MAX;
	int32_t t41 = -110837328;

	t41 = ((x213/x214)*(x215+x216));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x217 = INT16_MAX;
	int32_t x219 = -9232454;
	volatile uint16_t x220 = UINT16_MAX;
	static uint64_t t42 = 108626806706386LLU;

	t42 = ((x217/x218)*(x219+x220));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = 0;
	int8_t x222 = INT8_MAX;
	int64_t x223 = INT64_MAX;
	volatile int8_t x224 = INT8_MIN;

	t43 = ((x221/x222)*(x223+x224));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x227 = -1;
	uint16_t x228 = 952U;
	volatile int64_t t44 = 32883272LL;

	t44 = ((x225/x226)*(x227+x228));

	if (t44 != 114218328738198LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = 1;
	int8_t x232 = -1;

	t45 = ((x229/x230)*(x231+x232));

	if (t45 != 1073774592) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x238 = -198440236700109975LL;
	uint16_t x240 = UINT16_MAX;
	volatile int64_t t46 = 510841273433270LL;

	t46 = ((x237/x238)*(x239+x240));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x241 = 854U;
	int16_t x242 = INT16_MIN;
	uint16_t x243 = 3501U;
	int64_t x244 = INT64_MIN;
	volatile int64_t t47 = 169735501LL;

	t47 = ((x241/x242)*(x243+x244));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x245 = INT64_MAX;
	int64_t x247 = INT64_MAX;
	uint64_t x248 = 119923164464627LLU;
	static uint64_t t48 = 2459569LLU;

	t48 = ((x245/x246)*(x247+x248));

	if (t48 != 1844602453472276386LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x249 = 497;
	uint64_t x250 = 9114LLU;
	uint32_t x252 = 89U;
	uint64_t t49 = 185879804861LLU;

	t49 = ((x249/x250)*(x251+x252));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x253 = INT8_MIN;
	int32_t x255 = INT32_MIN;
	static uint64_t x256 = UINT64_MAX;
	volatile uint64_t t50 = 220526405LLU;

	t50 = ((x253/x254)*(x255+x256));

	if (t50 != 18446743798831644544LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x257 = 460494LLU;
	volatile int16_t x258 = INT16_MIN;
	static uint64_t x259 = UINT64_MAX;
	uint64_t t51 = 1LLU;

	t51 = ((x257/x258)*(x259+x260));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x261 = 17U;
	static volatile uint8_t x262 = UINT8_MAX;
	int8_t x263 = 10;
	static int16_t x264 = INT16_MIN;
	int32_t t52 = 6312;

	t52 = ((x261/x262)*(x263+x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x265 = 15046916LLU;
	volatile int16_t x266 = -1;
	int16_t x267 = INT16_MIN;
	volatile int64_t x268 = INT64_MAX;
	uint64_t t53 = 383698957319602LLU;

	t53 = ((x265/x266)*(x267+x268));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MAX;
	int16_t x279 = INT16_MIN;
	int8_t x280 = -21;
	volatile int32_t t54 = 6488186;

	t54 = ((x277/x278)*(x279+x280));

	if (t54 != -32789) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x290 = INT8_MIN;
	uint16_t x291 = 5U;
	int64_t x292 = -1LL;
	volatile int64_t t55 = 13LL;

	t55 = ((x289/x290)*(x291+x292));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x297 = INT32_MAX;
	static uint16_t x298 = UINT16_MAX;
	int32_t x299 = -1;
	int8_t x300 = INT8_MIN;
	volatile int32_t t56 = 960729868;

	t56 = ((x297/x298)*(x299+x300));

	if (t56 != -4227072) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x302 = 8375;
	int16_t x303 = INT16_MIN;
	int16_t x304 = INT16_MAX;

	t57 = ((x301/x302)*(x303+x304));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x310 = 483864669295LL;
	int8_t x312 = 3;
	volatile int64_t t58 = 267157354203253LL;

	t58 = ((x309/x310)*(x311+x312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x313 = 30004778775LLU;
	volatile int32_t x314 = -290851;
	int8_t x315 = INT8_MAX;
	int64_t x316 = -1LL;
	static uint64_t t59 = 86847105804LLU;

	t59 = ((x313/x314)*(x315+x316));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = -19;
	uint64_t x319 = UINT64_MAX;
	int32_t x320 = INT32_MIN;
	volatile uint64_t t60 = 3LLU;

	t60 = ((x317/x318)*(x319+x320));

	if (t60 != 18446744060824649722LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x321 = 1039416931LL;
	uint16_t x322 = UINT16_MAX;
	int64_t x323 = -1088428034918LL;
	volatile uint64_t t61 = 8390779LLU;

	t61 = ((x321/x322)*(x323+x324));

	if (t61 != 18429481605075736276LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x325 = 39LLU;
	int64_t x327 = -7736620228LL;
	static volatile uint64_t x328 = UINT64_MAX;
	uint64_t t62 = 23877326LLU;

	t62 = ((x325/x326)*(x327+x328));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x329 = 1U;
	uint64_t x330 = 35778855770226792LLU;
	uint64_t x331 = 1LLU;
	volatile int8_t x332 = 7;
	static uint64_t t63 = 94008666543307386LLU;

	t63 = ((x329/x330)*(x331+x332));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x333 = 21U;
	static int64_t x335 = INT64_MAX;
	int32_t x336 = -1;
	static int64_t t64 = 5259399581016638LL;

	t64 = ((x333/x334)*(x335+x336));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x337 = 1U;
	static int32_t x338 = -1;
	uint16_t x339 = UINT16_MAX;
	volatile int32_t t65 = -230;

	t65 = ((x337/x338)*(x339+x340));

	if (t65 != -65528) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x341 = -1LL;
	volatile int16_t x342 = INT16_MIN;
	uint8_t x343 = 1U;
	uint32_t x344 = 0U;
	int64_t t66 = 76066130754154898LL;

	t66 = ((x341/x342)*(x343+x344));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x345 = INT32_MIN;
	uint32_t x346 = 356111891U;
	int64_t x347 = INT64_MAX;
	uint64_t x348 = 4LLU;

	t67 = ((x345/x346)*(x347+x348));

	if (t67 != 18LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x349 = -32226599142392LL;
	uint32_t x350 = 825864U;
	int8_t x351 = INT8_MIN;
	static uint32_t x352 = UINT32_MAX;
	volatile int64_t t68 = -405550293393388LL;

	t68 = ((x349/x350)*(x351+x352));

	if (t68 != -167596825811246226LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x353 = -1;
	static int64_t x354 = -23223LL;
	int16_t x355 = INT16_MIN;
	volatile uint64_t t69 = 3332620186858315LLU;

	t69 = ((x353/x354)*(x355+x356));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int32_t x362 = INT32_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	static uint16_t x364 = UINT16_MAX;
	static volatile uint64_t t70 = 104LLU;

	t70 = ((x361/x362)*(x363+x364));

	if (t70 != 65534LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x365 = -1LL;
	uint64_t x366 = UINT64_MAX;
	uint32_t x367 = 796703641U;
	volatile int16_t x368 = -1;
	uint64_t t71 = 123LLU;

	t71 = ((x365/x366)*(x367+x368));

	if (t71 != 796703640LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x369 = 490828423;
	int64_t x370 = INT64_MIN;
	static uint32_t x371 = UINT32_MAX;
	static volatile int32_t x372 = 832007392;
	volatile int64_t t72 = -178874LL;

	t72 = ((x369/x370)*(x371+x372));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x373 = 68466672147827LLU;
	volatile int16_t x374 = 141;
	volatile int16_t x375 = INT16_MAX;
	int16_t x376 = -7;
	volatile uint64_t t73 = 44351LLU;

	t73 = ((x373/x374)*(x375+x376));

	if (t73 != 15907575741548400LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x382 = -31;
	uint16_t x383 = 1U;
	static int8_t x384 = INT8_MIN;

	t74 = ((x381/x382)*(x383+x384));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x385 = INT64_MIN;
	static uint64_t x386 = 2034050490219446LLU;
	static volatile uint32_t x387 = 15694053U;
	static int64_t x388 = INT64_MIN;

	t75 = ((x385/x386)*(x387+x388));

	if (t75 != 71156836302LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x393 = 4U;
	int32_t x395 = -1;
	uint64_t x396 = 13106185LLU;

	t76 = ((x393/x394)*(x395+x396));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x402 = INT64_MAX;
	static uint8_t x403 = 90U;
	static int64_t x404 = 1676696858478LL;
	int64_t t77 = -28538114LL;

	t77 = ((x401/x402)*(x403+x404));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x405 = 1;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MIN;
	int8_t x408 = INT8_MIN;
	volatile int32_t t78 = -1599133;

	t78 = ((x405/x406)*(x407+x408));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x409 = 28511U;
	uint16_t x411 = 0U;
	volatile int64_t t79 = -248LL;

	t79 = ((x409/x410)*(x411+x412));

	if (t79 != 28511LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x413 = 90236528512063LLU;
	int32_t x414 = 368252312;
	volatile int32_t x415 = -256506289;
	volatile uint64_t t80 = 809892124LLU;

	t80 = ((x413/x414)*(x415+x416));

	if (t80 != 990218046503599LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x417 = -1;
	int64_t x418 = -1LL;
	int8_t x419 = INT8_MIN;
	volatile uint64_t x420 = UINT64_MAX;
	uint64_t t81 = 1739701191LLU;

	t81 = ((x417/x418)*(x419+x420));

	if (t81 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x421 = INT16_MIN;
	uint32_t x422 = 1405U;
	uint32_t x423 = 10368U;
	int32_t x424 = INT32_MIN;
	volatile uint32_t t82 = 1U;

	t82 = ((x421/x422)*(x423+x424));

	if (t82 != 1629085184U) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MIN;
	uint32_t x435 = UINT32_MAX;

	t83 = ((x433/x434)*(x435+x436));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x441 = INT8_MAX;
	volatile int64_t x442 = -1LL;
	int8_t x443 = INT8_MIN;
	int64_t t84 = -772372918661237215LL;

	t84 = ((x441/x442)*(x443+x444));

	if (t84 != -196838062LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x457 = UINT32_MAX;
	int64_t x458 = -1LL;
	int32_t x459 = -1964917;

	t85 = ((x457/x458)*(x459+x460));

	if (t85 != 8439258547356810LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x463 = UINT16_MAX;
	volatile uint32_t x464 = 3U;
	uint32_t t86 = 24U;

	t86 = ((x461/x462)*(x463+x464));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x470 = INT64_MIN;
	int64_t x471 = -2290784576308793LL;
	uint8_t x472 = UINT8_MAX;

	t87 = ((x469/x470)*(x471+x472));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x485 = UINT16_MAX;
	int16_t x487 = INT16_MAX;
	volatile int64_t t88 = 135983241LL;

	t88 = ((x485/x486)*(x487+x488));

	if (t88 != -2398974210LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x489 = UINT64_MAX;
	static int8_t x490 = INT8_MAX;
	volatile int32_t x491 = INT32_MAX;
	int16_t x492 = -3443;
	uint64_t t89 = 1104485859622183LLU;

	t89 = ((x489/x490)*(x491+x492));

	if (t89 != 17429994400321663256LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x494 = 31U;
	uint64_t x495 = 9019397865013852094LLU;
	int8_t x496 = 31;
	volatile uint64_t t90 = 44656487785909347LLU;

	t90 = ((x493/x494)*(x495+x496));

	if (t90 != 3463142788196489347LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x497 = -212283119;
	int16_t x498 = 7794;
	volatile uint16_t x499 = UINT16_MAX;
	uint32_t x500 = UINT32_MAX;
	volatile uint32_t t91 = 84U;

	t91 = ((x497/x498)*(x499+x500));

	if (t91 != 2510083272U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x505 = -1;
	int16_t x506 = INT16_MIN;
	volatile int64_t x507 = 1LL;
	static uint32_t x508 = UINT32_MAX;
	volatile int64_t t92 = 5380LL;

	t92 = ((x505/x506)*(x507+x508));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x509 = 66U;
	int8_t x511 = INT8_MIN;

	t93 = ((x509/x510)*(x511+x512));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x513 = 4525;
	static int64_t x514 = -1LL;
	uint32_t x515 = 215765880U;
	volatile int8_t x516 = 1;
	static volatile int64_t t94 = -1LL;

	t94 = ((x513/x514)*(x515+x516));

	if (t94 != -976340611525LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x517 = -1LL;
	volatile uint16_t x518 = 962U;
	volatile uint8_t x519 = UINT8_MAX;
	int64_t t95 = 871LL;

	t95 = ((x517/x518)*(x519+x520));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x521 = 3U;
	int64_t x522 = -1LL;
	static int16_t x523 = -1;
	static int8_t x524 = -1;
	volatile int64_t t96 = 266705LL;

	t96 = ((x521/x522)*(x523+x524));

	if (t96 != 6LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x529 = UINT16_MAX;
	volatile uint16_t x530 = 112U;
	int16_t x532 = -1;
	int32_t t97 = -7748533;

	t97 = ((x529/x530)*(x531+x532));

	if (t97 != -585) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x534 = -13284;
	volatile uint8_t x535 = 0U;
	int8_t x536 = INT8_MIN;
	volatile int32_t t98 = 54755;

	t98 = ((x533/x534)*(x535+x536));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x545 = UINT64_MAX;
	volatile int64_t x546 = -47876LL;
	uint8_t x547 = 1U;
	uint32_t x548 = UINT32_MAX;
	volatile uint64_t t99 = 382071LLU;

	t99 = ((x545/x546)*(x547+x548));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

