#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
uint64_t x10 = UINT64_MAX;
volatile int64_t x12 = 469404166588LL;
static int64_t t2 = -66129965LL;
int64_t x15 = 21807LL;
volatile uint8_t x17 = 48U;
static uint16_t x19 = 198U;
volatile uint64_t x26 = 25LLU;
int16_t x31 = INT16_MIN;
int8_t x35 = -1;
static volatile uint64_t t9 = 2353953LLU;
uint8_t x48 = 1U;
volatile uint64_t t13 = 67968694428448LLU;
int16_t x64 = INT16_MAX;
static int32_t x66 = -27847;
int32_t x70 = -1;
static int8_t x84 = 0;
int16_t x86 = INT16_MIN;
int32_t x89 = -284006;
int16_t x92 = -1;
int16_t x93 = 5;
static uint32_t x94 = 30084U;
volatile int8_t x99 = INT8_MIN;
uint64_t x102 = UINT64_MAX;
int16_t x104 = 62;
uint16_t x105 = 1U;
static int32_t x106 = INT32_MAX;
int16_t x111 = INT16_MIN;
static int32_t t25 = -520125;
static uint32_t x114 = 7163U;
uint32_t x116 = 1517385U;
int8_t x128 = -1;
int32_t x133 = INT32_MAX;
static uint64_t x134 = 203125856255LLU;
int16_t x135 = INT16_MIN;
static volatile int64_t t30 = -61908100901637LL;
static volatile int64_t x137 = INT64_MIN;
static volatile int8_t x147 = -48;
uint32_t x165 = 54U;
static int8_t x171 = -1;
volatile int32_t t39 = 39127847;
static int64_t x174 = -1LL;
int16_t x179 = -1;
int32_t x180 = 560481725;
int32_t t42 = -527;
volatile uint16_t x188 = 3U;
int64_t t43 = 27088123410133126LL;
int16_t x189 = -1;
uint16_t x194 = UINT16_MAX;
uint64_t x203 = 29373608LLU;
int32_t x208 = INT32_MIN;
int8_t x209 = -7;
int64_t x210 = -130848775304734LL;
static volatile uint64_t x212 = 192534LLU;
static int16_t x213 = INT16_MIN;
volatile int32_t t50 = -521732168;
static int32_t x223 = 928622;
volatile uint64_t x225 = 19LLU;
int64_t x229 = INT64_MIN;
static int32_t x230 = 40;
int64_t x232 = INT64_MIN;
int32_t x233 = -96813;
volatile int16_t x245 = INT16_MAX;
static int64_t x249 = -1LL;
int8_t x252 = -7;
int16_t x264 = INT16_MIN;
volatile uint32_t t61 = 130697U;
int32_t t62 = 3978;
volatile uint16_t x284 = 12845U;
static int32_t t63 = -4;
volatile int16_t x286 = -1;
volatile int8_t x287 = INT8_MAX;
uint32_t x288 = 13U;
uint32_t t64 = 633345255U;
int64_t x293 = INT64_MIN;
int16_t x294 = INT16_MIN;
int64_t x295 = -157LL;
int16_t x302 = INT16_MIN;
volatile uint32_t x306 = 9U;
static volatile int32_t t68 = -13;
int8_t x315 = -28;
static int16_t x324 = -1;
int32_t t73 = 468966;
int16_t x333 = -2045;
uint32_t x336 = 2U;
int32_t t75 = 88166306;
uint16_t x343 = 1268U;
uint8_t x348 = UINT8_MAX;
int16_t x350 = -102;
static int32_t x356 = 488576;
static int8_t x357 = -1;
uint64_t t81 = 33779296036949LLU;
static volatile int16_t x371 = INT16_MIN;
int32_t x376 = INT32_MAX;
int8_t x378 = 5;
uint8_t x381 = UINT8_MAX;
volatile uint8_t x383 = 12U;
volatile int8_t x384 = INT8_MIN;
int8_t x385 = INT8_MAX;
static int16_t x387 = INT16_MAX;
volatile uint64_t x391 = 5913267220147LLU;
volatile uint64_t x396 = 24122325LLU;
int8_t x398 = 0;
uint32_t x399 = 39786U;
int64_t x400 = 11150LL;
int64_t t89 = 38176LL;
static uint16_t x404 = UINT16_MAX;
int32_t x405 = INT32_MIN;
int32_t t91 = -15261;
int16_t x420 = INT16_MIN;
volatile uint64_t t94 = 6105370LLU;
int8_t x425 = INT8_MAX;
int32_t x426 = INT32_MAX;
volatile int32_t t97 = 19;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static volatile int8_t x3 = INT8_MAX;
	static int64_t x4 = -1LL;
	int64_t t0 = 25016729896386LL;

	t0 = (((x1<=x2)/x3)-x4);

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	volatile int32_t x6 = INT32_MIN;
	int8_t x7 = 34;
	uint32_t x8 = 15598432U;
	volatile uint32_t t1 = 378674348U;

	t1 = (((x5<=x6)/x7)-x8);

	if (t1 != 4279368864U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 53U;
	uint8_t x11 = 81U;

	t2 = (((x9<=x10)/x11)-x12);

	if (t2 != -469404166588LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = INT8_MIN;
	int32_t x16 = INT32_MAX;
	volatile int64_t t3 = 14152799LL;

	t3 = (((x13<=x14)/x15)-x16);

	if (t3 != -2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = 6LLU;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = -114;

	t4 = (((x17<=x18)/x19)-x20);

	if (t4 != -65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MAX;
	int32_t x27 = -1;
	int16_t x28 = -1;
	volatile int32_t t5 = 55869;

	t5 = (((x25<=x26)/x27)-x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x29 = 685187LLU;
	uint64_t x30 = 0LLU;
	uint16_t x32 = 2U;
	volatile int32_t t6 = 112083446;

	t6 = (((x29<=x30)/x31)-x32);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x33 = 33U;
	uint8_t x34 = 0U;
	int16_t x36 = -1;
	int32_t t7 = 55;

	t7 = (((x33<=x34)/x35)-x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = 980151185138797LLU;
	int64_t x39 = INT64_MAX;
	volatile uint8_t x40 = 6U;
	volatile int64_t t8 = 944LL;

	t8 = (((x37<=x38)/x39)-x40);

	if (t8 != -6LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = 758764911608752LL;
	int16_t x42 = -1;
	static uint64_t x43 = 18871558393LLU;
	static int64_t x44 = INT64_MIN;

	t9 = (((x41<=x42)/x43)-x44);

	if (t9 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 16659U;
	uint8_t x46 = 1U;
	int16_t x47 = -1;
	volatile int32_t t10 = -1438;

	t10 = (((x45<=x46)/x47)-x48);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x49 = -1LL;
	uint32_t x50 = UINT32_MAX;
	int8_t x51 = -1;
	int8_t x52 = INT8_MAX;
	int32_t t11 = -89;

	t11 = (((x49<=x50)/x51)-x52);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -19;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	int16_t x56 = INT16_MIN;
	int32_t t12 = 1;

	t12 = (((x53<=x54)/x55)-x56);

	if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = UINT8_MAX;
	int32_t x58 = 7433;
	volatile uint64_t x59 = UINT64_MAX;
	volatile int16_t x60 = -1;

	t13 = (((x57<=x58)/x59)-x60);

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 7U;
	uint64_t x62 = 18463327651LLU;
	int64_t x63 = INT64_MIN;
	volatile int64_t t14 = -284LL;

	t14 = (((x61<=x62)/x63)-x64);

	if (t14 != -32767LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 704;
	volatile int16_t x67 = INT16_MIN;
	uint8_t x68 = UINT8_MAX;
	int32_t t15 = 327644342;

	t15 = (((x65<=x66)/x67)-x68);

	if (t15 != -255) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = 35360673;
	static uint8_t x71 = 5U;
	uint64_t x72 = 1011325579LLU;
	volatile uint64_t t16 = 9376348960LLU;

	t16 = (((x69<=x70)/x71)-x72);

	if (t16 != 18446744072698226037LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	volatile uint64_t x74 = UINT64_MAX;
	int8_t x75 = INT8_MAX;
	uint16_t x76 = 1588U;
	static volatile int32_t t17 = -2914;

	t17 = (((x73<=x74)/x75)-x76);

	if (t17 != -1588) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = -1;
	int32_t x82 = -657452;
	int64_t x83 = INT64_MAX;
	int64_t t18 = -19863626402LL;

	t18 = (((x81<=x82)/x83)-x84);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x85 = UINT32_MAX;
	volatile int8_t x87 = 7;
	uint32_t x88 = UINT32_MAX;
	static uint32_t t19 = 2050340U;

	t19 = (((x85<=x86)/x87)-x88);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x90 = INT64_MAX;
	int32_t x91 = 590354;
	int32_t t20 = -15;

	t20 = (((x89<=x90)/x91)-x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x95 = 11319U;
	uint64_t x96 = 187LLU;
	uint64_t t21 = 3328269584909LLU;

	t21 = (((x93<=x94)/x95)-x96);

	if (t21 != 18446744073709551429LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x97 = 7;
	volatile int16_t x98 = -1;
	int32_t x100 = -956;
	volatile int32_t t22 = -13280;

	t22 = (((x97<=x98)/x99)-x100);

	if (t22 != 956) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 277712970686LLU;
	uint16_t x103 = UINT16_MAX;
	int32_t t23 = -91465140;

	t23 = (((x101<=x102)/x103)-x104);

	if (t23 != -62) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x107 = 793U;
	int32_t x108 = -1;
	uint32_t t24 = 15795754U;

	t24 = (((x105<=x106)/x107)-x108);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x109 = 405763260U;
	uint8_t x110 = 2U;
	static uint16_t x112 = 176U;

	t25 = (((x109<=x110)/x111)-x112);

	if (t25 != -176) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	int32_t x115 = INT32_MIN;
	uint32_t t26 = 41140U;

	t26 = (((x113<=x114)/x115)-x116);

	if (t26 != 4293449911U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x117 = UINT16_MAX;
	uint16_t x118 = 21934U;
	static int64_t x119 = -3751300LL;
	static uint16_t x120 = UINT16_MAX;
	volatile int64_t t27 = 7171209LL;

	t27 = (((x117<=x118)/x119)-x120);

	if (t27 != -65535LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = 183;
	static int64_t x126 = INT64_MIN;
	static int64_t x127 = INT64_MIN;
	static int64_t t28 = -211437974141624LL;

	t28 = (((x125<=x126)/x127)-x128);

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x129 = UINT8_MAX;
	static int32_t x130 = 89170;
	volatile int16_t x131 = 10;
	int32_t x132 = -1;
	volatile int32_t t29 = 14619065;

	t29 = (((x129<=x130)/x131)-x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x136 = 216143172941LL;

	t30 = (((x133<=x134)/x135)-x136);

	if (t30 != -216143172941LL) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x138 = 1626135LL;
	int64_t x139 = -3673330LL;
	static uint64_t x140 = 51577433504951LLU;
	static uint64_t t31 = 3458147324996736LLU;

	t31 = (((x137<=x138)/x139)-x140);

	if (t31 != 18446692496276046665LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = 113965LL;
	static int32_t x142 = 0;
	volatile int64_t x143 = INT64_MIN;
	static int64_t x144 = -1LL;
	static int64_t t32 = 377546864566LL;

	t32 = (((x141<=x142)/x143)-x144);

	if (t32 != 1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -3;
	int32_t x146 = 48065;
	volatile int16_t x148 = INT16_MIN;
	volatile int32_t t33 = 31;

	t33 = (((x145<=x146)/x147)-x148);

	if (t33 != 32768) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -3745;
	int32_t x150 = INT32_MAX;
	volatile int8_t x151 = INT8_MIN;
	int64_t x152 = -1LL;
	volatile int64_t t34 = -62024237277165181LL;

	t34 = (((x149<=x150)/x151)-x152);

	if (t34 != 1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x153 = INT64_MIN;
	uint64_t x154 = 4401259925578LLU;
	uint64_t x155 = UINT64_MAX;
	volatile int8_t x156 = INT8_MAX;
	volatile uint64_t t35 = 775LLU;

	t35 = (((x153<=x154)/x155)-x156);

	if (t35 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = 14542336510LL;
	volatile int8_t x158 = 1;
	int32_t x159 = 59697;
	int64_t x160 = 40LL;
	int64_t t36 = 118406798985192LL;

	t36 = (((x157<=x158)/x159)-x160);

	if (t36 != -40LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x161 = 1U;
	int32_t x162 = -659;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = 0;
	static int32_t t37 = -147;

	t37 = (((x161<=x162)/x163)-x164);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x166 = INT32_MIN;
	volatile uint64_t x167 = UINT64_MAX;
	uint16_t x168 = 5U;
	static volatile uint64_t t38 = 3036LLU;

	t38 = (((x165<=x166)/x167)-x168);

	if (t38 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x169 = 15U;
	static volatile uint64_t x170 = UINT64_MAX;
	int16_t x172 = 136;

	t39 = (((x169<=x170)/x171)-x172);

	if (t39 != -137) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x173 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	int64_t x176 = -1LL;
	int64_t t40 = -836177206156LL;

	t40 = (((x173<=x174)/x175)-x176);

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x177 = INT8_MIN;
	int16_t x178 = 12641;
	volatile int32_t t41 = 248391;

	t41 = (((x177<=x178)/x179)-x180);

	if (t41 != -560481726) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x181 = INT64_MIN;
	int16_t x182 = 0;
	int8_t x183 = INT8_MIN;
	uint8_t x184 = UINT8_MAX;

	t42 = (((x181<=x182)/x183)-x184);

	if (t42 != -255) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = 3720744735LLU;
	uint8_t x186 = 0U;
	int64_t x187 = 805703318508LL;

	t43 = (((x185<=x186)/x187)-x188);

	if (t43 != -3LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x190 = INT8_MIN;
	static int64_t x191 = INT64_MIN;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t44 = 4815LLU;

	t44 = (((x189<=x190)/x191)-x192);

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = INT32_MIN;
	int8_t x195 = -1;
	int8_t x196 = INT8_MIN;
	int32_t t45 = 299375;

	t45 = (((x193<=x194)/x195)-x196);

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x197 = INT64_MIN;
	static int64_t x198 = -13LL;
	volatile int64_t x199 = INT64_MIN;
	volatile uint64_t x200 = UINT64_MAX;
	uint64_t t46 = 121226896928918667LLU;

	t46 = (((x197<=x198)/x199)-x200);

	if (t46 != 1LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = UINT64_MAX;
	volatile int16_t x202 = -1;
	uint32_t x204 = UINT32_MAX;
	uint64_t t47 = 110LLU;

	t47 = (((x201<=x202)/x203)-x204);

	if (t47 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x205 = -1LL;
	volatile int16_t x206 = 1133;
	int64_t x207 = INT64_MIN;
	int64_t t48 = 3638421783905LL;

	t48 = (((x205<=x206)/x207)-x208);

	if (t48 != 2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x211 = INT8_MIN;
	volatile uint64_t t49 = 1993LLU;

	t49 = (((x209<=x210)/x211)-x212);

	if (t49 != 18446744073709359082LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x214 = UINT64_MAX;
	volatile int32_t x215 = INT32_MAX;
	uint8_t x216 = 0U;

	t50 = (((x213<=x214)/x215)-x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 8163U;
	uint8_t x222 = 22U;
	uint8_t x224 = 32U;
	int32_t t51 = -398;

	t51 = (((x221<=x222)/x223)-x224);

	if (t51 != -32) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x226 = -137621631060609583LL;
	uint32_t x227 = 2U;
	static uint16_t x228 = UINT16_MAX;
	uint32_t t52 = 937889932U;

	t52 = (((x225<=x226)/x227)-x228);

	if (t52 != 4294901761U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x231 = 5977821898823LLU;
	static uint64_t t53 = 16629904796103363LLU;

	t53 = (((x229<=x230)/x231)-x232);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x234 = INT16_MAX;
	int64_t x235 = INT64_MIN;
	int8_t x236 = -1;
	int64_t t54 = -565106758967LL;

	t54 = (((x233<=x234)/x235)-x236);

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x237 = 0U;
	int32_t x238 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	static uint64_t x240 = 30320036045LLU;
	volatile uint64_t t55 = 142456743330232LLU;

	t55 = (((x237<=x238)/x239)-x240);

	if (t55 != 18446744043389515571LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x246 = -1;
	volatile int16_t x247 = -1;
	uint8_t x248 = 4U;
	int32_t t56 = -1913;

	t56 = (((x245<=x246)/x247)-x248);

	if (t56 != -4) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x250 = 25U;
	uint32_t x251 = 1451960U;
	volatile uint32_t t57 = 1697647733U;

	t57 = (((x249<=x250)/x251)-x252);

	if (t57 != 7U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x253 = UINT64_MAX;
	uint8_t x254 = UINT8_MAX;
	uint8_t x255 = 28U;
	int8_t x256 = -36;
	volatile int32_t t58 = -3431;

	t58 = (((x253<=x254)/x255)-x256);

	if (t58 != 36) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x261 = 615248U;
	int64_t x262 = -1LL;
	int8_t x263 = INT8_MAX;
	int32_t t59 = 2898297;

	t59 = (((x261<=x262)/x263)-x264);

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x265 = INT8_MIN;
	uint32_t x266 = 54U;
	int8_t x267 = -44;
	static int64_t x268 = -2066541041262829LL;
	volatile int64_t t60 = 11425587088058LL;

	t60 = (((x265<=x266)/x267)-x268);

	if (t60 != 2066541041262829LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	uint32_t x271 = 640174006U;
	static int32_t x272 = INT32_MIN;

	t61 = (((x269<=x270)/x271)-x272);

	if (t61 != 2147483648U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int64_t x273 = -1LL;
	int16_t x274 = INT16_MAX;
	int8_t x275 = 62;
	int8_t x276 = INT8_MIN;

	t62 = (((x273<=x274)/x275)-x276);

	if (t62 != 128) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = INT32_MIN;
	int16_t x282 = INT16_MAX;
	int8_t x283 = -1;

	t63 = (((x281<=x282)/x283)-x284);

	if (t63 != -12846) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x285 = UINT32_MAX;

	t64 = (((x285<=x286)/x287)-x288);

	if (t64 != 4294967283U) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x296 = INT16_MAX;
	int64_t t65 = 109365LL;

	t65 = (((x293<=x294)/x295)-x296);

	if (t65 != -32767LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x297 = INT64_MIN;
	int64_t x298 = -405330440043LL;
	int16_t x299 = -1;
	int32_t x300 = -1;
	volatile int32_t t66 = 2;

	t66 = (((x297<=x298)/x299)-x300);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x301 = INT32_MIN;
	uint32_t x303 = 1037547012U;
	static uint8_t x304 = 19U;
	volatile uint32_t t67 = 52U;

	t67 = (((x301<=x302)/x303)-x304);

	if (t67 != 4294967277U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x305 = UINT64_MAX;
	int32_t x307 = -1;
	int16_t x308 = -1;

	t68 = (((x305<=x306)/x307)-x308);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x309 = 1;
	uint32_t x310 = 3U;
	static int32_t x311 = INT32_MIN;
	static int16_t x312 = INT16_MAX;
	static volatile int32_t t69 = 39289;

	t69 = (((x309<=x310)/x311)-x312);

	if (t69 != -32767) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x313 = INT32_MIN;
	int64_t x314 = INT64_MAX;
	volatile int16_t x316 = INT16_MIN;
	int32_t t70 = -90417;

	t70 = (((x313<=x314)/x315)-x316);

	if (t70 != 32768) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x317 = 15481;
	static int32_t x318 = INT32_MIN;
	int64_t x319 = -1LL;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t71 = 236646LLU;

	t71 = (((x317<=x318)/x319)-x320);

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = INT32_MIN;
	uint8_t x322 = 2U;
	int16_t x323 = -1;
	int32_t t72 = 1;

	t72 = (((x321<=x322)/x323)-x324);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x329 = INT64_MIN;
	int8_t x330 = 0;
	static uint8_t x331 = 11U;
	volatile int16_t x332 = INT16_MAX;

	t73 = (((x329<=x330)/x331)-x332);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x334 = -7240;
	static uint8_t x335 = UINT8_MAX;
	volatile uint32_t t74 = 21U;

	t74 = (((x333<=x334)/x335)-x336);

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x337 = -1;
	uint16_t x338 = 188U;
	static int16_t x339 = -496;
	static uint8_t x340 = 0U;

	t75 = (((x337<=x338)/x339)-x340);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x341 = INT16_MIN;
	uint64_t x342 = UINT64_MAX;
	int32_t x344 = INT32_MAX;
	int32_t t76 = 822789;

	t76 = (((x341<=x342)/x343)-x344);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = -8682424;
	volatile int16_t x346 = 377;
	static volatile int32_t x347 = -1058324826;
	volatile int32_t t77 = 0;

	t77 = (((x345<=x346)/x347)-x348);

	if (t77 != -255) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x349 = -1;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = 3;
	int32_t t78 = -5202;

	t78 = (((x349<=x350)/x351)-x352);

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = -1;
	volatile uint16_t x355 = 1U;
	volatile int32_t t79 = 74790;

	t79 = (((x353<=x354)/x355)-x356);

	if (t79 != -488576) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x358 = 1699278827117LLU;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int64_t x360 = -1LL;
	static int64_t t80 = 1148814573LL;

	t80 = (((x357<=x358)/x359)-x360);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x361 = 53;
	uint64_t x362 = 104446816108782LLU;
	volatile uint64_t x363 = 3485250790008LLU;
	uint32_t x364 = 237U;

	t81 = (((x361<=x362)/x363)-x364);

	if (t81 != 18446744073709551379LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x369 = INT32_MIN;
	int32_t x370 = -4615708;
	static int64_t x372 = 175356LL;
	int64_t t82 = 20084LL;

	t82 = (((x369<=x370)/x371)-x372);

	if (t82 != -175356LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x373 = -1;
	volatile int32_t x374 = INT32_MIN;
	int64_t x375 = 599485447578406LL;
	int64_t t83 = -249093LL;

	t83 = (((x373<=x374)/x375)-x376);

	if (t83 != -2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x377 = INT8_MAX;
	uint64_t x379 = 430263583064819242LLU;
	uint64_t x380 = 8229281LLU;
	uint64_t t84 = 11292383LLU;

	t84 = (((x377<=x378)/x379)-x380);

	if (t84 != 18446744073701322335LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x382 = 1110144U;
	int32_t t85 = 244937335;

	t85 = (((x381<=x382)/x383)-x384);

	if (t85 != 128) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x386 = -48;
	int8_t x388 = 1;
	volatile int32_t t86 = 12361;

	t86 = (((x385<=x386)/x387)-x388);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x389 = 419U;
	int16_t x390 = -1;
	volatile uint16_t x392 = 47U;
	volatile uint64_t t87 = 494746LLU;

	t87 = (((x389<=x390)/x391)-x392);

	if (t87 != 18446744073709551569LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint32_t x394 = UINT32_MAX;
	volatile uint32_t x395 = UINT32_MAX;
	static volatile uint64_t t88 = 32022LLU;

	t88 = (((x393<=x394)/x395)-x396);

	if (t88 != 18446744073685429291LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x397 = 0U;

	t89 = (((x397<=x398)/x399)-x400);

	if (t89 != -11150LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = -3;
	int64_t x402 = -120657LL;
	volatile int16_t x403 = -2664;
	volatile int32_t t90 = 11883411;

	t90 = (((x401<=x402)/x403)-x404);

	if (t90 != -65535) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x406 = INT8_MIN;
	uint8_t x407 = 27U;
	static volatile uint8_t x408 = UINT8_MAX;

	t91 = (((x405<=x406)/x407)-x408);

	if (t91 != -255) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = INT32_MIN;
	uint32_t x410 = UINT32_MAX;
	int64_t x411 = INT64_MIN;
	static volatile int8_t x412 = -1;
	volatile int64_t t92 = -16679288LL;

	t92 = (((x409<=x410)/x411)-x412);

	if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = -1;
	volatile int64_t x414 = -117623235718099LL;
	int8_t x415 = -1;
	volatile int8_t x416 = 13;
	static volatile int32_t t93 = -7610241;

	t93 = (((x413<=x414)/x415)-x416);

	if (t93 != -13) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x417 = INT64_MIN;
	uint32_t x418 = 657730U;
	uint64_t x419 = 115550326LLU;

	t94 = (((x417<=x418)/x419)-x420);

	if (t94 != 32768LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = INT16_MIN;
	int64_t x422 = INT64_MIN;
	static uint32_t x423 = 1247U;
	int16_t x424 = -1;
	uint32_t t95 = 99354421U;

	t95 = (((x421<=x422)/x423)-x424);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x427 = INT64_MIN;
	int8_t x428 = -1;
	int64_t t96 = 108314514237682437LL;

	t96 = (((x425<=x426)/x427)-x428);

	if (t96 != 1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 2LLU;
	static int64_t x430 = INT64_MIN;
	int16_t x431 = INT16_MAX;
	int8_t x432 = INT8_MAX;

	t97 = (((x429<=x430)/x431)-x432);

	if (t97 != -127) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = -1;
	uint16_t x434 = UINT16_MAX;
	static int64_t x435 = INT64_MAX;
	uint8_t x436 = 63U;
	int64_t t98 = 19795695934LL;

	t98 = (((x433<=x434)/x435)-x436);

	if (t98 != -63LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x437 = INT32_MIN;
	volatile int64_t x438 = -1LL;
	static int8_t x439 = INT8_MAX;
	int8_t x440 = -1;
	static volatile int32_t t99 = 353651;

	t99 = (((x437<=x438)/x439)-x440);

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

