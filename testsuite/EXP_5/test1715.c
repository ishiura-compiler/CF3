#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x5 = UINT8_MAX;
uint32_t t1 = 987U;
volatile int16_t x20 = INT16_MAX;
volatile uint64_t x24 = UINT64_MAX;
volatile int64_t t4 = 12120569079264LL;
int16_t x29 = INT16_MIN;
static volatile uint64_t t5 = 7035943LLU;
int32_t x34 = INT32_MIN;
int64_t t6 = -1879095846962805649LL;
int64_t x39 = 8169095339285LL;
static int8_t x46 = INT8_MIN;
uint16_t x54 = 2U;
int8_t x55 = -1;
int16_t x61 = INT16_MAX;
int8_t x63 = INT8_MIN;
int32_t t13 = 137771;
uint32_t x71 = UINT32_MAX;
int64_t t16 = -43511001250LL;
volatile int16_t x82 = -3277;
volatile int16_t x92 = -8;
uint32_t x93 = 0U;
static volatile uint64_t t19 = 5LLU;
int16_t x97 = INT16_MAX;
int64_t x103 = INT64_MIN;
static int8_t x106 = INT8_MAX;
int64_t x118 = INT64_MAX;
int16_t x124 = -76;
int64_t x127 = -1042818034585128LL;
int32_t x130 = INT32_MAX;
int64_t x143 = INT64_MIN;
volatile int64_t t30 = INT64_MAX;
static int32_t x151 = INT32_MAX;
volatile uint32_t x152 = 20588U;
static volatile uint64_t t31 = 1720925341LLU;
volatile uint32_t t32 = UINT32_MAX;
int16_t x158 = INT16_MIN;
volatile int32_t x160 = -61;
static int64_t x167 = -1LL;
int32_t x172 = -3;
volatile uint8_t x174 = 3U;
volatile int64_t t36 = 1430791817215914LL;
uint32_t x177 = 7U;
volatile int32_t x184 = 56;
static volatile int64_t x185 = INT64_MIN;
static volatile int64_t t39 = 48372443745LL;
volatile int8_t x194 = 22;
int32_t x196 = INT32_MAX;
uint64_t x199 = 667362105445911LLU;
volatile uint64_t t42 = UINT64_MAX;
int32_t x201 = INT32_MAX;
uint8_t x208 = 39U;
volatile uint32_t t44 = UINT32_MAX;
int16_t x212 = -3;
int32_t x213 = INT32_MIN;
uint16_t x231 = 55U;
int8_t x233 = 32;
uint32_t x236 = 535928207U;
uint32_t t50 = 367U;
volatile uint16_t x244 = 218U;
int64_t t52 = -243005366238642LL;
static uint8_t x246 = 83U;
static volatile int64_t t53 = 26906212850920LL;
static volatile int64_t t54 = -2LL;
int16_t x258 = INT16_MIN;
uint32_t x268 = UINT32_MAX;
static int16_t x269 = -1;
int8_t x270 = -11;
int64_t x273 = -1LL;
int8_t x276 = INT8_MIN;
static uint16_t x279 = 454U;
uint64_t x282 = 5LLU;
uint16_t x284 = 16U;
volatile uint64_t t61 = 29311539745782LLU;
static int32_t x286 = -1;
int16_t x296 = 3;
static volatile int16_t x302 = INT16_MAX;
int16_t x307 = -2105;
volatile int32_t x324 = INT32_MAX;
int32_t t69 = -82;
int32_t x326 = INT32_MIN;
static uint8_t x327 = 0U;
int64_t t70 = INT64_MAX;
volatile uint32_t x329 = UINT32_MAX;
uint64_t x331 = 140LLU;
uint32_t x334 = 53082U;
int8_t x338 = -1;
uint16_t x340 = UINT16_MAX;
int32_t t73 = -31;
uint8_t x342 = UINT8_MAX;
static volatile int64_t x343 = -273322121477LL;
static int32_t x345 = -1;
volatile int64_t t75 = -196736LL;
int64_t x352 = -853235209261123368LL;
volatile int64_t t76 = -6LL;
volatile uint8_t x353 = 2U;
static uint16_t x361 = 2U;
uint16_t x364 = 508U;
int32_t x368 = INT32_MAX;
int32_t x369 = -109;
int16_t x380 = INT16_MAX;
int16_t x389 = -1;
uint16_t x391 = 1U;
int32_t x396 = -2615;
int16_t x403 = 10342;
volatile int16_t x404 = INT16_MIN;
uint64_t x407 = UINT64_MAX;
static uint64_t t87 = UINT64_MAX;
static int8_t x415 = INT8_MIN;
static uint64_t t90 = 1261795643LLU;
int32_t x423 = INT32_MIN;
int8_t x425 = INT8_MIN;
uint16_t x430 = 55U;
static uint64_t t93 = UINT64_MAX;
int64_t x442 = -361025313484428032LL;
int64_t x444 = 6327148550163703LL;
int64_t t95 = 128LL;
int8_t x445 = -1;
int32_t x447 = INT32_MIN;
static int8_t x450 = -1;


void f0(void) {
	static int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	int32_t x8 = -1;
	volatile int64_t t0 = 332427LL;

	t0 = (x5|((x6&x7)-x8));

	if (t0 != 255LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MIN;
	volatile int8_t x10 = -1;
	uint32_t x11 = UINT32_MAX;
	volatile uint16_t x12 = UINT16_MAX;

	t1 = (x9|((x10&x11)-x12));

	if (t1 != 4294901760U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x17 = -1;
	int8_t x18 = 10;
	int64_t x19 = INT64_MAX;
	volatile int64_t t2 = 7934LL;

	t2 = (x17|((x18&x19)-x20));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = -6829;
	int16_t x22 = -1;
	uint16_t x23 = 71U;
	uint64_t t3 = 53253738LLU;

	t3 = (x21|((x22&x23)-x24));

	if (t3 != 18446744073709544795LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = -79454LL;
	int8_t x26 = 1;
	static volatile int16_t x27 = 4;
	int8_t x28 = -1;

	t4 = (x25|((x26&x27)-x28));

	if (t4 != -79453LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x30 = 6414507386601141LLU;
	int64_t x31 = INT64_MAX;
	static int64_t x32 = INT64_MIN;

	t5 = (x29|((x30&x31)-x32));

	if (t5 != 18446744073709551285LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x33 = INT8_MAX;
	static int64_t x35 = INT64_MAX;
	int32_t x36 = -1;

	t6 = (x33|((x34&x35)-x36));

	if (t6 != 9223372034707292287LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x37 = 0U;
	static int64_t x38 = -212204269LL;
	static uint8_t x40 = UINT8_MAX;
	volatile int64_t t7 = 1LL;

	t7 = (x37|((x38&x39)-x40));

	if (t7 != 8169027929106LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = 14757;
	int32_t x42 = INT32_MAX;
	int16_t x43 = INT16_MIN;
	volatile int64_t x44 = -1LL;
	volatile int64_t t8 = 109677LL;

	t8 = (x41|((x42&x43)-x44));

	if (t8 != 2147465637LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	volatile int8_t x47 = INT8_MAX;
	int32_t x48 = -2114268;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x45|((x46&x47)-x48));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x49 = 1372LLU;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -1LL;
	uint8_t x52 = 11U;
	uint64_t t10 = 57LLU;

	t10 = (x49|((x50&x51)-x52));

	if (t10 != 18446744073709518845LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = -1;
	static volatile uint64_t x56 = 975358832LLU;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x53|((x54&x55)-x56));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MAX;
	static uint8_t x59 = 2U;
	volatile int16_t x60 = INT16_MIN;
	static int64_t t12 = -237936278LL;

	t12 = (x57|((x58&x59)-x60));

	if (t12 != 32895LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x62 = -1;
	uint16_t x64 = 1U;

	t13 = (x61|((x62&x63)-x64));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x65 = 0U;
	uint64_t x66 = 15209539420LLU;
	int8_t x67 = -1;
	static volatile int64_t x68 = INT64_MIN;
	uint64_t t14 = 66881717LLU;

	t14 = (x65|((x66&x67)-x68));

	if (t14 != 9223372052064315228LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MAX;
	int64_t x72 = 1LL;
	static volatile int64_t t15 = 1495952785402098413LL;

	t15 = (x69|((x70&x71)-x72));

	if (t15 != -2LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x77 = 525U;
	int64_t x78 = INT64_MIN;
	uint16_t x79 = 37U;
	int64_t x80 = -1LL;

	t16 = (x77|((x78&x79)-x80));

	if (t16 != 525LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x81 = 0U;
	uint32_t x83 = UINT32_MAX;
	uint16_t x84 = 5284U;
	uint32_t t17 = 5U;

	t17 = (x81|((x82&x83)-x84));

	if (t17 != 4294958735U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MAX;
	static int32_t x90 = INT32_MIN;
	static volatile int16_t x91 = 1;
	int32_t t18 = -2851;

	t18 = (x89|((x90&x91)-x92));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x94 = 39608LLU;
	int32_t x95 = -53652;
	volatile uint8_t x96 = 11U;

	t19 = (x93|((x94&x95)-x96));

	if (t19 != 2589LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x98 = UINT16_MAX;
	int16_t x99 = INT16_MIN;
	static volatile uint16_t x100 = UINT16_MAX;
	volatile int32_t t20 = 868766;

	t20 = (x97|((x98&x99)-x100));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 245U;
	int32_t x102 = INT32_MIN;
	int8_t x104 = INT8_MIN;
	volatile int64_t t21 = -464LL;

	t21 = (x101|((x102&x103)-x104));

	if (t21 != -9223372036854775563LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x105 = 4313161LLU;
	uint64_t x107 = UINT64_MAX;
	static uint32_t x108 = UINT32_MAX;
	volatile uint64_t t22 = 2999856572939603LLU;

	t22 = (x105|((x106&x107)-x108));

	if (t22 != 18446744069418897609LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x113 = UINT8_MAX;
	uint32_t x114 = UINT32_MAX;
	int32_t x115 = 14820926;
	volatile int64_t x116 = -42326LL;
	int64_t t23 = -187616184137LL;

	t23 = (x113|((x114&x115)-x116));

	if (t23 != 14863359LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 0U;
	static int16_t x119 = INT16_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	volatile uint64_t t24 = 222136LLU;

	t24 = (x117|((x118&x119)-x120));

	if (t24 != 32768LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = 282293432729629731LLU;
	int16_t x122 = -1;
	uint8_t x123 = 32U;
	static volatile uint64_t t25 = 221104745263774017LLU;

	t25 = (x121|((x122&x123)-x124));

	if (t25 != 282293432729629807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 494U;
	int8_t x126 = INT8_MIN;
	int8_t x128 = -7;
	volatile int64_t t26 = 1LL;

	t26 = (x125|((x126&x127)-x128));

	if (t26 != -1042818034585105LL) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x129 = UINT8_MAX;
	uint8_t x131 = 0U;
	uint64_t x132 = UINT64_MAX;
	uint64_t t27 = 3397727367264LLU;

	t27 = (x129|((x130&x131)-x132));

	if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -3000237900582896634LL;
	uint8_t x134 = 5U;
	uint64_t x135 = 44730357LLU;
	int64_t x136 = INT64_MIN;
	volatile uint64_t t28 = 13280044712LLU;

	t28 = (x133|((x134&x135)-x136));

	if (t28 != 15446506173126654983LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 887653U;
	static int8_t x142 = INT8_MAX;
	static int8_t x144 = INT8_MIN;
	static volatile int64_t t29 = -3283904690LL;

	t29 = (x141|((x142&x143)-x144));

	if (t29 != 887781LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = INT64_MAX;
	int64_t x146 = -1LL;
	static uint16_t x147 = 5U;
	int32_t x148 = 0;

	t30 = (x145|((x146&x147)-x148));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x149 = INT8_MAX;
	volatile uint64_t x150 = UINT64_MAX;

	t31 = (x149|((x150&x151)-x152));

	if (t31 != 2147463167LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x153 = -1;
	uint32_t x154 = 6034264U;
	uint8_t x155 = UINT8_MAX;
	int8_t x156 = 53;

	t32 = (x153|((x154&x155)-x156));

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x157 = 1;
	int32_t x159 = -1;
	int32_t t33 = 1;

	t33 = (x157|((x158&x159)-x160));

	if (t33 != -32707) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int64_t x166 = -1LL;
	int64_t x168 = 726507347602LL;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (x165|((x166&x167)-x168));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x169 = INT32_MIN;
	uint64_t x170 = 2082120176736678LLU;
	volatile uint32_t x171 = 9U;
	volatile uint64_t t35 = 13LLU;

	t35 = (x169|((x170&x171)-x172));

	if (t35 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = 6485;
	int64_t x175 = INT64_MIN;
	int16_t x176 = INT16_MIN;

	t36 = (x173|((x174&x175)-x176));

	if (t36 != 39253LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x178 = 616;
	int32_t x179 = -1;
	volatile int8_t x180 = INT8_MAX;
	uint32_t t37 = 309360859U;

	t37 = (x177|((x178&x179)-x180));

	if (t37 != 495U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -1LL;
	volatile uint8_t x183 = 3U;
	int64_t t38 = -62268121597LL;

	t38 = (x181|((x182&x183)-x184));

	if (t38 != -53LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x186 = 37U;
	static int8_t x187 = -61;
	static int32_t x188 = 531218;

	t39 = (x185|((x186&x187)-x188));

	if (t39 != -531217LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = UINT64_MAX;
	volatile uint8_t x190 = UINT8_MAX;
	int16_t x191 = 307;
	int64_t x192 = INT64_MAX;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = (x189|((x190&x191)-x192));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x193 = -1;
	volatile int16_t x195 = 119;
	static int32_t t41 = -1;

	t41 = (x193|((x194&x195)-x196));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x197 = -1;
	volatile int32_t x198 = INT32_MIN;
	int16_t x200 = INT16_MIN;

	t42 = (x197|((x198&x199)-x200));

	if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x202 = 5;
	volatile int16_t x203 = INT16_MAX;
	static int8_t x204 = INT8_MIN;
	static volatile int32_t t43 = INT32_MAX;

	t43 = (x201|((x202&x203)-x204));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x205 = UINT32_MAX;
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = -15600;

	t44 = (x205|((x206&x207)-x208));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x209 = INT16_MIN;
	uint8_t x210 = 1U;
	int64_t x211 = INT64_MIN;
	int64_t t45 = 203LL;

	t45 = (x209|((x210&x211)-x212));

	if (t45 != -32765LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x214 = 2216U;
	volatile int64_t x215 = 0LL;
	uint8_t x216 = UINT8_MAX;
	volatile int64_t t46 = -9711LL;

	t46 = (x213|((x214&x215)-x216));

	if (t46 != -255LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = -1;
	int32_t x218 = INT32_MIN;
	int8_t x219 = INT8_MAX;
	uint8_t x220 = 1U;
	int32_t t47 = 5254573;

	t47 = (x217|((x218&x219)-x220));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = 10LL;
	int64_t x222 = INT64_MIN;
	static int8_t x223 = -1;
	uint64_t x224 = UINT64_MAX;
	uint64_t t48 = 262646582LLU;

	t48 = (x221|((x222&x223)-x224));

	if (t48 != 9223372036854775819LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MIN;
	static volatile int64_t x230 = INT64_MIN;
	int8_t x232 = INT8_MIN;
	volatile int64_t t49 = 1297479557LL;

	t49 = (x229|((x230&x231)-x232));

	if (t49 != -32640LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x234 = UINT32_MAX;
	volatile int32_t x235 = -2;

	t50 = (x233|((x234&x235)-x236));

	if (t50 != 3759039087U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x237 = -4;
	volatile uint32_t x238 = UINT32_MAX;
	int32_t x239 = 2;
	volatile int32_t x240 = -62;
	uint32_t t51 = 899U;

	t51 = (x237|((x238&x239)-x240));

	if (t51 != 4294967292U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -1LL;
	static int16_t x242 = 4;
	int16_t x243 = INT16_MIN;

	t52 = (x241|((x242&x243)-x244));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x245 = -1;
	int8_t x247 = 12;
	int64_t x248 = -15190LL;

	t53 = (x245|((x246&x247)-x248));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = INT64_MAX;
	int8_t x251 = 0;
	uint32_t x252 = 5821U;

	t54 = (x249|((x250&x251)-x252));

	if (t54 != -1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x253 = -1;
	int64_t x254 = INT64_MIN;
	static int32_t x255 = 725586;
	volatile int32_t x256 = INT32_MIN;
	volatile int64_t t55 = -234LL;

	t55 = (x253|((x254&x255)-x256));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x257 = 1084821602065864LL;
	static uint64_t x259 = UINT64_MAX;
	int32_t x260 = INT32_MIN;
	volatile uint64_t t56 = 918877144LLU;

	t56 = (x257|((x258&x259)-x260));

	if (t56 != 1084822839614920LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = INT64_MIN;
	int16_t x266 = INT16_MIN;
	int8_t x267 = -50;
	volatile int64_t t57 = 20085711439LL;

	t57 = (x265|((x266&x267)-x268));

	if (t57 != -9223372032559841279LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x271 = INT32_MIN;
	uint32_t x272 = 342396915U;
	uint32_t t58 = UINT32_MAX;

	t58 = (x269|((x270&x271)-x272));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x274 = INT32_MIN;
	volatile uint8_t x275 = 9U;
	static volatile int64_t t59 = -1014631697868992769LL;

	t59 = (x273|((x274&x275)-x276));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x277 = INT64_MIN;
	int32_t x278 = INT32_MIN;
	int32_t x280 = -14497134;
	static int64_t t60 = -2039473603875LL;

	t60 = (x277|((x278&x279)-x280));

	if (t60 != -9223372036840278674LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = INT16_MIN;
	int8_t x283 = -1;

	t61 = (x281|((x282&x283)-x284));

	if (t61 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x285 = -28;
	int64_t x287 = 1LL;
	int32_t x288 = INT32_MAX;
	static volatile int64_t t62 = 180895879993LL;

	t62 = (x285|((x286&x287)-x288));

	if (t62 != -26LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x293 = 8U;
	int8_t x294 = -12;
	static int64_t x295 = 299276973682LL;
	volatile int64_t t63 = 62643136LL;

	t63 = (x293|((x294&x295)-x296));

	if (t63 != 299276973677LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x297 = 18;
	uint32_t x298 = 65U;
	int8_t x299 = -21;
	uint64_t x300 = 43LLU;
	static volatile uint64_t t64 = 936950956285126188LLU;

	t64 = (x297|((x298&x299)-x300));

	if (t64 != 22LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = INT64_MAX;
	int16_t x303 = -1;
	int64_t x304 = -1LL;
	volatile int64_t t65 = INT64_MAX;

	t65 = (x301|((x302&x303)-x304));

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x305 = -1586;
	uint64_t x306 = UINT64_MAX;
	int16_t x308 = INT16_MIN;
	static volatile uint64_t t66 = 38758420842636LLU;

	t66 = (x305|((x306&x307)-x308));

	if (t66 != 18446744073709551567LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x313 = UINT16_MAX;
	static int8_t x314 = INT8_MIN;
	int64_t x315 = 385866275852902230LL;
	int8_t x316 = -4;
	int64_t t67 = 9685LL;

	t67 = (x313|((x314&x315)-x316));

	if (t67 != 385866275852910591LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x317 = 34U;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	int64_t x320 = INT64_MIN;
	int64_t t68 = -17731962375498296LL;

	t68 = (x317|((x318&x319)-x320));

	if (t68 != 9223372036854743074LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;

	t69 = (x321|((x322&x323)-x324));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x325 = INT64_MAX;
	volatile int16_t x328 = INT16_MIN;

	t70 = (x325|((x326&x327)-x328));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x330 = INT64_MIN;
	uint32_t x332 = 206690807U;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = (x329|((x330&x331)-x332));

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x333 = -1LL;
	volatile int32_t x335 = -112;
	int8_t x336 = INT8_MIN;
	int64_t t72 = 4038033LL;

	t72 = (x333|((x334&x335)-x336));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x337 = UINT16_MAX;
	volatile int16_t x339 = INT16_MIN;

	t73 = (x337|((x338&x339)-x340));

	if (t73 != -65537) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x341 = 0;
	volatile uint32_t x344 = UINT32_MAX;
	volatile int64_t t74 = 1883114857182LL;

	t74 = (x341|((x342&x343)-x344));

	if (t74 != -4294967044LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x346 = 12U;
	uint32_t x347 = 0U;
	int64_t x348 = -7669005345478LL;

	t75 = (x345|((x346&x347)-x348));

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x349 = INT16_MIN;
	static volatile int8_t x350 = 4;
	int8_t x351 = -1;

	t76 = (x349|((x350&x351)-x352));

	if (t76 != -30932LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x354 = UINT8_MAX;
	volatile uint64_t x355 = 1529103348343LLU;
	static uint32_t x356 = UINT32_MAX;
	volatile uint64_t t77 = 35LLU;

	t77 = (x353|((x354&x355)-x356));

	if (t77 != 18446744069414584442LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x357 = INT32_MAX;
	int64_t x358 = 3611622910390346LL;
	int32_t x359 = -147187;
	uint8_t x360 = 4U;
	volatile int64_t t78 = 3681721849963956032LL;

	t78 = (x357|((x358&x359)-x360));

	if (t78 != 3611622966820863LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x362 = 0;
	int64_t x363 = 4040462164783LL;
	volatile int64_t t79 = 1274947508751010LL;

	t79 = (x361|((x362&x363)-x364));

	if (t79 != -506LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x365 = 2537613584681LL;
	int32_t x366 = 3550771;
	static uint8_t x367 = 3U;
	int64_t t80 = 24LL;

	t80 = (x365|((x366&x367)-x368));

	if (t80 != -712087251LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x370 = INT8_MAX;
	int64_t x371 = INT64_MIN;
	uint16_t x372 = UINT16_MAX;
	int64_t t81 = -179442444100LL;

	t81 = (x369|((x370&x371)-x372));

	if (t81 != -109LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 6480U;
	uint32_t x378 = 712757U;
	static int32_t x379 = -278907145;
	volatile uint32_t t82 = 1623561776U;

	t82 = (x377|((x378&x379)-x380));

	if (t82 != 4294949238U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x385 = -1;
	static volatile int64_t x386 = -1LL;
	uint16_t x387 = 2216U;
	volatile int32_t x388 = INT32_MAX;
	volatile int64_t t83 = -64262885LL;

	t83 = (x385|((x386&x387)-x388));

	if (t83 != -1LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x390 = -1LL;
	uint32_t x392 = 148U;
	int64_t t84 = -126351790LL;

	t84 = (x389|((x390&x391)-x392));

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = UINT64_MAX;
	uint16_t x394 = 12U;
	int8_t x395 = INT8_MIN;
	static volatile uint64_t t85 = UINT64_MAX;

	t85 = (x393|((x394&x395)-x396));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 0U;
	int32_t x402 = INT32_MIN;
	int32_t t86 = 32;

	t86 = (x401|((x402&x403)-x404));

	if (t86 != 32768) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x405 = -1;
	uint16_t x406 = 29981U;
	static int64_t x408 = INT64_MAX;

	t87 = (x405|((x406&x407)-x408));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x409 = -4385;
	uint16_t x410 = UINT16_MAX;
	static int64_t x411 = INT64_MIN;
	uint8_t x412 = UINT8_MAX;
	int64_t t88 = -769LL;

	t88 = (x409|((x410&x411)-x412));

	if (t88 != -33LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x413 = 7U;
	volatile int16_t x414 = INT16_MAX;
	uint16_t x416 = UINT16_MAX;
	int32_t t89 = -1;

	t89 = (x413|((x414&x415)-x416));

	if (t89 != -32889) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x417 = INT16_MIN;
	static uint64_t x418 = UINT64_MAX;
	uint8_t x419 = 11U;
	volatile uint8_t x420 = UINT8_MAX;

	t90 = (x417|((x418&x419)-x420));

	if (t90 != 18446744073709551372LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x421 = 780948U;
	static int16_t x422 = INT16_MAX;
	volatile uint16_t x424 = 11U;
	volatile uint32_t t91 = 3215450U;

	t91 = (x421|((x422&x423)-x424));

	if (t91 != 4294967285U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x426 = -10416095;
	int32_t x427 = INT32_MIN;
	int8_t x428 = INT8_MIN;
	volatile int32_t t92 = -171652689;

	t92 = (x425|((x426&x427)-x428));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x429 = -1;
	volatile uint64_t x431 = 142966466715675LLU;
	uint64_t x432 = 1620135LLU;

	t93 = (x429|((x430&x431)-x432));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x433 = INT16_MIN;
	uint8_t x434 = 1U;
	int16_t x435 = -1;
	int16_t x436 = INT16_MIN;
	static int32_t t94 = -178821;

	t94 = (x433|((x434&x435)-x436));

	if (t94 != -32767) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x441 = -1;
	int64_t x443 = INT64_MAX;

	t95 = (x441|((x442&x443)-x444));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x446 = 0;
	int16_t x448 = INT16_MIN;
	volatile int32_t t96 = 7;

	t96 = (x445|((x446&x447)-x448));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x449 = -1;
	uint8_t x451 = 47U;
	uint16_t x452 = UINT16_MAX;
	volatile int32_t t97 = 511;

	t97 = (x449|((x450&x451)-x452));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x453 = INT16_MAX;
	uint64_t x454 = 5342946263963456LLU;
	static volatile int32_t x455 = INT32_MAX;
	int64_t x456 = 665293353407408540LL;
	volatile uint64_t t98 = 2478217245605LLU;

	t98 = (x453|((x454&x455)-x456));

	if (t98 != 17781450720807452671LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x457 = 11U;
	static volatile int64_t x458 = -380LL;
	int64_t x459 = -462882LL;
	uint64_t x460 = 1506939723LLU;
	static volatile uint64_t t99 = 22118LLU;

	t99 = (x457|((x458&x459)-x460));

	if (t99 != 18446744072202148667LLU) { NG(); } else { ; }
	
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

