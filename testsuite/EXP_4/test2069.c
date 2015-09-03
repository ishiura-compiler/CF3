#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
int8_t x9 = -1;
uint32_t x16 = 28U;
static uint16_t x24 = 2U;
int8_t x35 = -1;
int32_t t7 = 574584;
int8_t x43 = INT8_MIN;
int8_t x46 = -1;
volatile int32_t x47 = INT32_MAX;
int16_t x48 = INT16_MAX;
volatile int32_t t10 = 0;
uint32_t x60 = 57015075U;
static volatile uint32_t x63 = UINT32_MAX;
uint32_t t14 = 126784U;
int32_t x67 = -1;
static int32_t t15 = -103418700;
uint32_t t16 = 3U;
static volatile int64_t t17 = -29043491884074594LL;
int8_t x83 = 0;
volatile int8_t x86 = 1;
volatile uint64_t t22 = 5646179461LLU;
static uint32_t x99 = 15965987U;
int16_t x100 = INT16_MIN;
int8_t x128 = 7;
uint32_t x129 = 259985250U;
uint32_t t29 = 404U;
static int64_t x142 = 813669703299773280LL;
volatile int16_t x146 = INT16_MIN;
volatile uint16_t x157 = UINT16_MAX;
int8_t x159 = 1;
int16_t x165 = INT16_MIN;
int32_t x168 = 1;
int64_t t38 = 1202548757236986LL;
volatile uint32_t x180 = 2332U;
uint32_t t40 = 494479U;
volatile int16_t x182 = INT16_MIN;
int16_t x184 = INT16_MAX;
int8_t x187 = INT8_MIN;
uint8_t x188 = 0U;
int32_t x197 = INT32_MIN;
uint32_t x203 = 316062569U;
int64_t t46 = -74551952162LL;
static int8_t x206 = INT8_MIN;
uint32_t x211 = 3155908U;
volatile int32_t t52 = -2603210;
uint32_t x234 = 98644U;
static uint64_t x236 = 607LLU;
uint8_t x242 = 14U;
volatile int64_t t56 = -495341745132339027LL;
int32_t x246 = -1;
uint64_t x248 = 2285404LLU;
static volatile int8_t x251 = INT8_MIN;
static volatile uint32_t x253 = 55147228U;
static int64_t x259 = -1LL;
volatile int64_t x260 = INT64_MAX;
static volatile int32_t x265 = INT32_MIN;
int16_t x268 = INT16_MAX;
volatile int64_t t62 = -1431LL;
uint16_t x272 = 103U;
int32_t x281 = -60;
static int16_t x284 = INT16_MIN;
static volatile uint32_t x285 = 3U;
static int16_t x287 = 4732;
int32_t x288 = -1543913;
int16_t x295 = 96;
volatile int64_t x301 = -1LL;
static uint32_t x307 = UINT32_MAX;
uint8_t x313 = 83U;
static int64_t x314 = -1LL;
static uint64_t x323 = 1677018210792222779LLU;
static int16_t x326 = INT16_MIN;
static int32_t x327 = -1;
int8_t x332 = 3;
uint64_t x339 = 11994216508LLU;
static int64_t t79 = -54824637LL;
volatile uint16_t x348 = 23U;
int16_t x354 = -3979;
uint8_t x358 = UINT8_MAX;
static int16_t x363 = INT16_MIN;
static int64_t x368 = INT64_MIN;
uint64_t x369 = 4245456397232571LLU;
volatile int8_t x370 = INT8_MIN;
uint64_t t86 = 76276LLU;
int8_t x377 = 1;
int8_t x379 = INT8_MAX;
static int32_t t88 = 6;
int32_t x387 = -1;
volatile int8_t x390 = INT8_MAX;
volatile uint64_t t92 = 190689037765991966LLU;
int8_t x401 = -27;
int16_t x403 = INT16_MAX;
int8_t x412 = -1;
volatile uint32_t x422 = 36652U;
uint8_t x425 = 106U;
int32_t x428 = INT32_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = 0U;
	static int8_t x3 = 1;
	int32_t t0 = INT32_MIN;

	t0 = (x1-(x2/(x3^x4)));

	if (t0 != INT32_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -3;
	int64_t x6 = INT64_MIN;
	int64_t x7 = INT64_MAX;
	int64_t x8 = -1940528LL;
	static volatile int64_t t1 = 41375437LL;

	t1 = (x5-(x6/(x7^x8)));

	if (t1 != -4LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x10 = -64;
	int32_t x11 = -710094;
	int8_t x12 = INT8_MIN;
	int32_t t2 = 411653;

	t2 = (x9-(x10/(x11^x12)));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -30;
	uint64_t x14 = 927911701LLU;
	int64_t x15 = 12791473586603LL;
	static volatile uint64_t t3 = 429547LLU;

	t3 = (x13-(x14/(x15^x16)));

	if (t3 != 18446744073709551586LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = UINT8_MAX;
	uint8_t x18 = 4U;
	int8_t x19 = -1;
	static int64_t x20 = INT64_MAX;
	static volatile int64_t t4 = -2079625LL;

	t4 = (x17-(x18/(x19^x20)));

	if (t4 != 255LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = 741908367245LLU;
	static int32_t x23 = INT32_MAX;
	volatile uint64_t t5 = 53154887068LLU;

	t5 = (x21-(x22/(x23^x24)));

	if (t5 != 18446744073709551270LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 0U;
	uint16_t x30 = UINT16_MAX;
	static volatile int64_t x31 = -1LL;
	uint16_t x32 = 24U;
	int64_t t6 = 4578532662777790904LL;

	t6 = (x29-(x30/(x31^x32)));

	if (t6 != 2621LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MAX;
	int8_t x36 = 9;

	t7 = (x33-(x34/(x35^x36)));

	if (t7 != 214748236) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x37 = 54U;
	uint8_t x38 = UINT8_MAX;
	volatile int16_t x39 = INT16_MAX;
	static int8_t x40 = -1;
	static int32_t t8 = -4939;

	t8 = (x37-(x38/(x39^x40)));

	if (t8 != 54) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MIN;
	int16_t x44 = INT16_MIN;
	static int32_t t9 = -239;

	t9 = (x41-(x42/(x43^x44)));

	if (t9 != 256) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;

	t10 = (x45-(x46/(x47^x48)));

	if (t10 != 65535) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int64_t x50 = -198483LL;
	uint16_t x51 = 3U;
	int32_t x52 = -38;
	volatile int64_t t11 = -30555901371202519LL;

	t11 = (x49-(x50/(x51^x52)));

	if (t11 != -4962LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 130387LLU;
	int8_t x54 = INT8_MIN;
	int16_t x55 = -16;
	int16_t x56 = -744;
	uint64_t t12 = 578739094138797367LLU;

	t12 = (x53-(x54/(x55^x56)));

	if (t12 != 130387LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = 20884U;
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MIN;
	int64_t t13 = -107569377854LL;

	t13 = (x57-(x58/(x59^x60)));

	if (t13 != 20884LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x61 = 1U;
	uint32_t x62 = 847441U;
	volatile int8_t x64 = -52;

	t14 = (x61-(x62/(x63^x64)));

	if (t14 != 4294950681U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x65 = -1;
	uint8_t x66 = 61U;
	static uint16_t x68 = 7U;

	t15 = (x65-(x66/(x67^x68)));

	if (t15 != 6) { NG(); } else { ; }
	
}

void f16(void) {
	static uint8_t x69 = 0U;
	uint32_t x70 = 33402151U;
	volatile int32_t x71 = 1;
	int16_t x72 = INT16_MIN;

	t16 = (x69-(x70/(x71^x72)));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = INT32_MAX;
	uint16_t x74 = 8486U;
	int64_t x75 = -1LL;
	static uint8_t x76 = 0U;

	t17 = (x73-(x74/(x75^x76)));

	if (t17 != 2147492133LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = UINT32_MAX;
	uint64_t x78 = 1456993811501550LLU;
	static int16_t x79 = INT16_MIN;
	uint8_t x80 = 0U;
	uint64_t t18 = 810751LLU;

	t18 = (x77-(x78/(x79^x80)));

	if (t18 != 4294967295LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 1536831356665165LL;
	uint32_t x82 = UINT32_MAX;
	static int16_t x84 = INT16_MIN;
	int64_t t19 = 167274214242993LL;

	t19 = (x81-(x82/(x83^x84)));

	if (t19 != 1536831356665164LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = INT8_MIN;
	volatile int32_t x87 = -1;
	int64_t x88 = 209969380513175881LL;
	static int64_t t20 = -1782902030797077951LL;

	t20 = (x85-(x86/(x87^x88)));

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -3;
	int32_t x90 = INT32_MAX;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;
	int32_t t21 = 179354;

	t21 = (x89-(x90/(x91^x92)));

	if (t21 != -65796) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 290541475935LLU;
	volatile int8_t x94 = INT8_MIN;
	volatile uint16_t x95 = UINT16_MAX;
	volatile uint16_t x96 = 126U;

	t22 = (x93-(x94/(x95^x96)));

	if (t22 != 290541475935LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -1;
	uint32_t x98 = UINT32_MAX;
	volatile uint32_t t23 = 137989001U;

	t23 = (x97-(x98/(x99^x100)));

	if (t23 != 4294967294U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MIN;
	uint64_t x110 = 10708189058LLU;
	int16_t x111 = INT16_MAX;
	uint8_t x112 = 9U;
	volatile uint64_t t24 = 11331481LLU;

	t24 = (x109-(x110/(x111^x112)));

	if (t24 != 9223372036854448921LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	uint8_t x114 = UINT8_MAX;
	static int32_t x115 = INT32_MIN;
	volatile uint16_t x116 = UINT16_MAX;
	static volatile int32_t t25 = 1913852;

	t25 = (x113-(x114/(x115^x116)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x117 = -1LL;
	int8_t x118 = -1;
	volatile uint32_t x119 = 1508027U;
	int64_t x120 = 42651LL;
	volatile int64_t t26 = -55156180LL;

	t26 = (x117-(x118/(x119^x120)));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int8_t x122 = INT8_MAX;
	static uint64_t x123 = 44795393192796009LLU;
	int8_t x124 = -1;
	uint64_t t27 = 14032183647090LLU;

	t27 = (x121-(x122/(x123^x124)));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = 638;
	volatile int8_t x126 = INT8_MIN;
	int16_t x127 = -14470;
	int32_t t28 = -1191;

	t28 = (x125-(x126/(x127^x128)));

	if (t28 != 638) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x130 = 0U;
	static int8_t x131 = -1;
	static volatile int16_t x132 = INT16_MIN;

	t29 = (x129-(x130/(x131^x132)));

	if (t29 != 259985250U) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x133 = 523U;
	int64_t x134 = -1LL;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = INT8_MAX;
	volatile int64_t t30 = -28078569LL;

	t30 = (x133-(x134/(x135^x136)));

	if (t30 != 523LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x137 = 6U;
	uint16_t x138 = UINT16_MAX;
	int8_t x139 = INT8_MIN;
	uint8_t x140 = 19U;
	int32_t t31 = 570141;

	t31 = (x137-(x138/(x139^x140)));

	if (t31 != 607) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = -4;
	int8_t x143 = -7;
	uint64_t x144 = 1568LLU;
	volatile uint64_t t32 = 92LLU;

	t32 = (x141-(x142/(x143^x144)));

	if (t32 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x145 = 8;
	volatile uint64_t x147 = UINT64_MAX;
	static int32_t x148 = INT32_MAX;
	volatile uint64_t t33 = 266001540481332256LLU;

	t33 = (x145-(x146/(x147^x148)));

	if (t33 != 7LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x149 = UINT16_MAX;
	int8_t x150 = -1;
	volatile int64_t x151 = 5384062383LL;
	int32_t x152 = INT32_MIN;
	static volatile int64_t t34 = 21381686LL;

	t34 = (x149-(x150/(x151^x152)));

	if (t34 != 65535LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = UINT64_MAX;
	static int32_t x155 = INT32_MIN;
	int16_t x156 = 138;
	static volatile uint64_t t35 = 10374531LLU;

	t35 = (x153-(x154/(x155^x156)));

	if (t35 != 4294967294LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x158 = INT16_MIN;
	int32_t x160 = INT32_MIN;
	volatile int32_t t36 = 0;

	t36 = (x157-(x158/(x159^x160)));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x161 = 242747924U;
	int16_t x162 = 346;
	int32_t x163 = INT32_MAX;
	int16_t x164 = -1;
	static uint32_t t37 = 209516U;

	t37 = (x161-(x162/(x163^x164)));

	if (t37 != 242747924U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x166 = INT8_MIN;
	int64_t x167 = INT64_MAX;

	t38 = (x165-(x166/(x167^x168)));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = -1;
	int8_t x174 = INT8_MIN;
	uint32_t x175 = 930707U;
	int16_t x176 = INT16_MIN;
	uint32_t t39 = 82346959U;

	t39 = (x173-(x174/(x175^x176)));

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = 31696U;
	uint8_t x178 = UINT8_MAX;
	uint8_t x179 = 1U;

	t40 = (x177-(x178/(x179^x180)));

	if (t40 != 31696U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = 0;
	int64_t x183 = INT64_MIN;
	volatile int64_t t41 = 14LL;

	t41 = (x181-(x182/(x183^x184)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = -1;
	int8_t x186 = -33;
	volatile int32_t t42 = -1758;

	t42 = (x185-(x186/(x187^x188)));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 1U;
	int16_t x190 = -1;
	static uint32_t x191 = 13316044U;
	uint16_t x192 = 980U;
	volatile uint32_t t43 = 61U;

	t43 = (x189-(x190/(x191^x192)));

	if (t43 != 4294966975U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x193 = -10245;
	int16_t x194 = 401;
	static int16_t x195 = 523;
	static int32_t x196 = -2999;
	volatile int32_t t44 = 204269400;

	t44 = (x193-(x194/(x195^x196)));

	if (t44 != -10245) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x198 = 23949LL;
	int64_t x199 = INT64_MIN;
	int32_t x200 = INT32_MIN;
	volatile int64_t t45 = -1636982628LL;

	t45 = (x197-(x198/(x199^x200)));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = INT16_MIN;
	volatile uint16_t x202 = UINT16_MAX;
	int64_t x204 = -1LL;

	t46 = (x201-(x202/(x203^x204)));

	if (t46 != -32768LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x205 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	static uint8_t x208 = 5U;
	volatile int32_t t47 = -938;

	t47 = (x205-(x206/(x207^x208)));

	if (t47 != 65534) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x209 = INT16_MIN;
	static volatile uint64_t x210 = 105873344221887327LLU;
	volatile int16_t x212 = INT16_MIN;
	uint64_t t48 = 30LLU;

	t48 = (x209-(x210/(x211^x212)));

	if (t48 != 18446744073684850092LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = 1;
	uint32_t x214 = UINT32_MAX;
	volatile uint32_t x215 = UINT32_MAX;
	static int16_t x216 = INT16_MAX;
	volatile uint32_t t49 = 97552983U;

	t49 = (x213-(x214/(x215^x216)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x217 = 73084658U;
	static int16_t x218 = 1570;
	int32_t x219 = INT32_MAX;
	uint8_t x220 = 93U;
	volatile uint32_t t50 = 381U;

	t50 = (x217-(x218/(x219^x220)));

	if (t50 != 73084658U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x221 = 2309U;
	volatile int32_t x222 = 362;
	int64_t x223 = INT64_MIN;
	int64_t x224 = 1811759785672952863LL;
	static volatile int64_t t51 = 997815304LL;

	t51 = (x221-(x222/(x223^x224)));

	if (t51 != 2309LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = 47U;
	int32_t x226 = INT32_MAX;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -1;

	t52 = (x225-(x226/(x227^x228)));

	if (t52 != 32814) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = INT16_MIN;
	int64_t x230 = INT64_MIN;
	int64_t x231 = -390LL;
	uint32_t x232 = UINT32_MAX;
	static int64_t t53 = -132145LL;

	t53 = (x229-(x230/(x231^x232)));

	if (t53 != -2147516610LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x233 = INT16_MIN;
	int32_t x235 = INT32_MIN;
	uint64_t t54 = 13321499322LLU;

	t54 = (x233-(x234/(x235^x236)));

	if (t54 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = 0;
	int64_t x238 = -4409272693522LL;
	int64_t x239 = INT64_MIN;
	static volatile int32_t x240 = INT32_MIN;
	int64_t t55 = 335886619LL;

	t55 = (x237-(x238/(x239^x240)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x241 = 1487U;
	static volatile int8_t x243 = INT8_MIN;
	int64_t x244 = 101993349246611090LL;

	t56 = (x241-(x242/(x243^x244)));

	if (t56 != 1487LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x245 = INT64_MAX;
	static uint16_t x247 = 786U;
	volatile uint64_t t57 = 2937LLU;

	t57 = (x245-(x246/(x247^x248)));

	if (t57 != 9223363962545733126LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = 2108329135030LLU;
	int32_t x250 = INT32_MIN;
	static int64_t x252 = 249995860LL;
	volatile uint64_t t58 = 49LLU;

	t58 = (x249-(x250/(x251^x252)));

	if (t58 != 2108329135022LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x254 = 0;
	volatile uint8_t x255 = UINT8_MAX;
	int16_t x256 = INT16_MIN;
	volatile uint32_t t59 = 7612402U;

	t59 = (x253-(x254/(x255^x256)));

	if (t59 != 55147228U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = UINT16_MAX;
	int32_t x258 = -1;
	volatile int64_t t60 = 6743390LL;

	t60 = (x257-(x258/(x259^x260)));

	if (t60 != 65535LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = -1LL;
	static uint8_t x262 = 14U;
	volatile int64_t x263 = -1LL;
	uint8_t x264 = 3U;
	volatile int64_t t61 = -393315369LL;

	t61 = (x261-(x262/(x263^x264)));

	if (t61 != 2LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x266 = 45838028604LL;
	uint32_t x267 = UINT32_MAX;

	t62 = (x265-(x266/(x267^x268)));

	if (t62 != -2147483658LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	int8_t x270 = -1;
	static uint32_t x271 = 180328145U;
	uint32_t t63 = 249310U;

	t63 = (x269-(x270/(x271^x272)));

	if (t63 != 2147483624U) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x277 = INT16_MAX;
	uint8_t x278 = 4U;
	int16_t x279 = INT16_MIN;
	int8_t x280 = -1;
	volatile int32_t t64 = -116720635;

	t64 = (x277-(x278/(x279^x280)));

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x282 = 0U;
	int64_t x283 = 1716750532059518LL;
	static volatile int64_t t65 = -72LL;

	t65 = (x281-(x282/(x283^x284)));

	if (t65 != -60LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x286 = 13;
	uint32_t t66 = 31U;

	t66 = (x285-(x286/(x287^x288)));

	if (t66 != 3U) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x289 = UINT8_MAX;
	static volatile int32_t x290 = -1;
	static int16_t x291 = INT16_MIN;
	int64_t x292 = INT64_MIN;
	int64_t t67 = -1LL;

	t67 = (x289-(x290/(x291^x292)));

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = -53;
	int8_t x294 = -2;
	uint32_t x296 = 48U;
	volatile uint32_t t68 = 0U;

	t68 = (x293-(x294/(x295^x296)));

	if (t68 != 4241280152U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x297 = UINT64_MAX;
	volatile int16_t x298 = INT16_MAX;
	int8_t x299 = INT8_MIN;
	int16_t x300 = INT16_MAX;
	uint64_t t69 = 518571361477463LLU;

	t69 = (x297-(x298/(x299^x300)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x302 = 8749805040167992LL;
	int16_t x303 = INT16_MIN;
	int64_t x304 = INT64_MAX;
	int64_t t70 = 71LL;

	t70 = (x301-(x302/(x303^x304)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = INT32_MAX;
	int32_t x306 = 1708280;
	uint64_t x308 = UINT64_MAX;
	static uint64_t t71 = 29337LLU;

	t71 = (x305-(x306/(x307^x308)));

	if (t71 != 2147483647LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x315 = INT8_MIN;
	int16_t x316 = INT16_MAX;
	volatile int64_t t72 = 4108574575LL;

	t72 = (x313-(x314/(x315^x316)));

	if (t72 != 83LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x317 = 676500348797135951LLU;
	int64_t x318 = -1LL;
	int16_t x319 = -12;
	int16_t x320 = -1;
	volatile uint64_t t73 = 73102647LLU;

	t73 = (x317-(x318/(x319^x320)));

	if (t73 != 676500348797135951LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -1;
	static volatile uint32_t x322 = 22961U;
	int16_t x324 = -1;
	uint64_t t74 = UINT64_MAX;

	t74 = (x321-(x322/(x323^x324)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x325 = 22662964961342530LLU;
	int32_t x328 = INT32_MIN;
	uint64_t t75 = 13730230051433LLU;

	t75 = (x325-(x326/(x327^x328)));

	if (t75 != 22662964961342530LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x329 = 333U;
	int64_t x330 = INT64_MAX;
	volatile uint64_t x331 = 4LLU;
	volatile uint64_t t76 = 205774620223632LLU;

	t76 = (x329-(x330/(x331^x332)));

	if (t76 != 17129119497016012548LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x333 = INT16_MAX;
	int16_t x334 = INT16_MIN;
	static int16_t x335 = -40;
	static uint8_t x336 = 10U;
	int32_t t77 = 7051;

	t77 = (x333-(x334/(x335^x336)));

	if (t77 != 32055) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x337 = 14U;
	static int64_t x338 = -3042129647877979LL;
	int8_t x340 = -1;
	uint64_t t78 = 397783508073199496LLU;

	t78 = (x337-(x338/(x339^x340)));

	if (t78 != 14LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x341 = -1;
	static uint8_t x342 = 7U;
	static volatile int64_t x343 = INT64_MIN;
	int8_t x344 = -1;

	t79 = (x341-(x342/(x343^x344)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 24U;
	uint16_t x346 = 48U;
	int16_t x347 = INT16_MAX;
	volatile int32_t t80 = -794561;

	t80 = (x345-(x346/(x347^x348)));

	if (t80 != 24) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x349 = 134832485042565426LLU;
	static uint64_t x350 = 42002102586471LLU;
	int16_t x351 = INT16_MAX;
	uint32_t x352 = UINT32_MAX;
	uint64_t t81 = 529099077884109LLU;

	t81 = (x349-(x350/(x351^x352)));

	if (t81 != 134832485042555647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x353 = 1;
	int64_t x355 = -1362223197094LL;
	static int8_t x356 = INT8_MAX;
	volatile int64_t t82 = -13378LL;

	t82 = (x353-(x354/(x355^x356)));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x357 = -1;
	int8_t x359 = 0;
	int8_t x360 = INT8_MAX;
	int32_t t83 = 2862;

	t83 = (x357-(x358/(x359^x360)));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = UINT64_MAX;
	volatile uint32_t x362 = 114273946U;
	int64_t x364 = INT64_MIN;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = (x361-(x362/(x363^x364)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MIN;
	uint8_t x367 = 26U;
	volatile int64_t t85 = -160LL;

	t85 = (x365-(x366/(x367^x368)));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x371 = INT32_MAX;
	volatile int16_t x372 = INT16_MIN;

	t86 = (x369-(x370/(x371^x372)));

	if (t86 != 4245456397232571LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x373 = 452LLU;
	static uint16_t x374 = 1494U;
	int64_t x375 = -159779017LL;
	int16_t x376 = -1;
	static volatile uint64_t t87 = 4853162423195903375LLU;

	t87 = (x373-(x374/(x375^x376)));

	if (t87 != 452LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x378 = 7U;
	int8_t x380 = INT8_MIN;

	t88 = (x377-(x378/(x379^x380)));

	if (t88 != 8) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x385 = 5U;
	int64_t x386 = -1LL;
	uint8_t x388 = 69U;
	static int64_t t89 = 142833056412229LL;

	t89 = (x385-(x386/(x387^x388)));

	if (t89 != 5LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x389 = INT64_MAX;
	static volatile int8_t x391 = -1;
	int16_t x392 = -27;
	volatile int64_t t90 = -1539371997LL;

	t90 = (x389-(x390/(x391^x392)));

	if (t90 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = -1;
	uint64_t x394 = 14920289LLU;
	int64_t x395 = INT64_MIN;
	static volatile int16_t x396 = -1;
	volatile uint64_t t91 = UINT64_MAX;

	t91 = (x393-(x394/(x395^x396)));

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x397 = 8722533911053191795LLU;
	int8_t x398 = 24;
	int8_t x399 = -57;
	uint64_t x400 = 8272690149306330LLU;

	t92 = (x397-(x398/(x399^x400)));

	if (t92 != 8722533911053191795LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x402 = INT16_MAX;
	int32_t x404 = -60210;
	int32_t t93 = -5000968;

	t93 = (x401-(x402/(x403^x404)));

	if (t93 != -27) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x405 = -5973536;
	static uint64_t x406 = 97LLU;
	int64_t x407 = -1LL;
	volatile int64_t x408 = 772287LL;
	uint64_t t94 = 140493079194117498LLU;

	t94 = (x405-(x406/(x407^x408)));

	if (t94 != 18446744073703578080LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x409 = INT16_MAX;
	uint8_t x410 = UINT8_MAX;
	uint8_t x411 = 3U;
	volatile int32_t t95 = -21335036;

	t95 = (x409-(x410/(x411^x412)));

	if (t95 != 32830) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -47;
	int16_t x414 = INT16_MIN;
	int32_t x415 = 763;
	uint64_t x416 = 59658346LLU;
	uint64_t t96 = 1093629767863LLU;

	t96 = (x413-(x414/(x415^x416)));

	if (t96 != 18446743764505979239LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x417 = 33U;
	int32_t x418 = INT32_MAX;
	uint32_t x419 = 1342U;
	volatile uint16_t x420 = UINT16_MAX;
	volatile uint32_t t97 = 52810U;

	t97 = (x417-(x418/(x419^x420)));

	if (t97 != 4294933876U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MAX;
	volatile int16_t x423 = INT16_MIN;
	int8_t x424 = INT8_MAX;
	uint32_t t98 = 6663355U;

	t98 = (x421-(x422/(x423^x424)));

	if (t98 != 127U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x426 = INT32_MIN;
	int64_t x427 = INT64_MAX;
	volatile int64_t t99 = 3351483338400124161LL;

	t99 = (x425-(x426/(x427^x428)));

	if (t99 != 106LL) { NG(); } else { ; }
	
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

