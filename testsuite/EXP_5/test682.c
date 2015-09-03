#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x182 = -1;
uint32_t x397 = 236209U;
volatile uint32_t t3 = 3534U;
static volatile int32_t t4 = 0;
uint16_t x602 = 22189U;
uint8_t x603 = 22U;
int16_t x1217 = INT16_MAX;
uint64_t x1219 = 4546LLU;
static volatile int64_t x1357 = INT64_MAX;
int16_t x1358 = INT16_MAX;
uint8_t x1360 = 0U;
uint8_t x1625 = 7U;
int8_t x1626 = INT8_MIN;
volatile uint64_t t17 = 279185324620961LLU;
volatile int16_t x2221 = 1976;
int32_t t18 = -2;
volatile int32_t t19 = 201;
int32_t x2595 = INT32_MAX;
int64_t x2979 = -17280LL;
volatile uint64_t t23 = 515964054173057LLU;
int32_t t24 = -915;
int64_t x3289 = 24279636611LL;
volatile int64_t x3292 = 9LL;
uint64_t x3313 = 278995LLU;
int16_t x3342 = -374;
volatile int32_t t28 = 52;
static uint8_t x3558 = 123U;
int32_t t29 = -30639;
static uint16_t x3670 = 146U;
int8_t x3754 = -2;
static int64_t x3755 = INT64_MIN;
uint64_t x3829 = 5823805832289270418LLU;
volatile uint8_t x3929 = 3U;
int16_t x3932 = -1;
int32_t t35 = 46413;
uint32_t x3941 = 1290929U;
uint32_t t37 = 110644U;
static int32_t x4138 = INT32_MIN;
int32_t t40 = 7164137;
uint32_t x4239 = 39712U;
volatile uint64_t x4370 = UINT64_MAX;
uint32_t x4372 = 13U;
int16_t x4779 = INT16_MIN;
int16_t x4934 = -1;
static uint64_t x4954 = UINT64_MAX;
int16_t x5027 = INT16_MIN;
uint8_t x5028 = 28U;
int16_t x5134 = INT16_MIN;
int8_t x5135 = INT8_MIN;
int32_t t53 = -345870;
volatile int16_t x5374 = INT16_MAX;
uint64_t x5397 = 3236831172LLU;
static volatile int16_t x5458 = -14;
volatile int32_t t58 = 113;
int8_t x5670 = -1;
int32_t t61 = INT32_MAX;
volatile uint8_t x5839 = 84U;
static int16_t x5914 = INT16_MIN;
int16_t x5915 = INT16_MIN;
volatile int64_t t64 = 62LL;
int64_t x6004 = -1LL;
int32_t x6152 = 2;
static uint32_t t66 = 1583948U;
volatile int16_t x6240 = 0;
uint64_t x6509 = UINT64_MAX;
static int32_t x6545 = 155061;
volatile uint16_t x6576 = 11U;
static volatile int8_t x6615 = -5;
volatile uint64_t x7042 = UINT64_MAX;
volatile uint8_t x7194 = UINT8_MAX;
volatile int8_t x7243 = INT8_MIN;
uint64_t x7265 = UINT64_MAX;
int16_t x7266 = 1;
static int32_t x7268 = -1;
uint64_t t79 = UINT64_MAX;
uint16_t x7292 = 14U;
int8_t x7312 = -18;
volatile uint64_t x7848 = UINT64_MAX;
uint16_t x8082 = 5U;
int8_t x8084 = 3;
static int16_t x8369 = 37;
int32_t t91 = 7;
int16_t x8836 = 26;
uint8_t x8846 = 25U;
volatile int32_t x8848 = -5;
uint16_t x8991 = UINT16_MAX;
int8_t x9068 = -1;
uint64_t t98 = 1616LLU;
uint64_t x9073 = UINT64_MAX;
volatile int32_t x9074 = INT32_MAX;


void f0(void) {
	uint64_t x37 = UINT64_MAX;
	uint8_t x38 = UINT8_MAX;
	int16_t x39 = -35;
	int8_t x40 = 6;
	volatile uint64_t t0 = 49578LLU;

	t0 = (x37<<((x38%x39)+x40));

	if (t0 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x181 = 43U;
	uint16_t x183 = 29U;
	uint32_t x184 = 1U;
	int32_t t1 = -85;

	t1 = (x181<<((x182%x183)+x184));

	if (t1 != 43) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x361 = 0;
	static volatile uint8_t x362 = 5U;
	int16_t x363 = -3278;
	uint8_t x364 = 1U;
	int32_t t2 = -225217037;

	t2 = (x361<<((x362%x363)+x364));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x398 = 3U;
	static int64_t x399 = INT64_MAX;
	int8_t x400 = -1;

	t3 = (x397<<((x398%x399)+x400));

	if (t3 != 944836U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x425 = 7019U;
	int64_t x426 = 1214946735611LL;
	int8_t x427 = 5;
	int32_t x428 = -1;

	t4 = (x425<<((x426%x427)+x428));

	if (t4 != 7019) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x601 = 0;
	static int8_t x604 = -1;
	int32_t t5 = -19798;

	t5 = (x601<<((x602%x603)+x604));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x613 = 348632789U;
	int16_t x614 = INT16_MIN;
	static volatile uint8_t x615 = 1U;
	uint8_t x616 = 4U;
	uint32_t t6 = 170815U;

	t6 = (x613<<((x614%x615)+x616));

	if (t6 != 1283157328U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x957 = 1;
	int32_t x958 = 43189;
	int8_t x959 = INT8_MAX;
	int16_t x960 = -1;
	int32_t t7 = -1094;

	t7 = (x957<<((x958%x959)+x960));

	if (t7 != 256) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x1065 = 1;
	uint32_t x1066 = UINT32_MAX;
	volatile uint8_t x1067 = UINT8_MAX;
	uint8_t x1068 = 0U;
	int32_t t8 = 238;

	t8 = (x1065<<((x1066%x1067)+x1068));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x1133 = UINT8_MAX;
	int64_t x1134 = INT64_MAX;
	static int64_t x1135 = -1LL;
	int64_t x1136 = 6LL;
	int32_t t9 = -3853;

	t9 = (x1133<<((x1134%x1135)+x1136));

	if (t9 != 16320) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x1218 = 1U;
	uint64_t x1220 = UINT64_MAX;
	volatile int32_t t10 = -82;

	t10 = (x1217<<((x1218%x1219)+x1220));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x1233 = UINT32_MAX;
	volatile int64_t x1234 = INT64_MAX;
	uint8_t x1235 = 6U;
	static volatile int8_t x1236 = -1;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x1233<<((x1234%x1235)+x1236));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x1353 = INT16_MAX;
	uint32_t x1354 = 0U;
	static int8_t x1355 = 2;
	static int8_t x1356 = 0;
	volatile int32_t t12 = 22541254;

	t12 = (x1353<<((x1354%x1355)+x1356));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x1359 = -1;
	volatile int64_t t13 = INT64_MAX;

	t13 = (x1357<<((x1358%x1359)+x1360));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x1627 = -11;
	int8_t x1628 = 30;
	volatile int32_t t14 = -6;

	t14 = (x1625<<((x1626%x1627)+x1628));

	if (t14 != 58720256) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x1777 = 37088LLU;
	volatile uint8_t x1778 = 1U;
	volatile int64_t x1779 = -368LL;
	int8_t x1780 = 25;
	volatile uint64_t t15 = 118935754218LLU;

	t15 = (x1777<<((x1778%x1779)+x1780));

	if (t15 != 2488933548032LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x1821 = 191LLU;
	static int16_t x1822 = -1;
	int64_t x1823 = -8953700LL;
	int8_t x1824 = 1;
	volatile uint64_t t16 = 21164356016566LLU;

	t16 = (x1821<<((x1822%x1823)+x1824));

	if (t16 != 191LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x1953 = UINT64_MAX;
	static int16_t x1954 = INT16_MIN;
	int16_t x1955 = -1;
	uint8_t x1956 = 1U;

	t17 = (x1953<<((x1954%x1955)+x1956));

	if (t17 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x2222 = 9;
	uint64_t x2223 = 10831LLU;
	uint8_t x2224 = 6U;

	t18 = (x2221<<((x2222%x2223)+x2224));

	if (t18 != 64749568) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x2545 = 2U;
	int32_t x2546 = INT32_MIN;
	volatile int16_t x2547 = INT16_MIN;
	int8_t x2548 = 18;

	t19 = (x2545<<((x2546%x2547)+x2548));

	if (t19 != 524288) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x2569 = 95561U;
	uint16_t x2570 = UINT16_MAX;
	volatile uint32_t x2571 = 1129U;
	static int16_t x2572 = -23;
	uint32_t t20 = 1148584600U;

	t20 = (x2569<<((x2570%x2571)+x2572));

	if (t20 != 1073741824U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x2593 = 6U;
	volatile int64_t x2594 = INT64_MAX;
	int8_t x2596 = -1;
	int32_t t21 = 0;

	t21 = (x2593<<((x2594%x2595)+x2596));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x2857 = 3600544629430LL;
	volatile int16_t x2858 = -1;
	uint16_t x2859 = 3U;
	uint16_t x2860 = 2U;
	volatile int64_t t22 = 23842097249841879LL;

	t22 = (x2857<<((x2858%x2859)+x2860));

	if (t22 != 7201089258860LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2977 = 60061934287849LLU;
	static int64_t x2978 = -1LL;
	uint16_t x2980 = 40U;

	t23 = (x2977<<((x2978%x2979)+x2980));

	if (t23 != 2377325008914481152LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x3197 = UINT8_MAX;
	uint8_t x3198 = 0U;
	int8_t x3199 = INT8_MIN;
	static uint32_t x3200 = 6U;

	t24 = (x3197<<((x3198%x3199)+x3200));

	if (t24 != 16320) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x3290 = 2U;
	static int8_t x3291 = INT8_MIN;
	volatile int64_t t25 = -134171692383LL;

	t25 = (x3289<<((x3290%x3291)+x3292));

	if (t25 != 49724695779328LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x3314 = -1;
	int64_t x3315 = INT64_MIN;
	int16_t x3316 = 57;
	volatile uint64_t t26 = 89268685725LLU;

	t26 = (x3313<<((x3314%x3315)+x3316));

	if (t26 != 15204152342002794496LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x3341 = 17;
	int16_t x3343 = -1;
	volatile uint32_t x3344 = 14U;
	volatile int32_t t27 = 0;

	t27 = (x3341<<((x3342%x3343)+x3344));

	if (t27 != 278528) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x3401 = 1;
	static volatile int32_t x3402 = -1;
	int32_t x3403 = -9551379;
	int8_t x3404 = 1;

	t28 = (x3401<<((x3402%x3403)+x3404));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x3557 = UINT16_MAX;
	int32_t x3559 = -1;
	volatile int8_t x3560 = 1;

	t29 = (x3557<<((x3558%x3559)+x3560));

	if (t29 != 131070) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x3669 = 309;
	int8_t x3671 = -35;
	int32_t x3672 = -1;
	int32_t t30 = -87229;

	t30 = (x3669<<((x3670%x3671)+x3672));

	if (t30 != 9888) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x3705 = 12475328229566364LL;
	int8_t x3706 = -25;
	static int8_t x3707 = -1;
	int16_t x3708 = 7;
	volatile int64_t t31 = 11478990156526LL;

	t31 = (x3705<<((x3706%x3707)+x3708));

	if (t31 != 1596842013384494592LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x3753 = UINT64_MAX;
	volatile uint8_t x3756 = 28U;
	volatile uint64_t t32 = 23292192454LLU;

	t32 = (x3753<<((x3754%x3755)+x3756));

	if (t32 != 18446744073642442752LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x3830 = UINT8_MAX;
	static int8_t x3831 = INT8_MAX;
	int16_t x3832 = -1;
	uint64_t t33 = 1216LLU;

	t33 = (x3829<<((x3830%x3831)+x3832));

	if (t33 != 5823805832289270418LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x3881 = 1U;
	volatile uint16_t x3882 = 3538U;
	int32_t x3883 = -1;
	volatile uint16_t x3884 = 7U;
	uint32_t t34 = 35204U;

	t34 = (x3881<<((x3882%x3883)+x3884));

	if (t34 != 128U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x3930 = 5U;
	static int16_t x3931 = INT16_MIN;

	t35 = (x3929<<((x3930%x3931)+x3932));

	if (t35 != 48) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x3942 = UINT8_MAX;
	static volatile int8_t x3943 = -1;
	volatile int8_t x3944 = 2;
	volatile uint32_t t36 = 131097083U;

	t36 = (x3941<<((x3942%x3943)+x3944));

	if (t36 != 5163716U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x3977 = 0U;
	static int32_t x3978 = -45;
	int16_t x3979 = -1;
	volatile int16_t x3980 = 2;

	t37 = (x3977<<((x3978%x3979)+x3980));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x4021 = UINT64_MAX;
	volatile int8_t x4022 = 18;
	volatile uint16_t x4023 = 3U;
	volatile uint8_t x4024 = 0U;
	uint64_t t38 = UINT64_MAX;

	t38 = (x4021<<((x4022%x4023)+x4024));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x4137 = 29U;
	int16_t x4139 = 1;
	uint8_t x4140 = 0U;
	volatile int32_t t39 = -7;

	t39 = (x4137<<((x4138%x4139)+x4140));

	if (t39 != 29) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x4153 = 814U;
	static volatile int64_t x4154 = 1866053LL;
	volatile uint64_t x4155 = 2LLU;
	volatile int16_t x4156 = 0;

	t40 = (x4153<<((x4154%x4155)+x4156));

	if (t40 != 1628) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x4237 = 877;
	static int8_t x4238 = 3;
	int16_t x4240 = 1;
	volatile int32_t t41 = 151;

	t41 = (x4237<<((x4238%x4239)+x4240));

	if (t41 != 14032) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x4369 = 764891U;
	int8_t x4371 = -1;
	volatile uint32_t t42 = 486354U;

	t42 = (x4369<<((x4370%x4371)+x4372));

	if (t42 != 1971019776U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x4401 = INT16_MAX;
	int32_t x4402 = INT32_MIN;
	uint16_t x4403 = 3U;
	int16_t x4404 = 10;
	volatile int32_t t43 = 17020018;

	t43 = (x4401<<((x4402%x4403)+x4404));

	if (t43 != 8388352) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x4581 = 1029792100211632LLU;
	volatile int64_t x4582 = 17LL;
	volatile int8_t x4583 = INT8_MIN;
	uint64_t x4584 = UINT64_MAX;
	volatile uint64_t t44 = 154340224054644LLU;

	t44 = (x4581<<((x4582%x4583)+x4584));

	if (t44 != 12148222858340859904LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x4713 = UINT64_MAX;
	int16_t x4714 = 6188;
	uint8_t x4715 = 20U;
	int32_t x4716 = -1;
	static uint64_t t45 = 133822563LLU;

	t45 = (x4713<<((x4714%x4715)+x4716));

	if (t45 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x4777 = UINT64_MAX;
	uint8_t x4778 = 3U;
	uint8_t x4780 = 0U;
	static volatile uint64_t t46 = 811576150293328553LLU;

	t46 = (x4777<<((x4778%x4779)+x4780));

	if (t46 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x4861 = 5U;
	uint16_t x4862 = 11U;
	uint64_t x4863 = 2767937570LLU;
	int64_t x4864 = -1LL;
	uint32_t t47 = 1636U;

	t47 = (x4861<<((x4862%x4863)+x4864));

	if (t47 != 5120U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x4933 = 1U;
	volatile int32_t x4935 = -1433270;
	int8_t x4936 = 29;
	int32_t t48 = -11;

	t48 = (x4933<<((x4934%x4935)+x4936));

	if (t48 != 268435456) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x4953 = UINT16_MAX;
	uint8_t x4955 = 99U;
	uint64_t x4956 = UINT64_MAX;
	int32_t t49 = -24846;

	t49 = (x4953<<((x4954%x4955)+x4956));

	if (t49 != 1073725440) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x5025 = 6017U;
	int16_t x5026 = -1;
	uint32_t t50 = 682293363U;

	t50 = (x5025<<((x5026%x5027)+x5028));

	if (t50 != 134217728U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x5133 = UINT32_MAX;
	static int8_t x5136 = 3;
	volatile uint32_t t51 = 86U;

	t51 = (x5133<<((x5134%x5135)+x5136));

	if (t51 != 4294967288U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x5245 = 1645937998U;
	int32_t x5246 = -1;
	volatile int8_t x5247 = -1;
	uint16_t x5248 = 3U;
	volatile uint32_t t52 = 6096498U;

	t52 = (x5245<<((x5246%x5247)+x5248));

	if (t52 != 282602096U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x5309 = UINT16_MAX;
	static int32_t x5310 = -1;
	volatile int32_t x5311 = INT32_MIN;
	int8_t x5312 = 1;

	t53 = (x5309<<((x5310%x5311)+x5312));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x5373 = 3920;
	uint8_t x5375 = 6U;
	int32_t x5376 = -1;
	int32_t t54 = 0;

	t54 = (x5373<<((x5374%x5375)+x5376));

	if (t54 != 3920) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x5393 = 7143;
	int8_t x5394 = -1;
	uint16_t x5395 = 11090U;
	volatile int16_t x5396 = 1;
	static volatile int32_t t55 = -2131141;

	t55 = (x5393<<((x5394%x5395)+x5396));

	if (t55 != 7143) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x5398 = 9U;
	int16_t x5399 = INT16_MIN;
	int32_t x5400 = -1;
	uint64_t t56 = 562102123946809LLU;

	t56 = (x5397<<((x5398%x5399)+x5400));

	if (t56 != 828628780032LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x5457 = 138235LL;
	uint16_t x5459 = 8195U;
	int8_t x5460 = 57;
	volatile int64_t t57 = -158228628831LL;

	t57 = (x5457<<((x5458%x5459)+x5460));

	if (t57 != 1215927918924922880LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x5525 = UINT16_MAX;
	int8_t x5526 = -13;
	static int64_t x5527 = -3LL;
	uint8_t x5528 = 1U;

	t58 = (x5525<<((x5526%x5527)+x5528));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x5605 = 1U;
	uint16_t x5606 = 1U;
	int32_t x5607 = 49;
	uint8_t x5608 = 4U;
	int32_t t59 = -1;

	t59 = (x5605<<((x5606%x5607)+x5608));

	if (t59 != 32) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x5669 = 24322U;
	int8_t x5671 = 1;
	int8_t x5672 = 0;
	int32_t t60 = -128502;

	t60 = (x5669<<((x5670%x5671)+x5672));

	if (t60 != 24322) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x5741 = INT32_MAX;
	static int16_t x5742 = -1;
	int8_t x5743 = 1;
	int8_t x5744 = 0;

	t61 = (x5741<<((x5742%x5743)+x5744));

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x5837 = 3U;
	uint32_t x5838 = UINT32_MAX;
	static int16_t x5840 = -1;
	int32_t t62 = 66749588;

	t62 = (x5837<<((x5838%x5839)+x5840));

	if (t62 != 12) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x5889 = 3U;
	int16_t x5890 = 0;
	uint8_t x5891 = 4U;
	uint8_t x5892 = 3U;
	volatile int32_t t63 = -5598;

	t63 = (x5889<<((x5890%x5891)+x5892));

	if (t63 != 24) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x5913 = 911762688338LL;
	volatile int8_t x5916 = 1;

	t64 = (x5913<<((x5914%x5915)+x5916));

	if (t64 != 1823525376676LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x6001 = 0U;
	static int64_t x6002 = 102697214LL;
	int32_t x6003 = 44;
	int32_t t65 = 95;

	t65 = (x6001<<((x6002%x6003)+x6004));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x6149 = 22527U;
	int64_t x6150 = INT64_MIN;
	uint64_t x6151 = 2LLU;

	t66 = (x6149<<((x6150%x6151)+x6152));

	if (t66 != 90108U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x6237 = 281;
	uint8_t x6238 = UINT8_MAX;
	static int32_t x6239 = -1;
	int32_t t67 = -4;

	t67 = (x6237<<((x6238%x6239)+x6240));

	if (t67 != 281) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x6285 = 20U;
	uint8_t x6286 = UINT8_MAX;
	static uint16_t x6287 = 1U;
	int16_t x6288 = 13;
	volatile int32_t t68 = 34;

	t68 = (x6285<<((x6286%x6287)+x6288));

	if (t68 != 163840) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x6293 = INT16_MAX;
	int8_t x6294 = -1;
	volatile int32_t x6295 = -1;
	uint8_t x6296 = 0U;
	int32_t t69 = -7;

	t69 = (x6293<<((x6294%x6295)+x6296));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x6510 = INT16_MIN;
	int64_t x6511 = -1LL;
	int16_t x6512 = 0;
	static volatile uint64_t t70 = UINT64_MAX;

	t70 = (x6509<<((x6510%x6511)+x6512));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x6546 = 0;
	volatile int32_t x6547 = -1;
	static int8_t x6548 = 3;
	int32_t t71 = -2047128;

	t71 = (x6545<<((x6546%x6547)+x6548));

	if (t71 != 1240488) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x6573 = UINT8_MAX;
	volatile int64_t x6574 = -1LL;
	volatile int64_t x6575 = INT64_MIN;
	int32_t t72 = 17146;

	t72 = (x6573<<((x6574%x6575)+x6576));

	if (t72 != 261120) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint64_t x6613 = UINT64_MAX;
	static uint8_t x6614 = 17U;
	uint16_t x6616 = 3U;
	uint64_t t73 = 393981LLU;

	t73 = (x6613<<((x6614%x6615)+x6616));

	if (t73 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x6869 = 2U;
	int16_t x6870 = INT16_MAX;
	static volatile uint8_t x6871 = 10U;
	uint64_t x6872 = UINT64_MAX;
	static int32_t t74 = -28590;

	t74 = (x6869<<((x6870%x6871)+x6872));

	if (t74 != 128) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x7041 = 62U;
	int8_t x7043 = INT8_MAX;
	int16_t x7044 = -1;
	int32_t t75 = -184;

	t75 = (x7041<<((x7042%x7043)+x7044));

	if (t75 != 62) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x7109 = 349LLU;
	int8_t x7110 = 15;
	int32_t x7111 = -557;
	uint8_t x7112 = 2U;
	uint64_t t76 = 257708976218091304LLU;

	t76 = (x7109<<((x7110%x7111)+x7112));

	if (t76 != 45744128LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x7193 = INT32_MAX;
	int8_t x7195 = INT8_MAX;
	int32_t x7196 = -1;
	volatile int32_t t77 = INT32_MAX;

	t77 = (x7193<<((x7194%x7195)+x7196));

	if (t77 != INT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x7241 = 17U;
	int8_t x7242 = 25;
	static volatile int8_t x7244 = -1;
	volatile int32_t t78 = 40877946;

	t78 = (x7241<<((x7242%x7243)+x7244));

	if (t78 != 285212672) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x7267 = INT32_MIN;

	t79 = (x7265<<((x7266%x7267)+x7268));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x7289 = 146LLU;
	uint8_t x7290 = 1U;
	static uint64_t x7291 = 65LLU;
	uint64_t t80 = 1783598155LLU;

	t80 = (x7289<<((x7290%x7291)+x7292));

	if (t80 != 4784128LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x7309 = 6530572497863LL;
	uint8_t x7310 = 28U;
	int64_t x7311 = 329LL;
	volatile int64_t t81 = -32LL;

	t81 = (x7309<<((x7310%x7311)+x7312));

	if (t81 != 6687306237811712LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x7641 = 7083792U;
	int64_t x7642 = -1LL;
	int64_t x7643 = INT64_MIN;
	int8_t x7644 = 6;
	volatile uint32_t t82 = 780293U;

	t82 = (x7641<<((x7642%x7643)+x7644));

	if (t82 != 226681344U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x7845 = 26;
	volatile uint8_t x7846 = 10U;
	int8_t x7847 = INT8_MAX;
	volatile int32_t t83 = 388841053;

	t83 = (x7845<<((x7846%x7847)+x7848));

	if (t83 != 13312) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x7889 = 15LL;
	uint16_t x7890 = 503U;
	static int8_t x7891 = 1;
	uint8_t x7892 = 5U;
	int64_t t84 = -19486856841947324LL;

	t84 = (x7889<<((x7890%x7891)+x7892));

	if (t84 != 480LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x7925 = 392U;
	int8_t x7926 = INT8_MAX;
	volatile uint8_t x7927 = 4U;
	static int16_t x7928 = 2;
	uint32_t t85 = 5937488U;

	t85 = (x7925<<((x7926%x7927)+x7928));

	if (t85 != 12544U) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x8081 = 1235450U;
	int32_t x8083 = INT32_MIN;
	static uint32_t t86 = 28135U;

	t86 = (x8081<<((x8082%x8083)+x8084));

	if (t86 != 316275200U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x8257 = 23U;
	volatile int64_t x8258 = INT64_MAX;
	uint8_t x8259 = 52U;
	int16_t x8260 = 1;
	int32_t t87 = 188848;

	t87 = (x8257<<((x8258%x8259)+x8260));

	if (t87 != 5888) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x8281 = 1486U;
	uint16_t x8282 = UINT16_MAX;
	static int32_t x8283 = -1;
	uint64_t x8284 = 1LLU;
	static volatile int32_t t88 = -1057120;

	t88 = (x8281<<((x8282%x8283)+x8284));

	if (t88 != 2972) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x8370 = INT8_MIN;
	volatile uint64_t x8371 = 8LLU;
	int16_t x8372 = 1;
	int32_t t89 = -6421140;

	t89 = (x8369<<((x8370%x8371)+x8372));

	if (t89 != 74) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x8373 = 485787981301922379LLU;
	static uint32_t x8374 = UINT32_MAX;
	static int64_t x8375 = -1LL;
	volatile int8_t x8376 = 12;
	volatile uint64_t t90 = 482698260LLU;

	t90 = (x8373<<((x8374%x8375)+x8376));

	if (t90 != 15985955525752041472LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x8573 = UINT8_MAX;
	static int32_t x8574 = -1;
	int8_t x8575 = INT8_MIN;
	static uint8_t x8576 = 3U;

	t91 = (x8573<<((x8574%x8575)+x8576));

	if (t91 != 1020) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x8617 = 304LL;
	volatile int32_t x8618 = -1;
	static int64_t x8619 = -142277LL;
	int16_t x8620 = 2;
	int64_t t92 = -113454374636LL;

	t92 = (x8617<<((x8618%x8619)+x8620));

	if (t92 != 608LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x8833 = 48LL;
	uint32_t x8834 = UINT32_MAX;
	static int16_t x8835 = 62;
	volatile int64_t t93 = -56731729135991LL;

	t93 = (x8833<<((x8834%x8835)+x8836));

	if (t93 != 25769803776LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x8845 = 0;
	static uint32_t x8847 = UINT32_MAX;
	volatile int32_t t94 = -144;

	t94 = (x8845<<((x8846%x8847)+x8848));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x8857 = 219926LL;
	uint8_t x8858 = 62U;
	int32_t x8859 = 41;
	static int32_t x8860 = -1;
	int64_t t95 = -5868LL;

	t95 = (x8857<<((x8858%x8859)+x8860));

	if (t95 != 230609125376LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x8989 = UINT32_MAX;
	static uint16_t x8990 = 0U;
	int8_t x8992 = 1;
	volatile uint32_t t96 = 1907112685U;

	t96 = (x8989<<((x8990%x8991)+x8992));

	if (t96 != 4294967294U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x9013 = UINT16_MAX;
	uint16_t x9014 = 23U;
	static uint8_t x9015 = UINT8_MAX;
	volatile int8_t x9016 = -15;
	int32_t t97 = 256968;

	t97 = (x9013<<((x9014%x9015)+x9016));

	if (t97 != 16776960) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x9065 = 135165638075LLU;
	uint16_t x9066 = UINT16_MAX;
	int16_t x9067 = -8;

	t98 = (x9065<<((x9066%x9067)+x9068));

	if (t98 != 8650600836800LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x9075 = -1;
	volatile uint64_t x9076 = 62LLU;
	uint64_t t99 = 996387323559279LLU;

	t99 = (x9073<<((x9074%x9075)+x9076));

	if (t99 != 13835058055282163712LLU) { NG(); } else { ; }
	
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

