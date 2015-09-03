#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 9004U;
volatile uint32_t x4 = 20869088U;
int8_t x9 = INT8_MIN;
volatile uint16_t x15 = UINT16_MAX;
volatile uint8_t x19 = 31U;
int8_t x21 = 13;
uint16_t x24 = UINT16_MAX;
uint32_t x34 = UINT32_MAX;
int16_t x35 = 30;
static int8_t x38 = INT8_MIN;
volatile int64_t x39 = -1LL;
static uint8_t x41 = 15U;
uint64_t x44 = 4493438952456499LLU;
uint32_t x54 = 3U;
static uint32_t x59 = UINT32_MAX;
int8_t x62 = INT8_MAX;
volatile int16_t x64 = INT16_MIN;
volatile int32_t t13 = 209652934;
int16_t x67 = 28;
uint64_t x70 = 11599687017LLU;
volatile uint16_t x71 = UINT16_MAX;
uint8_t x73 = 22U;
static uint16_t x74 = 783U;
volatile uint64_t x79 = 3533542486183510LLU;
static int32_t x83 = INT32_MAX;
volatile int16_t x85 = 0;
int16_t x88 = -1;
uint64_t x93 = UINT64_MAX;
int32_t x94 = INT32_MIN;
static int16_t x98 = INT16_MIN;
int64_t x100 = -110135LL;
volatile int64_t x110 = INT64_MIN;
volatile uint16_t x112 = 4397U;
int32_t x117 = INT32_MIN;
volatile int64_t x118 = -1068397321442874603LL;
uint32_t x119 = 58U;
int64_t x121 = INT64_MAX;
volatile int16_t x123 = -6;
volatile int64_t x124 = -1LL;
int32_t t29 = -11131766;
int16_t x130 = -291;
volatile uint8_t x135 = UINT8_MAX;
int64_t x162 = 253996087241LL;
int8_t x170 = INT8_MAX;
static int32_t t40 = 353720134;
volatile int32_t t41 = 1;
int64_t x180 = INT64_MIN;
int32_t t43 = -411467125;
volatile int64_t x188 = INT64_MAX;
uint16_t x189 = 184U;
volatile int32_t t45 = -139435544;
int8_t x197 = INT8_MIN;
volatile int32_t t47 = 1788180;
volatile int32_t x213 = -1;
int8_t x221 = INT8_MIN;
uint16_t x222 = 3U;
volatile int32_t t53 = 0;
int32_t t54 = 126679193;
int32_t t55 = 3533;
static volatile uint32_t x243 = 754U;
uint32_t x245 = 5148U;
static int32_t x249 = INT32_MIN;
static uint64_t x251 = UINT64_MAX;
volatile uint16_t x252 = 12336U;
int32_t x256 = INT32_MIN;
int8_t x267 = INT8_MIN;
int32_t t63 = -981803;
uint16_t x270 = 11309U;
volatile int32_t t65 = 131780181;
static uint8_t x278 = 52U;
int32_t x283 = -1;
int64_t x287 = 6871662LL;
static int32_t t68 = 0;
volatile uint32_t x290 = 2U;
static volatile int32_t t69 = 6;
int32_t t70 = 1;
static uint64_t x298 = UINT64_MAX;
int32_t t71 = INT32_MIN;
volatile int32_t x301 = INT32_MIN;
int64_t x305 = -1764082031530LL;
int32_t x311 = INT32_MIN;
volatile uint8_t x312 = UINT8_MAX;
uint32_t x316 = 1455612342U;
static int16_t x317 = INT16_MIN;
int32_t t76 = 1498403;
int8_t x327 = 0;
int64_t t78 = 175484LL;
static uint16_t x331 = 19570U;
uint8_t x336 = 72U;
int64_t t82 = 243873363201LL;
uint32_t t83 = 742805013U;
int8_t x350 = 0;
int32_t x353 = -1;
static volatile int32_t t85 = -475;
int32_t x361 = INT32_MIN;
int32_t t87 = -2;
int32_t x365 = 0;
volatile uint64_t x367 = UINT64_MAX;
static uint64_t t90 = 128945736490058LLU;
int8_t x378 = INT8_MIN;
int16_t x381 = INT16_MIN;
int32_t x382 = -22;
uint32_t x385 = UINT32_MAX;
volatile int32_t t94 = -11179;
uint64_t x394 = 262837972551LLU;
volatile uint32_t t95 = UINT32_MAX;
volatile uint8_t x397 = UINT8_MAX;
static int64_t x401 = -90596743543LL;
volatile int64_t t97 = 488LL;
int32_t x411 = 134;


void f0(void) {
	int16_t x1 = -1;
	uint32_t x3 = 34U;
	int32_t t0 = -532377;

	t0 = (x1+(x2<=(x3<=x4)));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = INT64_MAX;
	uint16_t x6 = 475U;
	volatile int16_t x7 = 482;
	uint64_t x8 = 7218504LLU;
	static int64_t t1 = INT64_MAX;

	t1 = (x5+(x6<=(x7<=x8)));

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 116175698;
	int16_t x11 = 3352;
	static int32_t x12 = 42222;
	volatile int32_t t2 = -4737516;

	t2 = (x9+(x10<=(x11<=x12)));

	if (t2 != -128) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x14 = INT32_MIN;
	static uint32_t x16 = 1U;
	volatile int32_t t3 = 1850;

	t3 = (x13+(x14<=(x15<=x16)));

	if (t3 != 65536) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static volatile int8_t x18 = INT8_MIN;
	volatile int32_t x20 = -3515;
	volatile int64_t t4 = 4836156066379LL;

	t4 = (x17+(x18<=(x19<=x20)));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x22 = INT32_MIN;
	static int8_t x23 = -1;
	static volatile int32_t t5 = -28;

	t5 = (x21+(x22<=(x23<=x24)));

	if (t5 != 14) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int64_t x26 = 679LL;
	static int32_t x27 = INT32_MIN;
	int64_t x28 = -1LL;
	int32_t t6 = INT32_MIN;

	t6 = (x25+(x26<=(x27<=x28)));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x36 = -7983;
	static uint32_t t7 = UINT32_MAX;

	t7 = (x33+(x34<=(x35<=x36)));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x37 = INT64_MIN;
	uint16_t x40 = 0U;
	volatile int64_t t8 = -210712400248LL;

	t8 = (x37+(x38<=(x39<=x40)));

	if (t8 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = -1;
	uint16_t x43 = 121U;
	int32_t t9 = 266773931;

	t9 = (x41+(x42<=(x43<=x44)));

	if (t9 != 16) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = 0;
	int16_t x46 = 1;
	int32_t x47 = -1;
	int8_t x48 = INT8_MIN;
	volatile int32_t t10 = 2762;

	t10 = (x45+(x46<=(x47<=x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = INT16_MAX;
	int64_t x55 = -1LL;
	int64_t x56 = INT64_MAX;
	volatile int32_t t11 = -276;

	t11 = (x53+(x54<=(x55<=x56)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 1U;
	int16_t x58 = -1;
	volatile uint32_t x60 = 78867166U;
	int32_t t12 = -66660;

	t12 = (x57+(x58<=(x59<=x60)));

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x61 = -1;
	volatile int32_t x63 = INT32_MIN;

	t13 = (x61+(x62<=(x63<=x64)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x65 = -4063393989871538LL;
	uint8_t x66 = UINT8_MAX;
	uint32_t x68 = 392U;
	volatile int64_t t14 = -53800133177LL;

	t14 = (x65+(x66<=(x67<=x68)));

	if (t14 != -4063393989871538LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MIN;
	uint64_t x72 = 2983LLU;
	int64_t t15 = INT64_MIN;

	t15 = (x69+(x70<=(x71<=x72)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x75 = -1;
	uint64_t x76 = 2129106872LLU;
	static volatile int32_t t16 = 1040037;

	t16 = (x73+(x74<=(x75<=x76)));

	if (t16 != 22) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -1022;
	volatile int8_t x78 = INT8_MIN;
	static int16_t x80 = 72;
	volatile int32_t t17 = 716161519;

	t17 = (x77+(x78<=(x79<=x80)));

	if (t17 != -1021) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = 32187893967951179LL;
	uint32_t x82 = 1515U;
	uint64_t x84 = 19698LLU;
	int64_t t18 = 790398005164345778LL;

	t18 = (x81+(x82<=(x83<=x84)));

	if (t18 != 32187893967951179LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = INT32_MIN;
	uint64_t x87 = UINT64_MAX;
	int32_t t19 = -32355;

	t19 = (x85+(x86<=(x87<=x88)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x89 = 0U;
	uint8_t x90 = 12U;
	int8_t x91 = INT8_MIN;
	uint64_t x92 = 64953481LLU;
	volatile int32_t t20 = -1838174;

	t20 = (x89+(x90<=(x91<=x92)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x95 = INT32_MIN;
	static uint32_t x96 = 889U;
	uint64_t t21 = 83246071LLU;

	t21 = (x93+(x94<=(x95<=x96)));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x97 = INT8_MIN;
	volatile int16_t x99 = -1;
	volatile int32_t t22 = 1;

	t22 = (x97+(x98<=(x99<=x100)));

	if (t22 != -127) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x101 = -1LL;
	int8_t x102 = 4;
	static int64_t x103 = INT64_MIN;
	volatile int8_t x104 = -1;
	volatile int64_t t23 = -25844169053124315LL;

	t23 = (x101+(x102<=(x103<=x104)));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x105 = INT8_MIN;
	static uint16_t x106 = 49U;
	int16_t x107 = 1714;
	static int8_t x108 = -1;
	volatile int32_t t24 = -110985199;

	t24 = (x105+(x106<=(x107<=x108)));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x109 = INT16_MAX;
	volatile int8_t x111 = 6;
	static int32_t t25 = 9111;

	t25 = (x109+(x110<=(x111<=x112)));

	if (t25 != 32768) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	static int64_t x114 = -584150024844385LL;
	int64_t x115 = INT64_MIN;
	int32_t x116 = -40603;
	int32_t t26 = 176699297;

	t26 = (x113+(x114<=(x115<=x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x120 = 20807U;
	static int32_t t27 = 111;

	t27 = (x117+(x118<=(x119<=x120)));

	if (t27 != -2147483647) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x122 = 841711562731LLU;
	int64_t t28 = INT64_MAX;

	t28 = (x121+(x122<=(x123<=x124)));

	if (t28 != INT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MAX;
	uint16_t x126 = 1117U;
	static int16_t x127 = INT16_MAX;
	int32_t x128 = INT32_MIN;

	t29 = (x125+(x126<=(x127<=x128)));

	if (t29 != 32767) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x129 = INT16_MIN;
	int32_t x131 = 19947;
	static int64_t x132 = INT64_MIN;
	volatile int32_t t30 = -62416;

	t30 = (x129+(x130<=(x131<=x132)));

	if (t30 != -32767) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x133 = -1;
	int32_t x134 = INT32_MIN;
	volatile int32_t x136 = INT32_MIN;
	int32_t t31 = -164020;

	t31 = (x133+(x134<=(x135<=x136)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x137 = INT16_MAX;
	int32_t x138 = -3986;
	int8_t x139 = -1;
	int16_t x140 = INT16_MIN;
	volatile int32_t t32 = 441136;

	t32 = (x137+(x138<=(x139<=x140)));

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x141 = INT64_MAX;
	uint8_t x142 = 27U;
	uint32_t x143 = 2U;
	int64_t x144 = -7058479697645LL;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x141+(x142<=(x143<=x144)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x145 = 203U;
	uint32_t x146 = UINT32_MAX;
	static int16_t x147 = -1;
	static int8_t x148 = INT8_MIN;
	uint32_t t34 = 130586895U;

	t34 = (x145+(x146<=(x147<=x148)));

	if (t34 != 203U) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x149 = 1U;
	volatile uint16_t x150 = UINT16_MAX;
	int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	static int32_t t35 = -2744742;

	t35 = (x149+(x150<=(x151<=x152)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = INT16_MAX;
	static int16_t x154 = INT16_MAX;
	int8_t x155 = -1;
	int8_t x156 = INT8_MAX;
	volatile int32_t t36 = 62281755;

	t36 = (x153+(x154<=(x155<=x156)));

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	uint32_t x158 = 2779U;
	int64_t x159 = 0LL;
	int64_t x160 = INT64_MAX;
	static volatile int64_t t37 = -2824LL;

	t37 = (x157+(x158<=(x159<=x160)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x161 = 904330U;
	static volatile uint8_t x163 = UINT8_MAX;
	int64_t x164 = INT64_MIN;
	volatile uint32_t t38 = 660322U;

	t38 = (x161+(x162<=(x163<=x164)));

	if (t38 != 904330U) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x165 = 843U;
	uint64_t x166 = 8119173860036200LLU;
	uint16_t x167 = 2U;
	uint32_t x168 = UINT32_MAX;
	static volatile int32_t t39 = 40880876;

	t39 = (x165+(x166<=(x167<=x168)));

	if (t39 != 843) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x169 = UINT16_MAX;
	static volatile int32_t x171 = 8074573;
	static int32_t x172 = -1;

	t40 = (x169+(x170<=(x171<=x172)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = -212060;
	volatile int8_t x174 = INT8_MAX;
	volatile int16_t x175 = -11;
	static uint64_t x176 = UINT64_MAX;

	t41 = (x173+(x174<=(x175<=x176)));

	if (t41 != -212060) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = 10LL;
	int16_t x178 = INT16_MIN;
	int32_t x179 = -92;
	volatile int64_t t42 = 434399119LL;

	t42 = (x177+(x178<=(x179<=x180)));

	if (t42 != 11LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x181 = 789136036;
	int32_t x182 = INT32_MIN;
	int16_t x183 = INT16_MAX;
	uint64_t x184 = 0LLU;

	t43 = (x181+(x182<=(x183<=x184)));

	if (t43 != 789136037) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = 1;
	volatile int16_t x186 = -1;
	int32_t x187 = INT32_MAX;
	volatile int32_t t44 = -4;

	t44 = (x185+(x186<=(x187<=x188)));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = -14647LL;
	int64_t x191 = INT64_MIN;
	static volatile int16_t x192 = -1;

	t45 = (x189+(x190<=(x191<=x192)));

	if (t45 != 185) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x193 = -1;
	volatile int32_t x194 = INT32_MIN;
	volatile int32_t x195 = INT32_MIN;
	int16_t x196 = INT16_MAX;
	volatile int32_t t46 = 0;

	t46 = (x193+(x194<=(x195<=x196)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x198 = -1;
	uint64_t x199 = 596970LLU;
	static int64_t x200 = 54532568796841909LL;

	t47 = (x197+(x198<=(x199<=x200)));

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x201 = 3;
	volatile int64_t x202 = -6667459LL;
	int8_t x203 = INT8_MAX;
	int8_t x204 = 1;
	volatile int32_t t48 = 14624356;

	t48 = (x201+(x202<=(x203<=x204)));

	if (t48 != 4) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = -1;
	uint8_t x207 = 2U;
	int64_t x208 = INT64_MIN;
	volatile int32_t t49 = 3454;

	t49 = (x205+(x206<=(x207<=x208)));

	if (t49 != 32768) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = UINT8_MAX;
	int32_t x211 = -3217;
	int32_t x212 = INT32_MAX;
	int32_t t50 = INT32_MIN;

	t50 = (x209+(x210<=(x211<=x212)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = INT16_MIN;
	uint64_t x215 = 4095709090448824500LLU;
	int16_t x216 = INT16_MIN;
	int32_t t51 = -118735714;

	t51 = (x213+(x214<=(x215<=x216)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x223 = -14;
	int16_t x224 = 169;
	int32_t t52 = 31055900;

	t52 = (x221+(x222<=(x223<=x224)));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = UINT16_MAX;
	int16_t x226 = -1;
	int8_t x227 = 9;
	int8_t x228 = -1;

	t53 = (x225+(x226<=(x227<=x228)));

	if (t53 != 65536) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x229 = -52;
	int16_t x230 = INT16_MAX;
	int16_t x231 = 200;
	static volatile int64_t x232 = 1LL;

	t54 = (x229+(x230<=(x231<=x232)));

	if (t54 != -52) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -21;
	static volatile int16_t x234 = 0;
	int32_t x235 = -1;
	uint16_t x236 = 125U;

	t55 = (x233+(x234<=(x235<=x236)));

	if (t55 != -20) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = INT16_MIN;
	static uint8_t x239 = 25U;
	int64_t x240 = INT64_MAX;
	static volatile int32_t t56 = -1;

	t56 = (x237+(x238<=(x239<=x240)));

	if (t56 != -2147483647) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = -2735264LL;
	int64_t x242 = INT64_MAX;
	static int32_t x244 = -24;
	int64_t t57 = -153972507280LL;

	t57 = (x241+(x242<=(x243<=x244)));

	if (t57 != -2735264LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x246 = INT32_MAX;
	uint8_t x247 = UINT8_MAX;
	volatile int8_t x248 = 1;
	volatile uint32_t t58 = 7717U;

	t58 = (x245+(x246<=(x247<=x248)));

	if (t58 != 5148U) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x250 = -1;
	volatile int32_t t59 = 2;

	t59 = (x249+(x250<=(x251<=x252)));

	if (t59 != -2147483647) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x253 = INT64_MIN;
	volatile int32_t x254 = INT32_MIN;
	int32_t x255 = -1;
	int64_t t60 = 178814LL;

	t60 = (x253+(x254<=(x255<=x256)));

	if (t60 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x257 = INT16_MAX;
	uint64_t x258 = UINT64_MAX;
	int32_t x259 = 39086027;
	int64_t x260 = 1870469590LL;
	int32_t t61 = 242901;

	t61 = (x257+(x258<=(x259<=x260)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x261 = INT64_MIN;
	static volatile int64_t x262 = INT64_MIN;
	int64_t x263 = 39180759030319LL;
	static uint16_t x264 = UINT16_MAX;
	int64_t t62 = -19936818LL;

	t62 = (x261+(x262<=(x263<=x264)));

	if (t62 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x265 = 26U;
	int8_t x266 = 10;
	int8_t x268 = -1;

	t63 = (x265+(x266<=(x267<=x268)));

	if (t63 != 26) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x269 = -34058549383405920LL;
	static volatile int32_t x271 = 1;
	uint64_t x272 = UINT64_MAX;
	static int64_t t64 = -1054924LL;

	t64 = (x269+(x270<=(x271<=x272)));

	if (t64 != -34058549383405920LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x273 = -4;
	uint8_t x274 = 2U;
	int64_t x275 = -1LL;
	uint64_t x276 = 120440716895329595LLU;

	t65 = (x273+(x274<=(x275<=x276)));

	if (t65 != -4) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = 6400;
	static uint8_t x279 = UINT8_MAX;
	uint32_t x280 = 6742U;
	volatile int32_t t66 = 1775;

	t66 = (x277+(x278<=(x279<=x280)));

	if (t66 != 6400) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x281 = UINT8_MAX;
	int32_t x282 = 372;
	volatile uint32_t x284 = 14454U;
	volatile int32_t t67 = 1601070;

	t67 = (x281+(x282<=(x283<=x284)));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x285 = 8790;
	int16_t x286 = INT16_MIN;
	int64_t x288 = 214LL;

	t68 = (x285+(x286<=(x287<=x288)));

	if (t68 != 8791) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x289 = 0U;
	int8_t x291 = 2;
	int16_t x292 = 14;

	t69 = (x289+(x290<=(x291<=x292)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x293 = INT16_MAX;
	uint16_t x294 = 65U;
	int16_t x295 = INT16_MIN;
	int8_t x296 = INT8_MAX;

	t70 = (x293+(x294<=(x295<=x296)));

	if (t70 != 32767) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x297 = INT32_MIN;
	static volatile int32_t x299 = -4;
	uint16_t x300 = UINT16_MAX;

	t71 = (x297+(x298<=(x299<=x300)));

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x302 = 0;
	uint64_t x303 = 7904586700862263LLU;
	static uint8_t x304 = 2U;
	int32_t t72 = 4081427;

	t72 = (x301+(x302<=(x303<=x304)));

	if (t72 != -2147483647) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = 458946;
	int8_t x307 = -1;
	static int8_t x308 = -1;
	volatile int64_t t73 = -412580593LL;

	t73 = (x305+(x306<=(x307<=x308)));

	if (t73 != -1764082031530LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x309 = UINT32_MAX;
	uint16_t x310 = 4U;
	volatile uint32_t t74 = UINT32_MAX;

	t74 = (x309+(x310<=(x311<=x312)));

	if (t74 != UINT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x313 = INT8_MIN;
	static int32_t x314 = INT32_MAX;
	static int32_t x315 = INT32_MIN;
	int32_t t75 = 2;

	t75 = (x313+(x314<=(x315<=x316)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x318 = 825LLU;
	int16_t x319 = 1;
	uint8_t x320 = 3U;

	t76 = (x317+(x318<=(x319<=x320)));

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x321 = 1149323;
	int16_t x322 = INT16_MIN;
	static volatile int8_t x323 = 37;
	volatile int64_t x324 = INT64_MIN;
	static volatile int32_t t77 = 1;

	t77 = (x321+(x322<=(x323<=x324)));

	if (t77 != 1149324) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x325 = -8LL;
	int16_t x326 = -6;
	static int16_t x328 = 11;

	t78 = (x325+(x326<=(x327<=x328)));

	if (t78 != -7LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x329 = -1;
	int8_t x330 = INT8_MAX;
	int32_t x332 = -1;
	volatile int32_t t79 = -2;

	t79 = (x329+(x330<=(x331<=x332)));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x333 = -16145066821342850LL;
	int8_t x334 = -15;
	static int64_t x335 = INT64_MIN;
	static int64_t t80 = -7911286LL;

	t80 = (x333+(x334<=(x335<=x336)));

	if (t80 != -16145066821342849LL) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x337 = 3U;
	uint32_t x338 = 7U;
	volatile int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MAX;
	volatile int32_t t81 = 1;

	t81 = (x337+(x338<=(x339<=x340)));

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = 1789967LL;
	int64_t x342 = INT64_MAX;
	int64_t x343 = INT64_MIN;
	int32_t x344 = -1;

	t82 = (x341+(x342<=(x343<=x344)));

	if (t82 != 1789967LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = 10207692U;
	int32_t x346 = 24351;
	static int64_t x347 = -1LL;
	int32_t x348 = -1757045;

	t83 = (x345+(x346<=(x347<=x348)));

	if (t83 != 10207692U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x349 = 3142902U;
	volatile int64_t x351 = 495573433LL;
	static uint64_t x352 = UINT64_MAX;
	volatile uint32_t t84 = 24623771U;

	t84 = (x349+(x350<=(x351<=x352)));

	if (t84 != 3142903U) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x354 = INT32_MIN;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = INT64_MIN;

	t85 = (x353+(x354<=(x355<=x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	volatile int64_t x358 = INT64_MAX;
	int16_t x359 = 3;
	int32_t x360 = -1;
	static int64_t t86 = INT64_MIN;

	t86 = (x357+(x358<=(x359<=x360)));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x362 = INT32_MIN;
	int32_t x363 = 26;
	int16_t x364 = INT16_MAX;

	t87 = (x361+(x362<=(x363<=x364)));

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = -50317;
	static uint8_t x368 = 3U;
	int32_t t88 = -2011307;

	t88 = (x365+(x366<=(x367<=x368)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x369 = 1;
	static int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MIN;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t89 = 16;

	t89 = (x369+(x370<=(x371<=x372)));

	if (t89 != 2) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x373 = 702903009992965972LLU;
	int16_t x374 = -1;
	int8_t x375 = INT8_MAX;
	int16_t x376 = -4869;

	t90 = (x373+(x374<=(x375<=x376)));

	if (t90 != 702903009992965973LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = -79942419;
	int64_t x379 = -235960LL;
	int8_t x380 = 0;
	volatile int32_t t91 = 0;

	t91 = (x377+(x378<=(x379<=x380)));

	if (t91 != -79942418) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x383 = 18424569U;
	static int64_t x384 = INT64_MAX;
	int32_t t92 = -412151;

	t92 = (x381+(x382<=(x383<=x384)));

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x386 = INT32_MAX;
	int8_t x387 = INT8_MAX;
	static int64_t x388 = -1LL;
	uint32_t t93 = UINT32_MAX;

	t93 = (x385+(x386<=(x387<=x388)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x389 = 729;
	volatile int8_t x390 = 5;
	volatile uint8_t x391 = UINT8_MAX;
	uint8_t x392 = UINT8_MAX;

	t94 = (x389+(x390<=(x391<=x392)));

	if (t94 != 729) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int64_t x395 = INT64_MIN;
	int8_t x396 = INT8_MAX;

	t95 = (x393+(x394<=(x395<=x396)));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x398 = UINT8_MAX;
	int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MIN;
	static volatile int32_t t96 = 335066;

	t96 = (x397+(x398<=(x399<=x400)));

	if (t96 != 255) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x402 = 2033U;
	int32_t x403 = INT32_MIN;
	int8_t x404 = -1;

	t97 = (x401+(x402<=(x403<=x404)));

	if (t97 != -90596743543LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = INT8_MIN;
	volatile int16_t x406 = 1;
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 5638U;
	static int32_t t98 = -32880;

	t98 = (x405+(x406<=(x407<=x408)));

	if (t98 != -127) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x409 = 8314LLU;
	volatile uint64_t x410 = 12133458800LLU;
	uint16_t x412 = 134U;
	volatile uint64_t t99 = 1554775681189177801LLU;

	t99 = (x409+(x410<=(x411<=x412)));

	if (t99 != 8314LLU) { NG(); } else { ; }
	
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

